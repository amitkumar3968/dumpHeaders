/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "_VKStyle.h"

__attribute__((visibility("hidden")))
@interface VKGenericShieldDrawStyle : NSObject <_VKStyle>
{
    int _style;
    struct _VGLColor _backgroundColor;
    struct _VGLColor _borderColor;
    struct _VGLColor _textColor;
    float _haloSize;
    struct _VGLColor _haloColor;
    struct CGSize _dropShadowOffset;
    float _dropShadowSize;
    struct _VGLColor _dropShadowColor;
}

@property(nonatomic) struct _VGLColor dropShadowColor; // @synthesize dropShadowColor=_dropShadowColor;
@property(nonatomic) float dropShadowSize; // @synthesize dropShadowSize=_dropShadowSize;
@property(nonatomic) struct CGSize dropShadowOffset; // @synthesize dropShadowOffset=_dropShadowOffset;
@property(nonatomic) struct _VGLColor haloColor; // @synthesize haloColor=_haloColor;
@property(nonatomic) float haloSize; // @synthesize haloSize=_haloSize;
@property(nonatomic) struct _VGLColor textColor; // @synthesize textColor=_textColor;
@property(nonatomic) struct _VGLColor borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) struct _VGLColor backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int style; // @synthesize style=_style;
- (id).cxx_construct;
- (void)takeFromZoomInvariantProperties:(id)arg1;
- (void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned int)arg2;
- (id)initWithStyleInfo:(id)arg1;

@end

