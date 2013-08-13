/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface CKMessagePart : NSObject
{
    int _rowID;
    int _outgoingBubbleColor;
    id <CKMessage> _parentMessage;
}

+ (id)copyUnknownPart;
+ (id)copyDeletedPart;
+ (id)copyMessagePartsFromComposition:(id)arg1;
+ (id)copyMessagePartsFromComposition:(id)arg1 attachmentParts:(id *)arg2;
+ (id)copyDetachedMessageParts:(id)arg1;
+ (id)_newPartsForNode:(id)arg1 resources:(id)arg2 attachments:(id *)arg3;
+ (id)_assembleTextPartFromRange:(id)arg1;
@property(nonatomic) int outgoingBubbleColor; // @synthesize outgoingBubbleColor=_outgoingBubbleColor;
@property(nonatomic) int rowID; // @synthesize rowID=_rowID;
@property(nonatomic) id <CKMessage> parentMessage; // @synthesize parentMessage=_parentMessage;
- (void)copyToPasteboard;
- (id)composeData;
- (id)previewData;
- (void)dealloc;
- (int)type;
- (id)detachedCopy;
- (id)imageFilename;
- (id)composeImages;
- (id)previewImage;
- (id)highlightData;
- (id)image;
- (id)imageData;
- (id)text;
- (BOOL)isDisplayable;
- (id)previewText;
- (id)mediaObject;
- (BOOL)isEqual:(id)arg1;

@end
