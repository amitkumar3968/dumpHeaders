/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

__attribute__((visibility("hidden")))
@interface VGLGroundCoverProgram : VGLProgram
{
    int _uVegetationAlpha;
    float _vegetationAlpha;
    int _uLandSampler;
    int _landSampler;
    int _uVegetationSampler;
    int _vegetationSampler;
}

+ (id)program;
@property(nonatomic) int vegetationSampler; // @synthesize vegetationSampler=_vegetationSampler;
@property(nonatomic) int landSampler; // @synthesize landSampler=_landSampler;
@property(nonatomic) float vegetationAlpha; // @synthesize vegetationAlpha=_vegetationAlpha;
- (id)init;

@end

