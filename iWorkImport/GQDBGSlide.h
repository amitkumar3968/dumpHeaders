/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iWorkImport/GQDBGAbstractSlide.h>

@class GQDBGMasterSlide, GQDWPLayoutFrame;

__attribute__((visibility("hidden")))
@interface GQDBGSlide : GQDBGAbstractSlide
{
    GQDBGMasterSlide *mMaster;
    GQDWPLayoutFrame *mNoteFrame;
}

- (id)noteFrame;
- (id)master;
- (void)dealloc;
- (id)init;

@end

