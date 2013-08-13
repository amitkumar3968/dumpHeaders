/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface SUOperationProgress : NSObject <NSCoding, NSCopying>
{
    NSString *_phase;
    float _percentComplete;
    float _normalizedPercentComplete;
    double _timeRemaining;
}

@property(nonatomic) double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(nonatomic) float normalizedPercentComplete; // @synthesize normalizedPercentComplete=_normalizedPercentComplete;
@property(nonatomic) float percentComplete; // @synthesize percentComplete=_percentComplete;
@property(retain, nonatomic) NSString *phase; // @synthesize phase=_phase;
- (BOOL)isDone;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
