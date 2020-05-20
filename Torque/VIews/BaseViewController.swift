//
//  BaseViewController.swift
//  Torque
//
//  Created by Isis Ashford on 4/22/20.
//  Copyright © 2020 HX Innovations. All rights reserved.
//

import UIKit

    
class BaseViewController: UIViewController {
    let spinner : UIActivityIndicatorView = UIActivityIndicatorView(style: .large)
    override func viewDidLoad() {
        super.viewDidLoad()
        self.view.addSubview(spinner)
        spinner.translatesAutoresizingMaskIntoConstraints = false
        spinner.color = #colorLiteral(red: 0.01793464832, green: 0.7052486539, blue: 0.9774716496, alpha: 1)
        spinner.centerYAnchor.constraint(equalTo: self.view.centerYAnchor).isActive = true
        spinner.centerXAnchor.constraint(equalTo: self.view.centerXAnchor).isActive = true
        spinner.hidesWhenStopped = true
    }
    func toggleSpinner(show: Bool) {
        show ? spinner.startAnimating() : spinner.stopAnimating()
    }
}
