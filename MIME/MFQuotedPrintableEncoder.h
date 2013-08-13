/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer
{
    unsigned long _line;
    unsigned long _matchedFrom;
    unsigned char _lastHorizontalWhitespace;
    BOOL _forTextPart;
    BOOL _lastWasNewLine;
    BOOL _forHeader;
}

+ (unsigned long)requiredSizeToEncodeHeaderBytes:(const char *)arg1 length:(unsigned long)arg2;
@property(nonatomic) BOOL forHeader; // @synthesize forHeader=_forHeader;
@property(nonatomic) BOOL forTextPart; // @synthesize forTextPart=_forTextPart;
- (void)done;
- (int)appendData:(id)arg1;

@end

