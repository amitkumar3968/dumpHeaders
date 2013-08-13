/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SFUOutputStream.h"

__attribute__((visibility("hidden")))
@interface SFUZipDeflateOutputStream : NSObject <SFUOutputStream>
{
    id <SFUOutputStream> mOutputStream;
    struct z_stream_s mDeflateStream;
    char *mOutBuffer;
}

- (id)inputStream;
- (BOOL)canCreateInputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (BOOL)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;

@end

