//
//  shoeViewController.swift
//  Torque
//
//  Created by kehlin swain on 3/24/20.
//  Copyright © 2020 HX Innovations. All rights reserved.
//

import Foundation

import UIKit
import FirebaseFirestore


class ShoeViewController: UIViewController, UITableViewDataSource, UITableViewDelegate {
    
    var shoesCount = 2
    var shoesText : [[String: String]] = [["abcd": "hello", "efgh": "hello2"]]
    var shoes: [String] = []
    var tableView = UITableView()
    
    var organizationId: String = ""
    @IBOutlet weak var isisTable: UITableView!
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.isisTable.dataSource = self
        self.isisTable.delegate = self
        
        // collection organization names
        getShoesData()
      
        // Do any additional setup after loading the view.
    }
   
    func getShoesData() {
        var s = FireViewController()
        s.getShoes(organizationId: self.organizationId) {[weak self] (shoes) in
            self?.shoesText = shoes
            self?.isisTable.reloadData()
        }
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
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let cell = UITableViewCell()
        print(shoesText)
        cell.textLabel!.text = shoesText[indexPath.row]["name"]
        return cell
    }
    
}
    

