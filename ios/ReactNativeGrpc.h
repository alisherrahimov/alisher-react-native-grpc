
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNReactNativeGrpcSpec.h"

@interface ReactNativeGrpc : NSObject <NativeReactNativeGrpcSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ReactNativeGrpc : NSObject <RCTBridgeModule>
#endif

@end
