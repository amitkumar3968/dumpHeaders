/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/PDCommonTimeNodeData.h>

@class NSString, PDAnimationTargetElement;

__attribute__((visibility("hidden")))
@interface PDSequentialTimeNodeGroup : PDCommonTimeNodeData
{
}

+ (id)createSequentialTimeNodeGroupForAnimationInfo;
@property(retain, nonatomic) NSString *groupId;
@property(nonatomic) double direction;
@property(nonatomic) double delay;
@property(nonatomic) int iterateType;
@property(nonatomic) int triggerType;
@property(nonatomic) int presetId;
@property(nonatomic) int presetClass;
@property(retain, nonatomic) PDAnimationTargetElement *targetElement;
- (id)level3SetBehavior;
- (id)level2ParallelTimeNodeGroup;
- (id)level1ParallelTimeNodeGroup;

@end

