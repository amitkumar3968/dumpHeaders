/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class CMDrawableStyle, NSData, NSString, OADDrawable, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMDrawableMapper : CMMapper
{
    OADDrawable *mDrawable;
    CMDrawableStyle *mStyle;
    NSData *mImageBinaryData;
    NSString *mName;
    NSString *mExtension;
    int mResourceType;
    NSString *mSourcePath;
    struct CGRect mBox;
    float mRotation;
    BOOL mIsSupported;
    BOOL mIsCropped;
    struct CGRect mUncroppedBox;
    OADOrientedBounds *mOrientedBounds;
}

- (id).cxx_construct;
- (id)convertMetafileToPdf;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)shapeTextBoxRect;
- (void)mapDrawingContext:(id)arg1 at:(id)arg2 relative:(BOOL)arg3 withState:(id)arg4;
- (void)mapShapeGraphicsAt:(id)arg1 withState:(id)arg2;
- (void)calculateUncroppedBox:(id)arg1;
- (void)mapBounds;
- (void)mapImageBinaryData;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)saveResourceAndReturnPath:(id)arg1 withType:(int)arg2;
- (void)setWithOadImage:(id)arg1;
- (void)setBoundingBox;
- (void)setRotation:(float)arg1;
- (float)rotation;
- (struct CGRect)uncroppedBox;
- (BOOL)isCropped;
- (struct CGRect)box;
- (id)initWithOadDrawable:(id)arg1 parent:(id)arg2;
- (id)initWithParent:(id)arg1;
- (void)dealloc;

@end

