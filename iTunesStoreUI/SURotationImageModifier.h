/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUImageModifier.h>

@interface SURotationImageModifier : SUImageModifier
{
    float _degrees;
    int _orientation;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) float degrees; // @synthesize degrees=_degrees;
- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (void)drawBeforeImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (BOOL)isEqual:(id)arg1;

@end

