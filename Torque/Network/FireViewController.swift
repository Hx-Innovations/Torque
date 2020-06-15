//
//  FireViewController.swift
//  TestIos
//
//  Created by kehlin swain on 2/12/20.
//  Copyright © 2020 kehlin swain. All rights reserved.
//

import Foundation
import UIKit

import FirebaseCore
import FirebaseFirestore


class FireViewController: UIViewController, UITableViewDelegate, UITableViewDataSource{

    var db: Firestore!

    override func viewDidLoad() {
        super.viewDidLoad()

        // [START setup]
        let settings = FirestoreSettings()

        Firestore.firestore().settings = settings
        // [END setup]
        db = Firestore.firestore()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
   
//    func setupTableView() {
//        tableview.delegate = self
//        tableview.dataSource = self
//
//    }
    
    private func getCollection() {
          // [START get_collection]
          db.collection("organization").getDocuments() { (querySnapshot, err) in
              if let err = err {
                  print("Error getting documents: \(err)")
              } else {
                  for document in querySnapshot!.documents {
                      print("Here??? \(document.documentID) => \(document.data())")
                  }
              }
          }
          // [END get_collection]
      }
    
    func getOrganization() -> [String] {
        var db: Firestore!
        var organizationList:[String] = []
        // [START setup]
        let settings = FirestoreSettings()
        Firestore.firestore().settings = settings
               // [END setup]
        db = Firestore.firestore()
        // [START get_collection]
        db.collection("organization").getDocuments() { (querySnapshot, err) in
            if let err = err {
                print("Error getting documents: \(err)")
            } else {
                for document in querySnapshot!.documents {
                    let orgName = "(\(document.documentID) => \(document.data()))"
                    organizationList.append(orgName)
                }
            }
        }
        // [END get_collection]
        
        return organizationList
    }
    
    func getOrgs(_ completion: @escaping ([[String: String]]) -> Void){
        var db: Firestore!
        var organizationList:[[String: String]] = []
        // [START setup]
        let settings = FirestoreSettings()
        Firestore.firestore().settings = settings
               // [END setup]
        db = Firestore.firestore()
        // [START get_collection]
        db.collection("organization").getDocuments() { (querySnapshot, err) in
            if let err = err {
                print("Error getting documents: \(err)")
            } else {
                for document in querySnapshot!.documents {
                    print("Here???  2 \(document.documentID) => \(document.data())")
                    let org = document.data() as? [String: String]
                    let orgName = org?["name"] ?? ""
                    print("Org name here", orgName)
                    organizationList.append(["orgId": document.documentID, "name": orgName])
                }
                completion(organizationList)
            }
        }
    }
    
    func addOrg(name: String, completion: @escaping ([String: String]?, Error?) -> Void) {
        var db: Firestore!
        // [START setup]
        let settings = FirestoreSettings()
        Firestore.firestore().settings = settings
               // [END setup]
        db = Firestore.firestore()
        let newOrg = ["name": name]
        var ref: DocumentReference? = nil
        ref = db.collection("organization").addDocument(data: newOrg) { (error) in
            
            if let docId = ref?.documentID {
                let addedOrg = ["orgId": docId, "name": name]
                completion(addedOrg, error)
            } else {
                completion(nil, error)
            }
        }
    }
    
    func getShoes(organizationId: String, _ completion: @escaping ([[String: String]]) -> Void) {
        var db: Firestore!
        var organizationList:[[String: String]] = []
        // [START setup]
        let settings = FirestoreSettings()
        Firestore.firestore().settings = settings
               // [END setup]
        db = Firestore.firestore()
        // [START get_collection]
        db.collection("shoes").whereField("organizationId", isEqualTo: organizationId).getDocuments() { (querySnapshot, err) in
            if let err = err {
                print("Error getting documents: \(err)")
            } else {
                for document in querySnapshot!.documents {
                    print("Here???  2 \(document.documentID) => \(document.data())")
                    let shoe = document.data() as? [String: Any]
                    let shoeName = shoe?["name"] as? String ?? ""
                    print("Org name here", shoeName)
                    organizationList.append(["name": shoeName, "shoeId": document.documentID])
                }
                completion(organizationList)
            }
        }
    }
    
    func addShoes(name: String, organizationId: String, sku:String, completion: @escaping ([String: String]?, Error?) -> Void) {
        var db: Firestore!
        // [START setup]
        let settings = FirestoreSettings()
        Firestore.firestore().settings = settings
               // [END setup]
        db = Firestore.firestore()
        let newShoe = ["name": name, "organizationId": organizationId, "sku":sku]
        var ref: DocumentReference? = nil
        ref = db.collection("shoes").addDocument(data: newShoe) { (error) in
            
            if let docId = ref?.documentID {
                let addedShoe = ["shoeId": docId, "name": name]
                completion(addedShoe, error)
            } else {
                completion(nil, error)
            }
        }
    }
    
    func postTest(shoeId: String, imuDictionary: [[String: Float]],_ completion: @escaping (String) -> Void){
        var db: Firestore!
        
        let settings = FirestoreSettings()
        Firestore.firestore().settings = settings
        
        db = Firestore.firestore()
        print("Dictionary...", imuDictionary)
        let testdata: [String : Any] = [
            "comfort" : 98,
            "fatigue" : 100,
            "shoeId" : "TQLA8PVQuOBfzrxijdEh",
            "imuDictionary": imuDictionary
        ]
        db.collection("test").addDocument(data: testdata) { (err) in
            if let err = err {
                completion("error, \(err)")
                print("imu post error \(err)")
            } else {
                completion("successful upload")
                print("succesfully uploaded")
            }
        }
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
            self.getCollection()
            return 4

       }

       func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
//        let cell = tableView.dequeueReusableCell(withIdentifier: <#T##String#>, for: <#T##IndexPath#>)
                var organizations: UITableViewCell!
                //var label:UILabel = "hello"
               organizations.textLabel!.text = "hello"
                return organizations
       }
       

}
