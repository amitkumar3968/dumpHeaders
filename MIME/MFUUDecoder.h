/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFUUDecoder : MFBaseFilterDataConsumer
{
    unsigned long _begin;
    unsigned long _end;
    unsigned long _length;
    unsigned long _readBytes;
    unsigned char _encoded[4];
    BOOL _beginComplete;
    BOOL _dataComplete;
    BOOL _validLength;
    BOOL _lineComplete;
    BOOL _passthrough;
}

- (void)done;
- (int)appendData:(id)arg1;

@end

