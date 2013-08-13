/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, UIImage;

@interface SUMessagePart : NSObject
{
    NSString *_contentEncoding;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(copy) NSString *contentEncoding;
- (id)newUnfilteredInputSource;
@property(readonly, nonatomic) NSString *MIMEType;
- (id)copyPreparationOperations;
- (id)copyBodyInputSource;
- (BOOL)conformsToUTI:(id)arg1;
@property(readonly, nonatomic) NSString *composeText;
@property(readonly, nonatomic) UIImage *composeImage;
- (void)dealloc;
- (id)init;

@end

