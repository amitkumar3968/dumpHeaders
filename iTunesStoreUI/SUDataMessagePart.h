/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUMessagePart.h>

@class NSData, NSString;

@interface SUDataMessagePart : SUMessagePart
{
    NSData *_data;
    NSString *_mimeType;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)newUnfilteredInputSource;
- (id)MIMEType;
- (void)dealloc;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2;

@end

