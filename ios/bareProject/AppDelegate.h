
#import <UIKit/UIKit.h>
#import <UMReactNativeAdapter/UMModuleRegistryAdapter.h>
#import <React/RCTBridgeDelegate.h>
#import <UMCore/UMAppDelegateWrapper.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, RCTBridgeDelegate>
// @interface AppDelegate : UMAppDelegateWrapper <RCTBridgeDelegate>

@property (nonatomic, strong) UMModuleRegistryAdapter *moduleRegistryAdapter;
@property (nonatomic, strong) UIWindow *window;

@end

