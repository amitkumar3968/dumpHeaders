/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ImageCapture/DeviceManager.h>

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class NSMutableArray, NSNetServiceBrowser;

@interface PTPCameraDeviceManager : DeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableArray *_netServices;
}

- (void)handleEventImp:(id)arg1;
- (int)handleEvent:(id)arg1 onDevice:(id)arg2 contextInfo:(void *)arg3;
- (void)ejectImp:(id)arg1;
- (void)downloadFileImp:(id)arg1;
- (void)deleteFileImp:(id)arg1;
- (void)getMetadataOfFileImp:(id)arg1;
- (void)getThumbnailOfFileImp:(id)arg1;
- (void)syncClockImp:(id)arg1;
- (void)closeSessionImp:(id)arg1;
- (void)openSessionImp:(id)arg1;
- (void)closeDeviceImp:(id)arg1;
- (void)openDeviceImp:(id)arg1;
- (id)usbLocationIDsOfPTPDevices;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)stopRunning;
- (void)startRunning;
- (void)dealloc;
- (id)init;

@end

