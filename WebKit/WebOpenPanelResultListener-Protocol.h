/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol WebOpenPanelResultListener <NSObject>
- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;
- (void)cancel;
- (void)chooseFilenames:(id)arg1;
- (void)chooseFilename:(id)arg1;
@end

