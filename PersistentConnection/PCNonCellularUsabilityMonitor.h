/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PCInterfaceUsabilityMonitorDelegate.h"
#import "PCInterfaceUsabilityMonitorProtocol.h"

@class CUTWeakReference, NSMutableArray, NSString;

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate>
{
    struct dispatch_queue_s *_delegateQueue;
    struct dispatch_queue_s *_ivarQueue;
    struct dispatch_queue_s *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    BOOL _demoOverride;
    int _previousLinkQuality;
    BOOL _trackUsability;
    unsigned int _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSMutableArray *_interfaceMonitors;
}

- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) BOOL isPoorLinkQuality;
@property(readonly, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) BOOL isInternetReachable;
@property(readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) BOOL isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
- (int)_linkQualityOnIvarQueue;
@property(readonly, nonatomic) int interfaceIdentifier;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)setThresholdOffTransitionCount:(unsigned int)arg1;
- (void)setTrackUsability:(BOOL)arg1;
- (void)_forwardConfigurationOnIvarQueue;
- (void)_addMonitorWithInterfaceName:(id)arg1;
- (void)dealloc;
- (id)initWithDelegateQueue:(struct dispatch_queue_s *)arg1;

@end
