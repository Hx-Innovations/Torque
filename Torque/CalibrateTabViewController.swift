//
//  CalibrateTabViewController.swift
//  Torque
//
//  Created by kehlin swain on 7/1/20.
//  Copyright © 2020 HX Innovations. All rights reserved.
//

import UIKit
import WearnotchSDK
import CoreBluetooth

class CalibrateTabViewController: UIViewController {
    
    @IBOutlet weak var dockAnimationImageView: UIImageView!
    @IBOutlet weak var statusLabel: UILabel!
    
    @IBOutlet weak var steadyInitButton: UIButton!
    @IBOutlet weak var captureInitButton: UIButton!
    
    @IBOutlet weak var selectedConfigurationLabel: UILabel!
    var currentCancellable: NotchCancellable? = nil
    var MVCDict: [String:Double] = [:]
    var blueToothPeripheralsDelegate: BluetoothControllerDelegate?
    
    
    private var selectedConfiguration: ConfigurationType = ConfigurationType.chest1 {
        didSet {
            selectedConfigurationLabel.text = selectedConfiguration.name
            steadyInitButton.setTitle("\(selectedConfiguration.notchCount) notch init", for: .normal)
            captureInitButton.setTitle("\(selectedConfiguration.notchCount) notch init", for: .normal)
        }
    }
    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        initDockAnimation()
    }
    
    
    private func initDockAnimation() {
        var imgListArray = [UIImage]()
        
        for countValue in 0...132 {
            let strImageName : String = "c\(String(format: "%04d", countValue)).png"
            let image  = UIImage(named:strImageName)
            imgListArray.append(image!)
        }
        dockAnimationImageView.animationImages = imgListArray;
        dockAnimationImageView.animationRepeatCount = 1
        dockAnimationImageView.animationDuration = 7.0
        
        dockAnimationImageView.isHidden = true
        dockAnimationImageView.transform = CGAffineTransform(rotationAngle: CGFloat(Double.pi))
    }

    @IBAction func organisations() {
        
    }
    
    @IBAction func changeWorkout() {
        let selectionController = UIAlertController(title: "Choose workout", message: nil, preferredStyle: .alert)
        
        ConfigurationType.allItems.forEach { (type) in
            selectionController.addAction(
                UIAlertAction(
                    title: type.name,
                    style: .default,
                    handler: { (_) in
                        //self.selectedConfiguration = type
                }))
        }
        
        selectionController.addAction(
            UIAlertAction(title: "Cancel", style: .cancel, handler: nil))
        
        present(selectionController, animated: true, completion: nil)
    }
    @IBAction func changeTime() {
        
    }
    @IBAction func uncheckedInit() {
        
    }
    @IBAction func configureCalibration() {
        self.showStatusLabel()
        
        _ = AppDelegate.service.configureCalibration(
            isShowingColors: false,
            success: defaultSuccessCallback,
            failure: defaultFailureCallback,
            progress: {_ in },
            cancelled: {})
    }
    @IBAction func startCalibration() {
        DispatchQueue.main.async {
            self.dockAnimationImageView.isHidden = false
            self.dockAnimationImageView.startAnimating()
        }
        
        currentCancellable = AppDelegate.service.calibration(
            success: { result in
                DispatchQueue.main.async {
                    self.dockAnimationImageView.isHidden = true
                    self.dockAnimationImageView.stopAnimating()
                }
        }, failure: { result in
            DispatchQueue.main.async {
                self.dockAnimationImageView.isHidden = true
                self.dockAnimationImageView.stopAnimating()
            }
            self.showFailure(notchError: result)
        }, progress: { _ in },
           cancelled: {})
        
    }
    func defaultFailureCallback(_ notchError: NotchError) {
        self.showFailure(notchError: notchError)
        self.hideStatusLabel()
    }
    
    func defaultSuccessCallback() {
        self.showToast()
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
    
    @IBAction func getCalibrationData() {
        self.showStatusLabel(message: "Connecting...")
        
        self.currentCancellable = AppDelegate.service.getCalibrationData(
            success: { result in
                if result == false {
                    print("WARNING: Calibration may be wrong. Its advised to try again.")
                }
                self.hideStatusLabel()
        }, failure: defaultFailureCallback,
           progress: { _ in },
           cancelled: {})
        
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        
        if segue.identifier == "MVCAnteriorSegue" {
            let mvcVC = segue.destination as? MVCAnteriorViewController
            mvcVC?.mvcDelegate = self
            blueToothPeripheralsDelegate?.didAddPeripherals(array: BluetoothPreferences.peripherals, btmanager: BluetoothPreferences.btManager)
        }else if segue.identifier == "MVCPosterioSegue" {
            let mvcVC = segue.destination as? MVCPosterioViewController
            mvcVC?.mvcDelegate = self
            blueToothPeripheralsDelegate?.didAddPeripherals(array: BluetoothPreferences.peripherals, btmanager: BluetoothPreferences.btManager)
        }else if segue.identifier == "MVCLateralSegue" {
            let mvcVC = segue.destination as?  MVCLateralViewController
            mvcVC?.mvcDelegate = self
            blueToothPeripheralsDelegate?.didAddPeripherals(array: BluetoothPreferences.peripherals, btmanager: BluetoothPreferences.btManager)
        }else if segue.identifier == "SensorBodyAttachment"{
            let sensorBodyVC = segue.destination as? SensorBodyAttachmentViewController
            // pass the configuration object here
            sensorBodyVC?.sensorConfiguration = selectedConfiguration
            
        }else if segue.identifier == "Visualizer"{
            let visualizerVC = segue.destination as? VisualiserViewController
            // pass the configuration object here
            visualizerVC?.sensorConfiguration = selectedConfiguration
            print("selected configuration, ", selectedConfiguration)
        }
        else if segue.identifier == "Organizations" {
            let organizationsVC = segue.destination as? OrgViewController
            
            print("Orgs...")
        }
        let nav = segue.destination as? PeripheralsViewController
       // let vc = nav?.topViewController as? PeripheralsViewController
        nav?.delegateForPeripheralView = self
    }
}


extension CalibrateTabViewController: MVCDelegate, PosteriorMVCDelegate {
    func addMVC(MVC: (String, Double)) {
        print("We are in the MVC view controller")
        self.MVCDict[MVC.0] = MVC.1
        
        self.showToast("\(MVC.0) MVC: \(MVC.1)")
    }
    
    func addPostMVC(MVC: (String, Double, String, Double)) {
        self.MVCDict[MVC.0] = MVC.1
        self.MVCDict[MVC.2] = MVC.3
        if MVC.3 != 0.0 {
            self.showToast("\(MVC.0) MVC: \(MVC.1) & \(MVC.2) MVC: \(MVC.3) ")
        }else {
            self.showToast("\(MVC.0) MVC: \(MVC.1)")
        }
        
    }
    
}


//MARK: EMG PeripheralsViewController Delegate
extension CalibrateTabViewController: PeripheralsViewControllerDelegate {
   
    func didAddPeripherals(array: [Peripheral]?, btmanager: CBCentralManager?) {
        print("we have ran the peripheral view delegate")
        BluetoothPreferences.btManager = btmanager
        BluetoothPreferences.peripherals = array
    }
    
}
