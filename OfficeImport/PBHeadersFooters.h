/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PBHeadersFooters : NSObject
{
}

+ (void)readHeadersFootersFromSlideContainer:(id)arg1 toSlide:(id)arg2 drawables:(id)arg3 state:(id)arg4;
+ (void)readHeadersFootersToSlideLayout:(id)arg1 drawables:(id)arg2 state:(id)arg3;
+ (void)readHeadersFootersTextToSlideMasterDrawables:(id)arg1 state:(id)arg2;
+ (void)addCopyOfHeaderFooterPlaceholderOfType:(int)arg1 toDrawables:(id)arg2 slideBase:(id)arg3 headersFootersContainer:(id)arg4 state:(id)arg5;
+ (void)readHeaderFooterTextFromHeadersFootersContainer:(id)arg1 toPlaceholderShape:(id)arg2;
+ (id)readStringWithInstance:(int)arg1 fromContainer:(id)arg2;
+ (struct PptHeadersFootersAtom *)headersFootersAtomWithHeadersFootersContainer:(id)arg1;
+ (id)headersFootersContainerWithSlideContainer:(id)arg1 state:(id)arg2;

@end

