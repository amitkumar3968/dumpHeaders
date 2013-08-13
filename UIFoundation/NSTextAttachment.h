/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSString, UITextAttachmentView;

@interface NSTextAttachment : NSObject <NSCoding>
{
    NSData *_data;
    NSString *_uti;
    UITextAttachmentView *_wrapperView;
}

@property(nonatomic) struct CGRect drawingBounds;
@property(retain, nonatomic) id image;
- (id)attachmentCell;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)_wrapperView;
- (void)_setWrapperView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;
- (id)fileWrapper;
- (void)dealloc;
- (id)initWithData:(id)arg1 ofType:(id)arg2;

@end
