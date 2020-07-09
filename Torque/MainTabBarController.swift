//
//  MainTabBarController.swift
//  Torque
//
//  Created by kehlin swain on 7/1/20.
//  Copyright © 2020 HX Innovations. All rights reserved.
//

import UIKit
import CoreBluetooth

class MainTabSharedData {
    // static var bluetoothManager: Corebl
    static var array: [Peripheral]?
    static var btmanager: CBCentralManager?
}

class MainTabBarController: UITabBarController {

    private let LICENSE_CODE = "x7XURbDfbQWKYOQE7kr3"
    
    override func viewDidLoad() {
        AppDelegate.service.license = LICENSE_CODE
        super.viewDidLoad()

        // Do any additional setup after loading the view.
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
