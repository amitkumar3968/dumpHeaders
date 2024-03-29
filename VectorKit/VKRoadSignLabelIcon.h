/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKLabelIcon.h>

__attribute__((visibility("hidden")))
@interface VKRoadSignLabelIcon : VKLabelIcon
{
    int _orientation;
    BOOL _orientationChanged;
    BOOL _onRoute;
    struct __CTLine *_line;
    BOOL _drawingRenderableIcon;
    float _scale;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void)updateCollisionObject:(struct CollisionObject *)arg1;
- (CDStruct_818bb265)boundsAtPixel:(CDStruct_6e3f967a)arg1;
- (CDStruct_6e3f967a)offsetPixelForPixel:(CDStruct_6e3f967a)arg1;
- (id)renderableIcon;
- (void)updateWithLabelContext:(struct LabelContext *)arg1 labelStyle:(CDStruct_daf29242 *)arg2 atMercatorPoint:(CDStruct_31142d93)arg3;
- (id)_signImageWithOrientation:(int)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 onRoute:(BOOL)arg2;

@end

