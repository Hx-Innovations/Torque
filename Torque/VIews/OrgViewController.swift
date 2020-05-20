//
//  OrgViewController.swift
//  TestIos
//
//  Created by kehlin swain on 2/12/20.
//  Copyright © 2020 kehlin swain. All rights reserved.
//

import UIKit
import FirebaseFirestore


class OrgViewController: BaseViewController, UITableViewDataSource, UITableViewDelegate {
    
    var orgCount = 2
    var orgs : [[String: String]] = [["abcd": "hello", "efgh": "hello2"]]
    var organization: [String] = []
    var tableView = UITableView()
    let s = FireViewController()
    
    @IBOutlet weak var isisTable: UITableView!
    override func viewDidLoad() {
        super.viewDidLoad()
        setupPlusButton()
        self.navigationController?.isNavigationBarHidden = false
        
        self.isisTable.dataSource = self
        self.isisTable.delegate = self
        
        // collection organization names
        getOrgData()
      
        // Do any additional setup after loading the view.
    }
   
    func getOrgData() {


        s.getOrgs {[weak self] (orgs) in
            self?.toggleSpinner(show: false)
            self?.orgs = orgs
            self?.isisTable.reloadData()
        }
    }
    
    func setupPlusButton() {
        let image = UIImage(systemName: "plus")
        let barButtonItem = UIBarButtonItem(image: image, style: .plain, target: self, action: #selector(didTapAddOrgButton))
        self.navigationItem.rightBarButtonItem = barButtonItem
    }
    
    @objc func didTapAddOrgButton(_ sender: UIBarButtonItem) {
           // Add alert controller
        let alertController = UIAlertController(title: AllertActionTitles.AddNewOrg, message: nil, preferredStyle: .alert)
           alertController.addTextField(configurationHandler: { textfield in
               textfield.placeholder = AllertActionTitles.NewOrgName
               textfield.autocapitalizationType = .words
               textfield.keyboardType = .asciiCapable
               
               // textfield.addTarget(self, action: #selector(self.textChangedInAlertController(_:)), for: .editingChanged)
           })
           let addOrgAction = UIAlertAction(title: "Add", style: .default) {[weak self] (action) in
               guard let orgName = alertController.textFields?[0].text else { return }
           
               if orgName.count < 1 { return }
               
               self?.s.addOrg(name: orgName) { addedShoe, error in
                   
                   if let addedShoe = addedShoe,  error == nil {
                       self?.orgs.append(addedShoe)
                       self?.isisTable.reloadData()
                   } else {
                       print("Something went wrong")
                   }
               }
           }
           let cancelAction = UIAlertAction(title: "Cancel", style: .cancel, handler: nil)
           alertController.addAction(addOrgAction)
           alertController.addAction(cancelAction)
           present(alertController, animated: true)
       }
    
    
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return orgs.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let cell = UITableViewCell()
        print(orgs)
        cell.textLabel!.text =  orgs[indexPath.row]["name"]
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        let storyboard = UIStoryboard(name: "Main", bundle: nil)
        let shoesVC = storyboard.instantiateViewController(identifier: "ShoeViewController") as! ShoeViewController
        let orgId = orgs[indexPath.row]["orgId"] ?? ""
        shoesVC.organizationId = orgId
        self.navigationController?.pushViewController(shoesVC, animated: true)
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
