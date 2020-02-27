//
//  IntegrationExampleViewController.swift
//  Copyright © 2020 mimik. All rights reserved.
//

import UIKit
import IntegrationExampleViewController

class IntegrationExampleViewController: UIViewController {
    
    @IBOutlet weak var infoLabel: UILabel!
    @IBOutlet weak var activitySpinner: UIActivityIndicatorView!
    
    @IBOutlet weak var startButton: CoolButton!
    @IBOutlet weak var stopButton: CoolButton!
    
    lazy var edgeMobileClient: MIMIKEdgeMobileClient = {
        let client = MIMIKEdgeMobileClient.init()
        MIMIKMessageManager.sharedInstance.edgeMobileClient = client
        return client
    }()
    
    @IBAction func startEdgePressed(_ sender: UIButton) {
        
        self.infoLabel.text = "mimik edge starting..."
        self.edgeMobileClient.delegate = self
        
        self.edgeMobileClient.startEdge { (result) in
            
            DispatchQueue.main.async {
                guard result.error == nil, let _ = result.status else {
                    let text = "mimik edge failed to start"
                    self.infoLabel.text = text
                    return
                }
                
                let text = "mimik edge started."
                self.infoLabel.text = text
            }
        }
    }
    
    @IBAction func stopEdgePressed(_ sender: UIButton) {
        
        self.infoLabel.text = "mimik edge stopping..."
        
        self.edgeMobileClient.stopEdge { (result) in
            
            DispatchQueue.main.async {
                guard result.error == nil, let _ = result.status else {
                    let text = "mimik edge failed to stop"
                    self.infoLabel.text = text
                    return
                }
                
                let text = "mimik edge stopped."
                self.infoLabel.text = text
            }
        }
    }
}

extension IntegrationExampleViewController: MIMIKEdgeMobileClientDelegate {
    func edgeStatusChanged(status: MIMIKEdgeStatus) {
        print("mimik edge status changed: \(status.edgeState.rawValue)")
    }
}
