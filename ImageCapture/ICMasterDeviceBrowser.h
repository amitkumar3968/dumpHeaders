/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MSCameraDeviceManager, NSMutableArray, PTPCameraDeviceManager;

@interface ICMasterDeviceBrowser : NSObject
{
    NSMutableArray *_devices;
    NSMutableArray *_browsers;
    int _numberOfBrowsingBrowsers;
    MSCameraDeviceManager *_msDevManager;
    PTPCameraDeviceManager *_ptpDevManager;
}

+ (BOOL)exists;
+ (id)defaultBrowser;
@property(readonly) NSMutableArray *browsers; // @synthesize browsers=_browsers;
- (void)informBrowserDelegateUsingSelector:(SEL)arg1 withObject:(id)arg2;
- (id)deviceWithDelegate:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
@property(readonly) NSMutableArray *devices; // @synthesize devices=_devices;
- (void)stop:(id)arg1;
- (int)start:(id)arg1;
- (void)removeMSCamera:(id)arg1;
- (int)addRemoveMSCamera;
- (int)addMSCamera:(id)arg1;
- (void)removePTPCamera:(id)arg1;
- (int)addPTPCamera:(id)arg1;
- (void)removeBrowser:(id)arg1;
- (void)addBrowser:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

