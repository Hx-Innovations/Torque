
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
        
        goToHomeScreen()
       return true
     }
    
    func userAuth() {
        if Auth.auth().currentUser != nil {
                   goToHomeScreen()
               } else {
                   //signIn()
               }
    }
    
    func goToHomeScreen() {


        let storyboard = UIStoryboard(name: "Main", bundle: nil)
        let mainVC = storyboard.instantiateViewController(withIdentifier: "MainTabBarController") as! MainTabBarController
        let navigavtionController = UINavigationController(rootViewController: mainVC)
        
        
        self.window = UIWindow(frame: UIScreen.main.bounds)
        self.window?.rootViewController = mainVC
        self.window?.makeKeyAndVisible()
         // present(navigavtionController, animated: true, completion: nil)
           /*
           let appDelegate = UIApplication.shared.delegate as? AppDelegate
           if let tabBarVC = self.storyboard?.instantiateViewController(withIdentifier: "MainController") as? UINavigationController {
               appDelegate?.window?.rootViewController = tabBarVC
           }
    */
       }
    
}


