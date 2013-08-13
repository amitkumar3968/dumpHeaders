/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OCCDecryptor : NSObject
{
    NSString *mOutputFilename;
    NSString *mBaseStringForOutputFilename;
    struct OCCStreamer *mStreamer;
}

+ (id)allocTempFileWithBase:(id)arg1 outFilename:(id *)arg2;
+ (id)agilePasswordKeyEncryptorNamespace;
+ (id)agileDescriptorNamespace;
@property(readonly, nonatomic) NSString *outputFilename; // @synthesize outputFilename=mOutputFilename;
- (BOOL)decryptIntoOutputFile;
- (BOOL)verifyPassphrase:(id)arg1;
- (BOOL)decrypt;
- (void)deleteOutputFile;
- (BOOL)isReadProtectedUsingDefaultPassphrase;
- (id)initWithStreamer:(struct OCCStreamer *)arg1;
- (void)dealloc;

@end

