/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <WebCore/WAKView.h>

@interface WAKClipView : WAKView
{
    WAKView *_documentView;
    BOOL _copiesOnScroll;
}

@property(nonatomic) BOOL copiesOnScroll; // @synthesize copiesOnScroll=_copiesOnScroll;
@property(readonly, nonatomic) WAKView *documentView; // @synthesize documentView=_documentView;
- (struct CGRect)documentVisibleRect;
- (void)_setDocumentView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

