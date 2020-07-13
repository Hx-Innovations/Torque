//
//  Extensions+CollectTabVC.swift
//  Torque
//
//  Created by kehlin swain on 7/13/20.
//  Copyright © 2020 HX Innovations. All rights reserved.
//

import Foundation
import WearnotchSDK
import Accelerate



extension CollectTabViewController {
    func export() {
        let fileName = "imuDownload.csv"
        let path = NSURL(fileURLWithPath: NSTemporaryDirectory()).appendingPathComponent(fileName)
        var csvText = "ankleAngleX,ankleAngleY,ankleAngleZ,lowLegAngleMag,lowLegAngleX,lowLegAngleY,lowLegAngleZ,lowLegAngleVeloMag,lowLegAngleVeloX,lowLegAngleVeloY,lowLegAngleVeloZ,lowLegAngleAccelX,lowLegAngleAccelY,lowLegAngleAccelZ,footAngleMag,footAngleX,footAngleY,footAngleZ,footAngleVeloMag,footAngleVeloX,footAngleVeloY,footAngleVeloZ,footAngleAccelMag,footAngleAccelX,footAngleAccelY,footAngleAccelZ,footPosMag,footPosX,footPosY,footPosZ,footSpeedMag,footSpeedX,footSpeedY,footSpeedZ,footAccelMag,footAccelX,footAccelY,footAccelZ,lowLegPosMag,lowLegPosX,lowLegPosY,lowLegPosZ,lowLegSpeedMag,lowLegSpeedX,lowLegSpeedY,lowLegSpeedZ,lowLegAccelMag,lowLegAccelX,lowLegAccelY,lowLegAccelZ,medGastro,tibAnterior\n"
        let count = self.imuDictionary?.count
        var angleX, angleY, angleZ: Float
        var i = 0
        
        //Linear Inteprolation Medial Gastro and Tibilar Anterior
        //let imuSampleTime = 40 * captureTimeConfiguration
        var imuSampleTime = 0
        if imuDictionary?.count != 0 {
            imuSampleTime = imuDictionary!.count
        } else {
            imuSampleTime = captureTimeConfiguration * 50
        }
        
        var emgMedGastro : [Double] = []
        
        
        //linear intperplation activated
        if emgData.medGastroc.count != 0 {

            

            let controlVector: [Float] = vDSP.ramp(in: 0 ... Float(emgData.medGastroc.count) - 1,
            count: imuSampleTime)
            var values = emgData.medGastroc.map { Float($0)}
            values = vDSP.linearInterpolate(elementsOf: values,
            using: controlVector)
            emgData.medGastroc = values.map {Double($0)}
            


        }
        
        if emgData.latGastroc.count != 0 {
              let controlVector: [Float] = vDSP.ramp(in: 0 ... Float(emgData.latGastroc.count) - 1,
                      count: imuSampleTime)
                      var values = emgData.latGastroc.map { Float($0)}
                      values = vDSP.linearInterpolate(elementsOf: values,
                      using: controlVector)
                      emgData.latGastroc = values.map {Double($0)}
        }
        if emgData.tibAnterior.count != 0 {
              let controlVector: [Float] = vDSP.ramp(in: 0 ... Float(emgData.tibAnterior.count) - 1,
                      count: imuSampleTime)
                      var values = emgData.tibAnterior.map { Float($0)}
                      values = vDSP.linearInterpolate(elementsOf: values,
                      using: controlVector)
                      emgData.tibAnterior = values.map {Double($0)}
        }
        if emgData.peroneals.count != 0 {
              let controlVector: [Float] = vDSP.ramp(in: 0 ... Float(emgData.peroneals.count) - 1,
                      count: imuSampleTime)
                      var values = emgData.peroneals.map { Float($0)}
                      values = vDSP.linearInterpolate(elementsOf: values,
                      using: controlVector)
                      emgData.peroneals = values.map {Double($0)}
        }
        
        ///Save emg Data to IMUDictionary
        if imuDictionary != nil {
            let imulength = imuDictionary!.count
            for i in 0..<imulength {
                if emgData.medGastroc.count != 0{
                    if let MedGastroc = self.MVCDict["medialGastroc"] {
                        var normalize = self.emgData.medGastroc[i]/MedGastroc
                        normalize *= 100
                        imuDictionary![i]["medGastro"] = Float(normalize)
                    }
                    else {
                        imuDictionary![i]["medGastro"] = Float(emgData.medGastroc[i])
                    }
                }
                
                if emgData.latGastroc.count != 0{
                    // check for MVC value storage
                    if let LatGastroc = self.MVCDict["lateralGastroc"]{
                        var normalize = self.emgData.latGastroc[i]/LatGastroc
                        normalize *= 100
                        imuDictionary![i]["latGastro"] = Float(normalize)
                    }else {
                        imuDictionary![i]["latGastro"] = Float(emgData.latGastroc[i])
                    }
                }
                
                if emgData.tibAnterior.count != 0{
                    //check for MVC value storage
                    if let TibAnterior = self.MVCDict["Anterior"]{
                        var normalize = self.emgData.tibAnterior[i]/TibAnterior
                        normalize *= 100
                        imuDictionary![i]["tibAnt"] = Float(normalize)
                    }else{
                        imuDictionary![i]["tibAnt"] = Float(emgData.tibAnterior[i])
                    }
                    
                }
                
                if emgData.peroneals.count != 0{
                    //check for MVC value storage
                    if let Peroneals = self.MVCDict["Peroneals"]{
                        var normalize = self.emgData.peroneals[i]/Peroneals
                        normalize *= 100
                        imuDictionary![i]["peroneals"] = Float(normalize)
                    }
                    imuDictionary![i]["peroneals"] = Float(emgData.peroneals[i])
                }
            }
            
            //clear emg data
            emgData.medGastroc = []
            emgData.latGastroc = []
            emgData.tibAnterior = []
            emgData.peroneals = []
            
        }
        
        if imuDictionary != nil{
            var imuMotionList = "\(i),"
            for item in imuDictionary!{
                if (item["angleX"] != nil){
                angleX = item["angleX"] ?? 0.00
                angleY = item["angleY"] ?? 0.00
                angleZ = item["angleZ"] ?? 0.00
                    csvText.append(contentsOf: "\(angleX), \(angleY), \(angleZ),")
                    
                }else {
                    csvText.append(contentsOf: ",,,")
                }
                
                if (item["lowerLegAngleX"] != nil){
                    let lowLegAngleX = item["lowerLegAngleX"] ?? 0.00
                    let lowLegAngleY = item["lowerLegAngleY"] ?? 0.00
                    let lowLegAngleZ = item["lowerLegAngleZ"] ?? 0.00
                    let lowerLegAngleMag = item["lowerLegAngleMag"] ?? 0.00
                    csvText.append(contentsOf: "\(lowerLegAngleMag), \(lowLegAngleX), \(lowLegAngleY), \(lowLegAngleZ),")
                }else{
                    csvText.append(contentsOf: ",,,,")
                }
                
                if (item["lowerLegAngleVeloX"] != nil){
                    let angleVeloX = item["lowerLegAngleVeloX"] ?? 0.00
                    let angleVeloY = item["lowerLegAngleVeloY"] ?? 0.00
                    let angleVeloZ = item["lowerLegAngleVeloZ"] ?? 0.00
                    let lowerLegAngleVeloMag = item["lowerLegAngleVeloMag"] ?? 0.00
                    csvText.append(contentsOf: "\(lowerLegAngleVeloMag), \(angleVeloX), \(angleVeloY), \(angleVeloZ),")
                }else{
                    csvText.append(contentsOf: ",,,,")
                }
                
                if (item["angleAccelX"] != nil){
                    let angleAccelX = item["angleAccelX"] ?? 0.00
                    let angleAccelY = item["angleAccelY"] ?? 0.00
                    let angleAccelZ = item["angleAccelZ"] ?? 0.00
                    csvText.append(contentsOf: "\(angleAccelX), \(angleAccelY), \(angleAccelZ),")
                }else {
                    csvText.append(contentsOf: ",,,")
                }
                if (item["footAngleX"] != nil){
                    let footAngleX = item["footAngleX"]!
                    let footAngleY = item["footAngleY"]!
                    let footAngleZ = item["footAngleZ"]!
                    let footAngleMag = item["footAngleMag"]!
                    csvText.append(contentsOf: "\(footAngleMag),\(footAngleX), \(footAngleY), \(footAngleZ),")
                }else {
                    csvText.append(contentsOf: ",,,,")
                }
                if (item["footAngleVeloX"] != nil){
                    let footAngleVeloX = item["footAngleVeloX"]!
                    let footAngleVeloY = item["footAngleVeloY"]!
                    let footAngleVeloZ = item["footAngleVeloZ"]!
                    let footAngleVeloMag = item["footAngleVeloMag"]!
                    csvText.append(contentsOf: "\(footAngleVeloMag),\(footAngleVeloX), \(footAngleVeloY), \(footAngleVeloZ),")
                }else {
                    csvText.append(contentsOf: ",,,,")
                }
                if (item["footAngleAccelX"] != nil){
                    let footAngleAccelX = item["footAngleAccelX"]!
                    let footAngleAccelY = item["footAngleAccelY"]!
                    let footAngleAccelZ = item["footAngleAccelZ"]!
                    let footAngleAccelMag = item["footAngleAccelMag"]!
                    csvText.append(contentsOf: "\(footAngleAccelMag),\(footAngleAccelX), \(footAngleAccelY), \(footAngleAccelZ),")
                }else {
                    csvText.append(contentsOf: ",,,,")
                }
                
                if (item["posX"] != nil){
                    let posX = item["posX"]!
                    let posY = item["posY"]!
                    let posZ = item["posZ"]!
                    let posMag = item["posMag"]!
                    csvText.append(contentsOf: "\(posMag), \(posX), \(posY), \(posZ),")
                }else {
                    csvText.append(contentsOf: ",,,,")
                }
                
                if (item["footSpeedX"] != nil){
                    let footSpeedX = item["footSpeedX"]!
                    let footSpeedY = item["footSpeedY"]!
                    let footSpeedZ = item["footSpeedZ"]!
                    let footSpeedMag = item["footSpeedMag"]!
                    csvText.append(contentsOf: "\(footSpeedMag), \(footSpeedX), \(footSpeedY), \(footSpeedZ),")
                }else {
                    csvText.append(contentsOf: ",,,,")
                }
                
                if (item["footAccelX"] != nil){
                    let footAccelX = item["footAccelX"]!
                    let footAccelY = item["footAccelY"]!
                    let footAccelZ = item["footAccelZ"]!
                    let footAccelMag = item["footAccelMag"]!
                    csvText.append(contentsOf: "\(footAccelMag), \(footAccelX), \(footAccelY), \(footAccelZ),")
                }else {
                    csvText.append(contentsOf: ",,,,")
                }
                
                if (item["lowerLegPosX"] != nil){
                    let lowerLegPosX = item["lowerLegPosX"]!
                    let lowerLegPosY = item["lowerLegPosY"]!
                    let lowerLegPosZ = item["lowerLegPosZ"]!
                    let lowerLegPosMag = item["lowerLegPosMag"]!
                    csvText.append(contentsOf: "\(lowerLegPosMag), \(lowerLegPosX), \(lowerLegPosY), \(lowerLegPosZ),")
                }else {
                    csvText.append(contentsOf: ",,,,")
                }
                
                if (item["lowerLegSpeedX"] != nil){
                    let lowerLegSpeedX = item["lowerLegSpeedX"]!
                    let lowerLegSpeedY = item["lowerLegSpeedY"]!
                    let lowerLegSpeedZ = item["lowerLegSpeedZ"]!
                    let lowerLegSpeedMag = item["lowerLegSpeedMag"]!
                    csvText.append(contentsOf: "\(lowerLegSpeedMag), \(lowerLegSpeedX), \(lowerLegSpeedY), \(lowerLegSpeedZ),")
                }else {
                    csvText.append(contentsOf: ",,,,")
                }
                
                if (item["lowerLegAccelX"] != nil){
                    let lowLegAccelX = item["lowerLegAccelX"]!
                    let lowerLegAccelY = item["lowerLegAccelY"]!
                    let lowerLegAccelZ = item["lowerLegAccelZ"]!
                    let lowerLegAccelMag = item["lowerLegAccelMag"]!
                    csvText.append(contentsOf: "\(lowerLegAccelMag), \(lowLegAccelX), \(lowerLegAccelY), \(lowerLegAccelZ),")
                }else {
                    csvText.append(contentsOf: ",,,,")
                }
                
                if (item["medGastro"] != nil){
                    let medGastro = item["medGastro"]!
                    csvText.append(contentsOf: "\(medGastro),")
                }else {
                    csvText.append(contentsOf: ",")
                }
                
                if (item["tibAnt"] != nil){
                    let tibAnterior = item["tibAnt"]!
                    csvText.append(contentsOf: "\(tibAnterior)\n")
                }else {
                    csvText.append(contentsOf: "\n")
                }
            }
            
            //upload entire csv file
            //self.uploadTestDB(imuDictionary: imuDictionary)
            self.uploadCSVFile(path: path! as NSURL)
        
            // clear IMU data
            imuDictionary = [[String:Float]]()
            
            do {
                try csvText.write(to: path!, atomically: true, encoding: String.Encoding.utf8)
                let vcExportCSV = UIActivityViewController(activityItems: [path], applicationActivities: [])
                vcExportCSV.excludedActivityTypes = [
                    UIActivity.ActivityType.assignToContact,
                    UIActivity.ActivityType.saveToCameraRoll,
                    UIActivity.ActivityType.postToFlickr,
                    UIActivity.ActivityType.postToVimeo,
                    UIActivity.ActivityType.postToTencentWeibo,
                    UIActivity.ActivityType.postToTwitter,
                    UIActivity.ActivityType.postToFacebook,
                    UIActivity.ActivityType.openInIBooks
                ]
                
                if let popoverController = vcExportCSV.popoverPresentationController {
                    popoverController.sourceRect = CGRect(x: UIScreen.main.bounds.width / 2, y: UIScreen.main.bounds.height / 2, width: 0, height: 0)
                    popoverController.sourceView = self.view
                    popoverController.permittedArrowDirections = UIPopoverArrowDirection(rawValue: 0)
                    let doneButton = UIBarButtonItem(title: "Done", style: .done, target: self, action: #selector(popView))
                    popoverController.barButtonItem = navigationItem.rightBarButtonItem
                }
                
                present(vcExportCSV, animated: true, completion: nil)
                
            }catch {
                print("Failed to create file")
                showFailedActionAlert(message: "Failed to Create CSV File")
            }
            
        } else {
            print("no loaded imu data")
            showFailedActionAlert(message: "No Loaded IMU Data")
        }
        
    }
    
    @objc func popView(){
        self.presentedViewController?.dismiss(animated: true, completion: nil)
    }

}

extension CollectTabViewController {
    func loadSkeleton() throws -> NotchSkeleton {
        let skeletonJson = NSDataAsset(name: "skeleton")
        return try NotchSkeleton.from(configJsonString: String(data: (skeletonJson?.data)!, encoding: String.Encoding.utf8)!)
        
    }
    
    func openMeasurement(isShowingExample: Bool = false) {
        let storyboard = UIStoryboard(name: "Main", bundle: nil)
        let viewController = storyboard.instantiateViewController(withIdentifier: "visualizerScreenId") as! VisualiserViewController
        
        if isShowingExample {
            viewController.isExampleMeasurement = true
            viewController.visualizerDelegate = self
            viewController.sensorConfiguration = MainTabSharedData.selectedConfiguration

        } else {
            viewController.measurementURL = measurementURL
            viewController.visualizerDelegate = self
            viewController.sensorConfiguration = MainTabSharedData.selectedConfiguration
        }
        DispatchQueue.main.async(){
            self.navigationController?.pushViewController(viewController, animated: true)
        }
    }
}


