/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol VKTrackingCameraControllerDelegate <NSObject>
- (void)trackingCameraControllerDidEndAnimating:(id)arg1;
- (void)trackingCameraControllerDidBeginAnimating:(id)arg1;
- (void)trackingCameraControllerDidChangeCameraState:(id)arg1;

@optional
- (void)trackingCameraController:(id)arg1 updatedStartAnimationTargetPosition:(CDStruct_31142d93)arg2 orientation:(const CDStruct_aa5aacbc *)arg3;
@end

