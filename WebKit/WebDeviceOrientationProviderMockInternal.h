/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WebDeviceOrientationProviderMockInternal : NSObject
{
    struct OwnPtr<WebCore::DeviceOrientationClientMock> m_core;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)lastOrientation;
- (void)stopUpdating;
- (void)startUpdating;
- (void)setController:(struct DeviceOrientationController *)arg1;
- (void)setOrientation:(id)arg1;
- (id)init;

@end

