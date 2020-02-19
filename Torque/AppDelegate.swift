
//  AppDelegate.swift
//  Torque
//
//  Created by kehlin swain on 1/13/20.
//  Copyright © 2020 HX Innovations. All rights reserved.
//

import UIKit
import WearnotchSDK
import Firebase
@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?
    
    // initialize the notch mock service
    public static let notchAPI = try! NotchAPI.Builder().build()
    public static let service = notchAPI.service
    
    
    func application(_ application: UIApplication,
       didFinishLaunchingWithOptions launchOptions:
        [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
       FirebaseApp.configure()
       return true
     }
}


