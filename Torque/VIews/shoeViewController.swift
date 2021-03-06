//
//  shoeViewController.swift
//  Torque
//
//  Created by kehlin swain on 3/24/20.
//  Copyright © 2020 HX Innovations. All rights reserved.
//

import Foundation

import UIKit


class ShoeViewController: BaseViewController, UITableViewDataSource, UITableViewDelegate {
    
    
    var shoesCount = 2
    var shoesText : [[String: String]] = [["abcd": "hello", "efgh": "hello2"]]
    var shoes: [String] = []
    var tableView = UITableView()
    
    var organizationId: String = ""
    let s = FireViewController()
    @IBOutlet weak var isisTable: UITableView!
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.isisTable.dataSource = self
        self.isisTable.delegate = self
        self.navigationItem.title = "Shoes"
        //self.navigationController.ba
        
        // collection organization names
        setupPlusButton()
        getShoesData()
        
        // Do any additional setup after loading the view.
    }
    
    func getShoesData() {
        
        toggleSpinner(show: true)
        s.getShoes(organizationId: self.organizationId) {[weak self] (shoes) in
            self?.toggleSpinner(show: false)
            self?.shoesText = shoes
            self?.isisTable.reloadData()
        }
    }
    
    func setupPlusButton() {
        let image = UIImage(systemName: "plus")
        let barButtonItem = UIBarButtonItem(image: image, style: .plain, target: self, action: #selector(didTapAddShoeButton))
        self.navigationItem.rightBarButtonItem = barButtonItem
    }
    
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return shoesText.count
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        for controller in self.navigationController!.viewControllers as Array {
            if let controller = controller as? ViewController {
                controller.shoeName = shoesText[indexPath.row]["name"] ?? ""
                controller.shoeId = shoesText[indexPath.row]["shoeId"] ?? ""
                self.navigationController?.popToViewController(controller, animated: true)
            }
        }
    }

    
    @objc func didTapAddShoeButton(_ sender: UIBarButtonItem) {
        // Add alert controller
        let alertController = UIAlertController(title: AllertActionTitles.AddNewShoe, message: nil, preferredStyle: .alert)
        alertController.addTextField(configurationHandler: { textfield in
            textfield.placeholder = AllertActionTitles.NewShoeName
            textfield.autocapitalizationType = .words
            textfield.keyboardType = .asciiCapable
            
            // textfield.addTarget(self, action: #selector(self.textChangedInAlertController(_:)), for: .editingChanged)
        })
        alertController.addTextField { (textfield) in
            textfield.placeholder = AllertActionTitles.AddSkuNumber
            textfield.autocapitalizationType = .words
            textfield.keyboardType = .asciiCapable
        }
        let addShoeAction = UIAlertAction(title: "Add", style: .default) {[weak self] (action) in
            guard let shoeName = alertController.textFields?[0].text,
                let organizationId = self?.organizationId,
                let sku = alertController.textFields?[1].text else { return }
        
            if shoeName.count < 1 { return }
            
            self?.s.addShoes(name: shoeName, organizationId: organizationId, sku:sku) { addedShoe, error in
                
                if let addedShoe = addedShoe,  error == nil {
                    self?.shoesText.append(addedShoe)
                    self?.isisTable.reloadData()
                } else {
                    print("Something went wrong")
                }
            }
        }
        let cancelAction = UIAlertAction(title: "Cancel", style: .cancel, handler: nil)
        alertController.addAction(addShoeAction)
        alertController.addAction(cancelAction)
        present(alertController, animated: true)
    }
    
    
    
    
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let cell = UITableViewCell()
        print(shoesText)
        cell.textLabel!.text = shoesText[indexPath.row]["name"]
        return cell
    }
    
}





struct AllertActionTitles {
    static let AddNewShoe = "Add New Shoe"
    static let NewShoeName = "New Shoe name"
    static let AddSkuNumber = "Add Sku Number"
    static let AddNewOrg = "Add New Organization"
    static let NewOrgName = "New Organization name"
    static let OK = "OK"
    static let Cancel = "Cancel"
    static let FailedToLoadTeams = "Failed to load organization"
    static let FailedToAddNewTeam = "Failed to add new organization"
    static let Yes = "Yes"
    static let No = "No"
    static let Loading = "Loading"
    static let YouHaveNoTeams = "You have no teams. Use the + button."
    
}

