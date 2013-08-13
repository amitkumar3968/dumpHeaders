/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@interface BBThumbnailSizeConstraints : NSObject <NSCoding>
{
    int _constraintType;
    float _fixedWidth;
    float _fixedHeight;
    float _fixedDimension;
    float _minAspectRatio;
    float _maxAspectRatio;
    float _thumbnailScale;
}

@property(nonatomic) float thumbnailScale; // @synthesize thumbnailScale=_thumbnailScale;
@property(nonatomic) float maxAspectRatio; // @synthesize maxAspectRatio=_maxAspectRatio;
@property(nonatomic) float minAspectRatio; // @synthesize minAspectRatio=_minAspectRatio;
@property(nonatomic) float fixedDimension; // @synthesize fixedDimension=_fixedDimension;
@property(nonatomic) float fixedHeight; // @synthesize fixedHeight=_fixedHeight;
@property(nonatomic) float fixedWidth; // @synthesize fixedWidth=_fixedWidth;
@property(nonatomic) int constraintType; // @synthesize constraintType=_constraintType;
- (BOOL)areReasonable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

