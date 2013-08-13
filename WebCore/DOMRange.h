/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <WebCore/DOMObject.h>

@class DOMNode, NSString;

@interface DOMRange : DOMObject
{
}

- (void)expand:(id)arg1;
- (BOOL)isPointInRange:(id)arg1 offset:(int)arg2;
- (short)comparePoint:(id)arg1 offset:(int)arg2;
- (short)compareNode:(id)arg1;
- (BOOL)intersectsNode:(id)arg1;
- (id)createContextualFragment:(id)arg1;
- (void)detach;
- (id)toString;
- (id)cloneRange;
- (void)surroundContents:(id)arg1;
- (void)insertNode:(id)arg1;
- (id)cloneContents;
- (id)extractContents;
- (void)deleteContents;
- (short)compareBoundaryPoints:(unsigned short)arg1:(id)arg2;
- (short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2;
- (void)selectNodeContents:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)collapse:(BOOL)arg1;
- (void)setEndAfter:(id)arg1;
- (void)setEndBefore:(id)arg1;
- (void)setStartAfter:(id)arg1;
- (void)setStartBefore:(id)arg1;
- (void)setEnd:(id)arg1:(int)arg2;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (void)setStart:(id)arg1:(int)arg2;
- (void)setStart:(id)arg1 offset:(int)arg2;
@property(readonly) NSString *text;
@property(readonly) DOMNode *commonAncestorContainer;
@property(readonly) BOOL collapsed;
@property(readonly) int endOffset;
@property(readonly) DOMNode *endContainer;
@property(readonly) int startOffset;
@property(readonly) DOMNode *startContainer;
- (void)finalize;
- (void)dealloc;
- (id)lineBoxRects;
- (id)textRects;
- (struct CGRect)boundingBox;
- (id)_text;
- (id)description;
- (id)firstNode;
- (void)extend:(unsigned long)arg1 inDirection:(int)arg2;
- (void)move:(unsigned long)arg1 inDirection:(int)arg2;

@end
