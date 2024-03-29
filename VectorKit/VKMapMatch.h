/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKMapMatch : NSObject
{
    NSString *featureName;
    CDStruct_2c43369c coordinateOnFeature;
    double courseOnFeature;
    float distanceFromJunction;
}

@property(readonly, nonatomic) float distanceFromJunction; // @synthesize distanceFromJunction;
@property(readonly, nonatomic) double courseOnFeature; // @synthesize courseOnFeature;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinateOnFeature; // @synthesize coordinateOnFeature;
@property(readonly, nonatomic) NSString *featureName; // @synthesize featureName;
- (id)description;
- (void)dealloc;
- (id)initWithGEORoadFeature:(CDStruct_a206f7ef *)arg1 pointOnFeature:(CDStruct_31142d93)arg2 courseOnFeature:(float)arg3 distanceFromJunction:(float)arg4;

@end

