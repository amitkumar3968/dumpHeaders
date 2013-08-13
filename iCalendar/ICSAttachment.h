/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSAttachment : ICSProperty
{
}

@property(retain) NSString *x_apple_ews_attachmentid;
@property(retain) NSString *x_apple_filename;
@property(retain) NSString *managed_filename;
@property BOOL x_apple_autoarchived;
@property(retain) NSString *fmtype;
@property(retain) NSString *managed_id;
@property int size;
- (id)filename;
- (BOOL)isBinary;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setData:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;

@end

