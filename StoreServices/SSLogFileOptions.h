/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SSLogFileOptions : NSObject <NSCopying>
{
    NSString *_directoryPath;
    NSString *_fileName;
    int _maxNumberOfLogFiles;
    unsigned long _maxSizeInBytes;
}

@property(nonatomic) int maxNumberOfLogFiles; // @synthesize maxNumberOfLogFiles=_maxNumberOfLogFiles;
@property(nonatomic) unsigned long maxLogFileSize; // @synthesize maxLogFileSize=_maxSizeInBytes;
@property(copy, nonatomic) NSString *logFileBaseName; // @synthesize logFileBaseName=_fileName;
@property(copy, nonatomic) NSString *logDirectoryPath; // @synthesize logDirectoryPath=_directoryPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

