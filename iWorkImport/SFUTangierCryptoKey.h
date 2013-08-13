/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iWorkImport/SFUCryptoKey.h>

__attribute__((visibility("hidden")))
@interface SFUTangierCryptoKey : SFUCryptoKey
{
    char *mKey;
    unsigned long mKeyLength;
}

- (void)dealloc;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2;
- (unsigned long)keyLength;
- (const char *)keyData;

@end

