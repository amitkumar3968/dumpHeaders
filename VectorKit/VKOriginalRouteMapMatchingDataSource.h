/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "VKRouteMapMatchingDataSource.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface VKOriginalRouteMapMatchingDataSource : NSObject <VKRouteMapMatchingDataSource>
{
    struct _NSRange _sectionRange;
    struct VKRouteMapMatchingSection **_mmSections;
    NSArray *_sections;
}

@property(readonly, nonatomic) struct _NSRange sectionRange; // @synthesize sectionRange=_sectionRange;
- (id).cxx_construct;
- (void)forEachMapMatchingSection:(id)arg1;
- (void)dealloc;
- (id)initWithFromSections:(id)arg1 range:(struct _NSRange)arg2;

@end
