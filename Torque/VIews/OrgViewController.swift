//
//  OrgViewController.swift
//  TestIos
//
//  Created by kehlin swain on 2/12/20.
//  Copyright © 2020 kehlin swain. All rights reserved.
//

import UIKit
import FirebaseFirestore


class OrgViewController: UIViewController, UITableViewDataSource, UITableViewDelegate {
    
    var orgCount = 2
    var orgText : [String] = ["hello", "hello2", "random", "another rand"]
    var organization: [String] = []
    var tableView = UITableView()
    
    @IBOutlet weak var isisTable: UITableView!
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.isisTable.dataSource = self
        self.isisTable.delegate = self
        
        // collection organization names
        getOrgData()
      
        // Do any additional setup after loading the view.
    }
   
    func getOrgData() {
        var s = FireViewController()
        s.getOrgs {[weak self] (orgs) in
            self?.orgText = orgs
            self?.isisTable.reloadData()
        }
    }
    
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return orgText.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let cell = UITableViewCell()
        print(orgText)
        cell.textLabel!.text = orgText[indexPath.row]
        return cell
    }

//    @IBAction func didTapLogoutButton(_ sender: UIBarButtonItem) {
//
//        let alertController = UIAlertController(title: "Are you sure you want to logout?", message: "", preferredStyle: .alert)
//        let okAction = UIAlertAction(title: "Logout", style: .destructive) { _ in
//            self.showLoginView()
//        }
//
//    }
        
//    func showLoginView() {
//
//            //let storyboard = UIStoryboard(name: Identifiers.Main, bundle: nil)
//        let loginVC = self.storyboard?.instantiateViewController(withIdentifier: "StartUpViewController")
//            present(loginVC, animated: true, completion: nil)
//
//        let cancelAction = UIAlertAction(title: "Cancel", style: .default, handler: nil)
//
//        alertController.addAction(cancelAction)
//        alertController.addAction(okAction)
//        self.present(alertController, animated: true, completion: nil)
//
//    }
    
}
    
    
//    @IBAction func didTapLogoutButton(_ sender: UIBarButtonItem) {
//        // TODO: Replace with unwind segue
//        let alertController = UIAlertController(title: "Are you sure you want to logout?", message: "", preferredStyle: .alert)
//        let okAction = UIAlertAction(title: "Logout", style: .destructive) { _ in
//            self.showLoginView()
//        }
//        let cancelAction = UIAlertAction(title: "Cancel", style: .default, handler: nil)
//
//        alertController.addAction(cancelAction)
//        alertController.addAction(okAction)
//        self.present(alertController, animated: true, completion: nil)
    /*
     MARK: - Navigation

     In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
         Get the new view controller using segue.destination.
         Pass the selected object to the new view controller.
    }
    */
