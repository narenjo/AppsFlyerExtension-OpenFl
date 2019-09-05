#FORK CHANGES
1) Changes for OpenFL next (JNI path)
2) AppsFlyerSDK was updated to `4.10.0` for both platforms
3) Android: call `startTracking` manually, remove ndll from `include.xml`
4) iOS: added 2 required frameworks - `Security.framework` and `CFNetwork.framework`

# AppsFlyerExtension-OpenFl
Native extension (iOS, Android) AppsFlyer SDK for OpenFl

**Install:**
1. run `haxelib git AppsFlyerExtension https://github.com/GreenishFlow/AppsFlyerExtension-HAXE`
2. add to project.xml:

	`<haxelib name="AppsFlyerExtension" />`
	
	
**Initialization:**

`AppsFlyerExtension.startTracking(devKey:String, appId:String = "");`
(appId is using for for iOS https://support.appsflyer.com/hc/en-us/articles/207032066-AppsFlyer-SDK-Integration-iOS)

**Send event:**

`AppsFlyerExtension.trackEvent(eventName:String, eventData:String);`

eventName - AppsFlyer event name

eventData - strigify JSON with data

e.g.

`AppsFlyerExtension.trackEvent('af_revenue','{"af_quantity":100}');`
