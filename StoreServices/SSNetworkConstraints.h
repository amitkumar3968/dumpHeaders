/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "SSXPCCoding.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface SSNetworkConstraints : NSObject <NSCoding, SSXPCCoding, NSCopying>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_sizeLimits;
}

+ (id)_newModernNetworkConstraintsWithArray:(id)arg1;
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1;
+ (void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(int)arg2 legacyDictionary:(id)arg3;
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)_sizeLimitForNetworkType:(int)arg1;
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(int)arg2;
- (void)_disableAllNetworkTypes;
- (id)_copySizeLimits;
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (long long)sizeLimitForNetworkType:(int)arg1;
- (void)setSizeLimit:(long long)arg1 forNetworkType:(int)arg2;
- (void)setAllNetworkTypesDisabled;
@property(readonly, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;
- (BOOL)hasSizeLimitForNetworkType:(int)arg1;
- (void)disableCellularNetworkTypes;
- (void)dealloc;
- (id)init;

@end

