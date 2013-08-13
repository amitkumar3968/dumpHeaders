/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUZipOutputEntry : NSObject
{
    NSString *name;
    unsigned int utf8NameLength;
    BOOL isCompressed;
    BOOL isEncrypted;
    unsigned int time;
    unsigned long long compressedSize;
    unsigned long long uncompressedSize;
    unsigned long long offset;
    unsigned long long compressedDataOffset;
    unsigned int crc;
    BOOL isWrittenDirectlyToFile;
    BOOL is64Bit;
}

- (int)compareByOffset:(id)arg1;
- (id)description;
- (void)dealloc;

@end

