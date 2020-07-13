//
//  CollectTabViewController.swift
//  Torque
//
//  Created by kehlin swain on 7/1/20.
//  Copyright © 2020 HX Innovations. All rights reserved.
//

import UIKit
import WearnotchSDK
import Firebase

class CollectTabViewController: UIViewController {
    
    @IBOutlet weak var statusLabel: UILabel!
    @IBOutlet weak var networkLabel: UILabel!
    
    @IBOutlet weak var realtimeSwitch: UISwitch!
    
    var captureTimeConfiguration = MainTabSharedData.captureTimeConfiguration
    var imuDictionary: [[String : Float]]? = [["test":9.089],["nameTwo":9.898]]
    var blueToothPeripheralsDelegate: BluetoothControllerDelegate?
    var currentMeasurement: NotchMeasurement? = nil
    var isStartClicked = false
    var emgData = EMGStruct()
    var currentCancellable: NotchCancellable? = nil
    var measurementURL: URL?
    var MVCDict: [String:Double] = [:]

    override func viewDidLoad() {
        super.viewDidLoad()

      //realtimeSwitch.addTarget(self, action: #selector(realtimeSwitchChanged(_ :)), for: .valueChanged)
    }
    
    
    @IBAction func actionExport(_ sender: Any) {
        export()
    }
    
 @IBAction func actionConfigureCapture() {
        self.showStatusLabel()
        
        if realtimeSwitch.isOn {
            _ = AppDelegate.service.configureCapture(
                isShowingColors: true,
                success: defaultSuccessCallback,
                failure: defaultFailureCallback,
                progress: { _ in },
                cancelled: { })
            
        } else {
            let configurationTime = Int64(self.captureTimeConfiguration * 1000)
            _ = AppDelegate.service.configureTimedCapture(
                timerMillis: configurationTime, isShowingColors: false,
                success: defaultSuccessCallback,
                failure: defaultFailureCallback,
                progress: { _ in },
                cancelled: { })
            
        }
    }
    
    @IBAction func actionCapture() {
        self.showStatusLabel()
        
        if realtimeSwitch.isOn {
            DispatchQueue.main.async {
                let storyboard = UIStoryboard(name: "Main", bundle: nil)
                let viewController = storyboard.instantiateViewController(withIdentifier: "visualizerScreenId") as! VisualiserViewController
                viewController.visualizerDelegate = self
                self.navigationController?.pushViewController(viewController, animated: true)
                
            }
        } else {
            
            }
            _ = AppDelegate.service.timedCapture(
                success: { result in
                    self.currentMeasurement = result
                    self.hideStatusLabel()
                    self.showStatusLabel(message: "imu capture complete")
            }, failure: defaultFailureCallback,
               progress: { _ in },
               cancelled: { })
        if BluetoothPreferences.btManager != nil {
            blueToothPeripheralsDelegate?.didAddPeripherals(array: BluetoothPreferences.peripherals, btmanager: BluetoothPreferences.btManager) // == nil (let's see why??)
            EMGPeripheral.shared.startOrStopCollection(startClicked: true)
        }else {
            print("no bluetooth connection")
            showFailedBleConnection()
        }
        //start emg sensor capture
        var progressSeconds = 0.0
        let elapsedTime = captureTimeConfiguration
        self.isStartClicked = true
        Timer.scheduledTimer(withTimeInterval: 1, repeats: true) { (Timer) in
            progressSeconds += 1
            if Int(progressSeconds) >= elapsedTime {
                print("emg has started")
                self.isStartClicked = false
                Timer.invalidate()
                self.showStatusLabel(message: "Saved EMG, Click Download Button")
                EMGPeripheral.shared.startOrStopCollection(startClicked: false)
                self.emgData = EMGPeripheral.shared.getEmgData()
                
            }
            
            
        }
    }
    
    @IBAction func actionDownload() {
        self.showStatusLabel()
        
        if currentMeasurement == nil {
            self.showToast("No recorded measurement")
            return
        }
        
        if realtimeSwitch.isOn {
            if currentCancellable != nil {
                currentCancellable?.cancel()
            }
            self.hideStatusLabel()
        } else {
            _ = AppDelegate.service.download(
                outputFilePath: createFile(), measurement: currentMeasurement!,
                success: { result in
                 self.hideStatusLabel()
            }, failure: { result in
                self.showFailure(notchError: result)
            }, progress: { progress in
                self.showStatusLabel(message: "Download progress: \(String(describing: progress.progress))")
            }, cancelled: { })
            
            
        }
    }
    
    @IBAction func actionVisualize() {
        if measurementURL == nil {
            self.showToast("No downloaded measurement")
        } else {
            openMeasurement()
        }
    }
    
    @IBAction func actionWorkoutInit() {
        self.showStatusLabel()
        
        guard let workoutUrl = MainTabSharedData.selectedConfiguration.configurationFile else {
            assertionFailure("Configuration file not found")
            return
        }
        
        do {
            let skeleton = try loadSkeleton()
            var workout = try NotchWorkout.from(
                name: MainTabSharedData.selectedConfiguration.name,
                skeleton: skeleton,
                configFilePath: workoutUrl.path)
            
            if realtimeSwitch.isOn {
                workout = workout.withRealTime(realtime: true)
            }
            
            _ = AppDelegate.service.initWithWorkout(
                workout: workout,
                success: { result in
                    let lastCalibration = self.lastCalibrationTime()
                    
                    if (lastCalibration <= 0) {
                        print("Never calibrated. This will raise an error at capture")
                    } else if (Int64(Date().timeIntervalSince1970 * 1000) - lastCalibration > 8 * 3600 * 1000) {
                        print("Calibration was more than 8 hours ago. This can lead to inaccurate measurements")
                    }
                    
                    self.showToast()
                    self.hideStatusLabel()
                    // self.updateNetwork()
            }, failure: defaultFailureCallback,
               progress: { _ in },
               cancelled: {})
            
        } catch let error as NSError {
            print(error.localizedDescription)
        }
    }
    func defaultSuccessCallback() {
        self.showToast()
        self.hideStatusLabel()
    }
    
    func defaultFailureCallback(_ notchError: NotchError) {
        self.showFailure(notchError: notchError)
        self.hideStatusLabel()
    }
    
    
    private func hideStatusLabel() {
        DispatchQueue.main.async {
            self.statusLabel.isHidden = true
        }
    }
    
    private func showStatusLabel(message: String = "Progress...") {
        DispatchQueue.main.async {
            self.statusLabel.text = message
            self.statusLabel.isHidden = false
        }
    }
    
    private func createFile() -> String {
        let dateString = createCurrentDateString()
        let fileName = "\(dateString).zip"
        
        let captureDirectory = NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true).first!
        
        measurementURL = URL(fileURLWithPath: "\(captureDirectory)/\(fileName)")
        
        return measurementURL!.path
    }
    
    private func createCurrentDateString() -> String{
        let dateFormatter = DateFormatter()
        dateFormatter.dateFormat = "yyyy-MM-dd_HH-mm-ss"
        dateFormatter.locale = Locale.init(identifier: "en_US")
        return dateFormatter.string(from: Date())
    }
    
    private func updateNetwork() {
        var networkString = ""
        if let network = AppDelegate.service.getNetwork()  {
            for device in network.deviceSet {
                networkString.append("\(device.networkId)\n")
            }
        }
        DispatchQueue.main.async {
            self.networkLabel.text = networkString
        }
    }
    
    private func lastCalibrationTime() -> Int64 {
        var lastTime = Int64(Date().timeIntervalSince1970 * 1000)
        let actionDeviceSet = AppDelegate.service.getNetwork()?.deviceSet
        let notchDevices: [ NotchDevice ]? = AppDelegate.service.findAllDevices()
        for actionDevice in actionDeviceSet! {
            let networkId = actionDevice.networkIdNum
            for device in notchDevices! {
                if device.notchActionDevice.networkIdNum == networkId {
                    if device.lastCalibration <= lastTime {
                        lastTime = device.lastCalibration
                    }
                }
            }
        }
        
        return lastTime
    }

}


// MARK: Download Delegate from 3D Rendering
extension CollectTabViewController: VisualizerDownloadDelegate {
    
    func getImuData(data: [[String : Float]]) {
        imuDictionary?.append(contentsOf: data)
    }
}

//
extension CollectTabViewController {
    func uploadCSVFile(path: NSURL){
            let storage = Storage.storage()
            
            // Create a root reference
            let storageRef = storage.reference()
            
            let localFile = path
            
            //meta data
            let newMetaData = StorageMetadata()
            
            
        if MainTabSharedData.shoeId.isEmpty {
                newMetaData.customMetadata = ["shoeId":"None"]
                //newMetaData.customMetadata = ["shoeName": "None"]
            }else {
                newMetaData.customMetadata = ["shoeId": MainTabSharedData.shoeId]
                //newMetaData.customMetadata = ["shoeName": self.shoeName]
            }
            
            let time = getTime()
            // Create a reference to "mountains.jpg"
        let equivalencyTest = storageRef.child("test/\(MainTabSharedData.shoeName ?? "None")-\(time)")
            
            
            
          // Upload the file to the path "images/rivers.jpg"
            DispatchQueue.main.async {
                let uploadTask = equivalencyTest.putFile(from: localFile as URL, metadata: newMetaData) { metadata, error in
                  guard let metadata = metadata else {
                    // Uh-oh, an error occurred!
                    let s = uploadComplete(message: "Error \(error)")
                    self.present(s, animated:true)
                      print("error upload file to storage folder \(error)")
                    return
                  }
                  // Metadata contains file metadata such as size, content-type.
                  let size = metadata.size
                  // You can also access to download URL after upload.
                  equivalencyTest.downloadURL { (url, error) in
                    guard let downloadURL = url else {
                      // Uh-oh, an error occurred!
                      print("download link, \(url)")
    //                    let s = uploadComplete(message: "Files Uploaded to database")
    //                    self.present(s, animated:false)
                        self.showStatusLabel(message: "successfully uploaded to the database")
                      return
                    }
                  }
                }
            }


        }
    
}
