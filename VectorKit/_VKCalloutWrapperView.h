/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/_VKPassthroughHitTestView.h>

__attribute__((visibility("hidden")))
@interface _VKCalloutWrapperView : _VKPassthroughHitTestView
{
    _VKPassthroughHitTestView *_embeddingView;
    _VKPassthroughHitTestView *_layoutConstraintsView;
}

@property(retain, nonatomic) _VKPassthroughHitTestView *layoutConstraintsView; // @synthesize layoutConstraintsView=_layoutConstraintsView;
@property(retain, nonatomic) _VKPassthroughHitTestView *embeddingView; // @synthesize embeddingView=_embeddingView;
- (void)snapLayoutConstraintsToContainerBounds;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
