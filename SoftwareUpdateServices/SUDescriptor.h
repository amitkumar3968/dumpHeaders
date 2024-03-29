/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, SUDocumentation;

@interface SUDescriptor : NSObject <NSCoding, NSCopying>
{
    SUDocumentation *_documentation;
    NSString *_publisher;
    NSString *_humanReadableUpdateName;
    NSString *_productSystemName;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    unsigned long long _downloadSize;
    unsigned long long _preparationSize;
    unsigned long long _installationSize;
    int _updateType;
    BOOL _autoDownloadAllowableForCellular;
    BOOL _downloadAllowableForCellular;
    BOOL _downloadable;
    BOOL _downloadableOverCellular;
}

@property(nonatomic, getter=isDownloadableOverCellular) BOOL downloadableOverCellular; // @synthesize downloadableOverCellular=_downloadableOverCellular;
@property(nonatomic, getter=isDownloadable) BOOL downloadable; // @synthesize downloadable=_downloadable;
@property(nonatomic) BOOL autoDownloadAllowableForCellular; // @synthesize autoDownloadAllowableForCellular=_autoDownloadAllowableForCellular;
@property(retain, nonatomic) SUDocumentation *documentation; // @synthesize documentation=_documentation;
@property(nonatomic) int updateType; // @synthesize updateType=_updateType;
@property(nonatomic) unsigned long long installationSize; // @synthesize installationSize=_installationSize;
@property(nonatomic) unsigned long long preparationSize; // @synthesize preparationSize=_preparationSize;
@property(nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(retain, nonatomic) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productSystemName; // @synthesize productSystemName=_productSystemName;
@property(retain, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_buildCompareKey;
- (BOOL)_hasValue:(id)arg1;
- (BOOL)isValidDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)totalRequiredFreeSpace;
- (id)downloadPolicy;
- (id)humanReadableUpdateName;
- (void)dealloc;
- (id)init;

@end

