/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iLifeSlideshow/MCObjectLight.h>

@class NSString;

@interface MCAnimationPath : MCObjectLight
{
    NSString *mKey;
    BOOL mIsTriggered;
}

+ (id)animationPathWithKey:(id)arg1;
@property(nonatomic) BOOL isTriggered; // @synthesize isTriggered=mIsTriggered;
@property(copy) NSString *key; // @synthesize key=mKey;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;

@end

