/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIMessageActivity.h"

@class NSArray;

@interface PLMMSActivity : UIMessageActivity
{
    NSArray *_assetsToShare;
}

@property(retain, nonatomic) NSArray *assetsToShare; // @synthesize assetsToShare=_assetsToShare;
- (void)performActivity;
- (id)messageComposeViewController;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;
- (Class)MMSControllerClass;
- (id)_beforeActivity;

@end

