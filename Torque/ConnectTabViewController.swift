//
//  ConnectTabViewController.swift
//  Torque
//
//  Created by kehlin swain on 7/1/20.
//  Copyright © 2020 HX Innovations. All rights reserved.
//

import UIKit
import WearnotchSDK
import CoreBluetooth

class ConnectTabViewController: UIViewController {
    @IBOutlet weak var statusLabel: UILabel!
    @IBOutlet weak var deviceListLabel: UILabel!
    @IBOutlet weak var networkLabel: UILabel!
    let LICENSE_CODE = "x7XURbDfbQWKYOQE7kr3"
    
    
    var currentCancellable: NotchCancellable? = nil

    override func viewDidLoad() {
        super.viewDidLoad()
        
         
        // Do any additional setup after loading the view.
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
    
    @IBAction func actionPairDevice() {
        self.showStatusLabel()
        
        self.currentCancellable = AppDelegate.service.pair(
            success: { _ in
                //self.showToast()
                self.actionShutdown()
                self.hideStatusLabel()
        }, failure: defaultFailureCallback,
           progress: { _ in },
           cancelled: { })
        
    }
    
    
    @IBAction func actionDiagnosticInit() {
        self.showStatusLabel()
        
        _ = AppDelegate.service.diagnosticInit(
            firmwareCheck: false,
            success: { result in
                self.showToast()
                self.hideStatusLabel()
        }, failure: defaultFailureCallback,
           progress: { _ in },
           cancelled: {})
    }
    
    
    @IBAction func resumeFirmwareUpdate() {
        _ = AppDelegate.service.resumeFirmwareUpdate()
    }
    
    @IBAction func actionFirmwareUpdate() {
        self.showStatusLabel()
        
        _ = AppDelegate.service.scan(
            success: { result in
                var filtered = [NotchBluetoothDevice]()
                for device in result {
                    if (device.name.contains("NOTCHR") || device.name.contains("NOTCH2R")) {
                        filtered.append(device)
                    }
                }
                self.updateDevices(currentItem: 0, devices: filtered)
        }, failure: defaultFailureCallback,
           progress: { _ in },
           cancelled: {})
    }
    
    
    @IBAction func actionShutdown() {
        self.showStatusLabel()
        
        if AppDelegate.service.connected {
            self.showStatusLabel()
            
            _ = AppDelegate.service.shutDown(
                success: {
                    self.showToast()
                    self.updateNetwork()
                    self.reloadNotchList()
                    self.hideStatusLabel()
            }, failure: defaultFailureCallback,
               progress: { _ in },
               cancelled: {})
        } else {
            self.showFailedActionAlert(message: "First connect to a network")
        }
    }
    
    @IBAction func actionEraseDevices() {
        self.showStatusLabel()
        _ = AppDelegate.service.erase(
            success: defaultSuccessCallback,
            failure: defaultFailureCallback,
            progress: { _ in },
            cancelled: {})
    }
    
    
    @IBAction func actionRemoveAllDevices() {
        self.showStatusLabel()
        _ = AppDelegate.service.deletePairedDevices(
            success: {
                self.reloadNotchList()
                self.hideStatusLabel()
        }, failure: defaultFailureCallback,
           progress: { _ in },
           cancelled: {})
    }
    
    @IBAction func actionSyncPairing() {
        self.showStatusLabel()
        
        _ = AppDelegate.service.syncPairedDevices(
            success: {
                self.showToast()
                self.reloadNotchList()
                self.hideStatusLabel()
        }, failure: defaultFailureCallback,
           progress: { _ in },
           cancelled: { })
    }
    
    
    @IBAction func disconnectEMG() {
        //stop collection of emg data
        BluetoothPreferences.peripherals?.forEach {
            peripheral in
            BluetoothPreferences.btManager?.cancelPeripheralConnection( peripheral.peripheral)
        }
    }
    
    @IBAction func pairEmg(_ sender: Any) {
        let storyboard = UIStoryboard(name: "Main", bundle: nil)
        let sensorsVC = storyboard.instantiateViewController(identifier: "PeripheralsViewController") as! PeripheralsViewController
        sensorsVC.delegateForPeripheralView = self
    
        self.present(sensorsVC, animated: true)
    }
    
    
    func updateDevices(currentItem: Int, devices: [NotchBluetoothDevice]) {
        if currentItem >= devices.count {
            return
        }
        var p = 0
        _ = AppDelegate.service.firmwareUpdate(
            device: devices[currentItem],
            success: {
                self.hideStatusLabel()
                self.showToast()
        }, failure: defaultFailureCallback,
           progress: { progress in
            if (progress.progress != nil) {
                p = (Int)(progress.progress! * 100)
            }
            self.showStatusLabel(message: "Progess: \(p)%")
            
            if (progress.status?.contains("PAUSED"))! {
                self.showStatusLabel(message: "FW update paused")
            }
        }, cancelled: {})
    }
    
    private func reloadNotchList() {
        var notchDevices = AppDelegate.service.findAllDevices()
        notchDevices.sort() { $0.notchActionDevice.networkIdNum < $1.notchActionDevice.networkIdNum }
        var deviceListText = ""
        for device in notchDevices {
            deviceListText.append("Notch \(device.notchActionDevice.networkIdNum) CH:\(device.channel) \(device.notchActionDevice.deviceMac ?? "")\n")
        }
        
        DispatchQueue.main.async {
            self.deviceListLabel.text = deviceListText
        }
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
    
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}

// MARK: EMG PeripheralsViewController Delegate

extension ConnectTabViewController: PeripheralsViewControllerDelegate {
   
    func didAddPeripherals(array: [Peripheral]?, btmanager: CBCentralManager?) {
        print("we have ran the peripheral view delegate")
        BluetoothPreferences.btManager = btmanager
        BluetoothPreferences.peripherals = array
    }
    
}
