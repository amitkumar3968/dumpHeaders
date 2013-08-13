/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MFPBrush, MFPCustomLineCap;

__attribute__((visibility("hidden")))
@interface MFPPen : NSObject
{
    MFPBrush *mBrush;
    float mWidth;
    struct CGAffineTransform mTransform;
    int mStartCap;
    int mEndCap;
    int mLineJoin;
    float mMiterLimit;
    int mDashStyle;
    int mDashCap;
    float mDashOffset;
    int mDashPatternCount;
    float *mDashPattern;
    int mAlignment;
    int mCompoundArrayCount;
    float *mCompoundArray;
    MFPCustomLineCap *mCustomStartCap;
    MFPCustomLineCap *mCustomEndCap;
}

- (id).cxx_construct;
- (void)strokePath:(struct CGPath *)arg1;
- (void)applyDashCap;
- (void)applyLineCap;
- (void)applyLineJoin;
- (void)applyDashPattern;
- (void)applyDashPattern:(const float *)arg1 count:(int)arg2;
- (void)setCustomEndCap:(id)arg1;
- (id)customEndCap;
- (void)setCustomStartCap:(id)arg1;
- (id)customStartCap;
- (void)setCompoundArray:(const float *)arg1 count:(int)arg2;
- (const float *)compoundArray;
- (int)compoundArrayCount;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (void)setDashPattern:(const float *)arg1 count:(int)arg2;
- (const float *)dashPattern;
- (int)dashPatternCount;
- (void)setDashOffset:(float)arg1;
- (float)dashOffset;
- (void)setDashCap:(int)arg1;
- (int)dashCap;
- (void)setDashStyle:(int)arg1;
- (int)dashStyle;
- (void)setMiterLimit:(float)arg1;
- (float)miterLimit;
- (void)setLineJoin:(int)arg1;
- (int)lineJoin;
- (void)setEndCap:(int)arg1;
- (int)endCap;
- (void)setStartCap:(int)arg1;
- (int)startCap;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)transform;
- (void)setWidth:(float)arg1;
- (float)width;
- (void)setBrush:(id)arg1;
- (id)brush;
- (void)dealloc;
- (id)init;

@end

