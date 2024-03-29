/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ISSingleton.h"
#import "ISStoreURLOperationDelegate.h"

@class ISStoreURLOperation, NSString, NSTimer;

@interface SUNetworkObserver : NSObject <ISSingleton, ISStoreURLOperationDelegate>
{
    ISStoreURLOperation *_partnerDetectOperation;
    BOOL _partnersEnabled;
    NSString *_partnerIdentifier;
    NSTimer *_startupTimer;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (void)_updateNetworkActivityIndicator;
- (void)_startupTimer:(id)arg1;
- (void)_mainThreadSetPartnerIdentifier:(id)arg1;
- (void)_mainThreadScheduleNetworkActivityUpdate;
- (void)_mainThreadHandleNetworkTypeChange:(id)arg1;
- (void)_handleUsingNetworkChange:(id)arg1;
- (void)_handleNetworkTypeChange:(id)arg1;
- (void)_cancelStartupTimer;
- (void)_cancelPartnerDetect;
- (void)_partnerHeaderChanged:(id)arg1;
- (void)_networkUsageStateChanged:(id)arg1;
- (void)_networkTypeChanged:(id)arg1;
- (void)operationFinished:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)startNetworkAvailabilityTimer;
- (void)setPartnersEnabled:(BOOL)arg1;
@property(retain, nonatomic) NSString *partnerIdentifier; // @synthesize partnerIdentifier=_partnerIdentifier;
- (void)checkPartnerAvailability;
- (void)dealloc;
- (id)init;

@end

