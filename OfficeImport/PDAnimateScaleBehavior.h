/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/PDCommonBehaviorData.h>

__attribute__((visibility("hidden")))
@interface PDAnimateScaleBehavior : PDCommonBehaviorData
{
    struct CGPoint mTo;
    struct CGPoint mFrom;
    struct CGPoint mBy;
}

- (id).cxx_construct;
- (void)setBy:(struct CGPoint)arg1;
- (struct CGPoint)by;
- (void)setFrom:(struct CGPoint)arg1;
- (struct CGPoint)from;
- (void)setTo:(struct CGPoint)arg1;
- (struct CGPoint)to;
- (id)init;

@end

