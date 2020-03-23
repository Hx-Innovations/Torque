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
    
    func getOrgs(_ completion: @escaping ([String]) -> Void){
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
                    print("Here???  2 \(document.documentID) => \(document.data())")
                    let org = document.data() as? [String: String]
                    let orgName = org?["name"] ?? ""
                    print("Org name here", orgName)
                    organizationList.append(orgName)
                }
                completion(organizationList)
            }
        }
    }
    
    func postTest(shoeId: String,_ completion: @escaping (String) -> Void){
        var db: Firestore!
        
        let settings = FirestoreSettings()
        Firestore.firestore().settings = settings
        
        db = Firestore.firestore()
        
        let testdata: [String : Any] = [
            "comfort" : 98,
            "fatigue" : 100,
            "shoeId" : "TQLA8PVQuOBfzrxijdEh"
        ]
        db.collection("test").addDocument(data: testdata) { (err) in
            if let err = err {
                completion("error")
            } else {
                completion("successful upload")
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
