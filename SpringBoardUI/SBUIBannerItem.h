/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBUIBannerItem : NSObject
{
    id <SBUIBannerSource> _source;
}

@property(retain, nonatomic) id <SBUIBannerSource> source; // @synthesize source=_source;
- (BOOL)canShowInAssistant;
- (id)sortDate;
- (id)sound;
- (id)action;
- (BOOL)isSticky;
- (unsigned int)priority;
- (void)dealloc;

@end

