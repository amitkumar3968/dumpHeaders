/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol PLPhotoBrowserControllerDelegate <NSObject>

@optional
- (void)photoBrowserControllerDidEndPaging:(id)arg1;
- (void)photoBrowserControllerWillBeginPaging:(id)arg1;
- (void)photoBrowserController:(id)arg1 willShowActionSheetInView:(id)arg2;
- (BOOL)photoBrowserControllerShouldShowActionItem:(id)arg1;
- (void)photoBrowserController:(id)arg1 didMoveToPhotoAtIndex:(unsigned int)arg2;
@end

