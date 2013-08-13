/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKContentEntryBridge.h>

@class NSMutableDictionary, NSMutableSet;

@interface CKWebviewBasedContentEntryBridge : CKContentEntryBridge
{
    NSMutableDictionary *_resources;
    int _composeResourcePoolID;
    NSMutableSet *_imageDeletionSet;
}

- (id)_htmlForMessagePart:(id)arg1;
- (id)_nodeForImagePart:(id)arg1 forRichContentView:(id)arg2;
- (id)_textView;
- (id)_imageURLForPart:(id)arg1 partID:(id)arg2;
- (void)reset;
- (void)updateComposition;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1 inTextContentView:(id)arg2;
- (BOOL)hasContent;
- (void)insertMessagePart:(id)arg1;
- (id)attachments;
- (void)setMessageParts:(id)arg1;
- (id)messageComposition;
- (void)setMessageComposition:(id)arg1;
- (id)newContentViewWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

