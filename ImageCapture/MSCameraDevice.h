/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ImageCapture/ICCameraDevice.h>

@interface MSCameraDevice : ICCameraDevice
{
    void *_msCameraProperties;
}

- (BOOL)eject;
- (void)enumerateContent;
- (unsigned int)itemsInFolder:(char *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithVolumePath:(id)arg1 mediaPaths:(id)arg2;

@end

