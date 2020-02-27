# MIMIKEdgeMobileClient
edgeSDK mobile client for iOS

mimik edgeSDK allows you to host microservices on practically any computing device to work seamlessly with your backend on private or public cloud. 

This wrapper helps you to simplify the following mimik edgeSDK operations:

```
startEdge (Platform startup with a completion block)
stopEdge (Platform shutdown with a completion block)
 
authorize (Platform authorization with a completion block; provides platform acess token)
unauthorize (Platform unauthorization with a completion block; resets platform content)
 
deployMicroservice (Microservice deployment with a completion block; platform access token is required)
undeployMicroservice (Microservice undeployment with a completion block; platform access token is required)
getDeployedImages (Lists currently deployed images in a completion block)
getDeployedContainers (Lists currently deployed containers in a completion block)
 
getInfo (Returns platform instance information)
 
setLoggingLevelTo (Configures platform log output. Unified logging system is used and the messages are tagged with [mimik] [module-name] and then [info] [error] [fault] [debug].
edgeServiceLink (Platform instance service link, for your microservice configuration)
edgeWebSocketServiceLink (Platform instance websocket link, for your microservice configuration)
```

## Requirements
```
iOS 12+
```

## Installation

Edge is available through cocoapods. To install it, simply add the following lines to your Podfile:

```swift
source 'https://github.com/CocoaPods/Specs.git'
source 'https://github.com/mimikgit/cocoapod-edge-specs.git'
```

```swift
pod 'MIMIKEdgeMobileClient'
```

## Author

mimik
```
https://github.com/mimikgit/edgeSDK
```

## License

Edge is available under the MIT license. See the LICENSE file for more info.
