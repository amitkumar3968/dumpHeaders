/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "OCDWriter.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface OCBWriter : NSObject <OCDWriter>
{
    struct OcBinaryWriter *mBinaryWriter;
    struct __sFILE *mFile;
    NSData *mData;
}

+ (void)writeDocument:(id)arg1 toData:(id)arg2 cancel:(id)arg3;
+ (void)writeDocument:(id)arg1 toFileName:(id)arg2 cancel:(id)arg3;
- (void)setData:(id)arg1;
- (void)setFile:(struct __sFILE *)arg1;
- (struct OcBinaryWriter *)binaryWriter;
- (_Bool)isBinaryWriter;
- (void)dealloc;
- (id)initWithBinaryWriter:(struct OcBinaryWriter *)arg1;

@end

