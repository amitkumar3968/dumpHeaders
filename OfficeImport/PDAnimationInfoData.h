/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class OADDrawable, PDBuild, PDSequentialTimeNodeGroup;

__attribute__((visibility("hidden")))
@interface PDAnimationInfoData : NSObject
{
    unsigned int mOrder;
    PDBuild *mBuild;
    PDSequentialTimeNodeGroup *mSequentialTimeNodeData;
    OADDrawable *mDrawable;
}

- (id)drawable;
- (id)data;
- (id)build;
- (unsigned int)order;
- (void)dealloc;
- (id)initWithTargetElement:(id)arg1 presetClass:(int)arg2 presetId:(int)arg3 triggerType:(int)arg4 iterateType:(int)arg5 delay:(double)arg6 direction:(double)arg7 order:(unsigned int)arg8 groupId:(id)arg9 build:(id)arg10;

@end

