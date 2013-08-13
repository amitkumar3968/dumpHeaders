/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ISSingleton.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface ISDevice : NSObject <ISSingleton>
{
    unsigned int _daemonLaunchCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guid;
    double _lastFreeSpaceRequest;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (int)_deviceClass;
- (id)supportedOfferDeviceForDevices:(id)arg1;
- (void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(id)arg4;
@property(readonly) NSString *systemName;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *hardwareName;
@property(readonly) NSString *guid;
@property(readonly) NSString *deviceName;
- (id)copyPurchaseValidationContext;
- (id)copyProtocolConditionalContext;
- (BOOL)checkCapabilities:(id)arg1 withMismatches:(id *)arg2;
- (BOOL)takePowerAssertion:(id)arg1;
- (BOOL)releasePowerAssertion:(id)arg1;
- (void)dealloc;
- (id)init;

@end

