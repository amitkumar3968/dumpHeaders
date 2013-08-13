/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, VGLIcon;

__attribute__((visibility("hidden")))
@interface VKLabelIcon : NSObject
{
    float _contentScale;
    struct CGSize _layoutSize;
    VGLIcon *_renderableIcon;
    unsigned int _isVisible:1;
    unsigned int _updateHasFailed:1;
}

@property(readonly, nonatomic) VGLIcon *renderableIcon; // @synthesize renderableIcon=_renderableIcon;
- (id).cxx_construct;
@property(readonly, nonatomic, getter=isDrawingRenderableIcon) BOOL drawingRenderableIcon;
- (void)updateCollisionObject:(struct CollisionObject *)arg1;
- (CDStruct_818bb265)boundsAtPixel:(CDStruct_6e3f967a)arg1;
@property(readonly, nonatomic) float verticalPadding;
- (void)updateWithLabelContext:(struct LabelContext *)arg1 labelStyle:(CDStruct_daf29242 *)arg2 atMercatorPoint:(CDStruct_31142d93)arg3;
@property(readonly, nonatomic) NSString *iconName;
@property(readonly, nonatomic) BOOL updateHasFailed;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) BOOL isPOI;
- (void)dealloc;
- (id)init;

@end

