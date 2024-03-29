/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MZKeyValueStoreTransaction, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MZKeyValueStoreNode : NSObject
{
    MZKeyValueStoreTransaction *_transaction;
    NSString *_key;
    NSString *_version;
    NSData *_value;
    BOOL _mismatch;
    int _wrapperRevision;
    NSString *_name;
}

+ (id)assetIDForKey:(id)arg1 withPrefix:(id)arg2;
+ (id)keysWithPrefix:(id)arg1 assetIDs:(id)arg2;
+ (id)keyWithPrefix:(id)arg1 assetID:(id)arg2;
+ (id)keyValueStoreDataFirstRevision;
+ (id)keyValueStoreDataCurrentRevision;
+ (BOOL)isServerRevisionNewerThanClient:(id)arg1;
+ (void)setServerRevisionNewerThanClient:(id)arg1;
+ (id)serverRevisionNewerThanClientKeys;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int wrapperRevision; // @synthesize wrapperRevision=_wrapperRevision;
@property(nonatomic) BOOL mismatch; // @synthesize mismatch=_mismatch;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) id objectValue; // @dynamic objectValue;
@property(retain, nonatomic) NSDictionary *dictionaryValue; // @dynamic dictionaryValue;
@property(retain, nonatomic) NSArray *arrayValue; // @dynamic arrayValue;
@property(retain, nonatomic) NSData *dataValue; // @dynamic dataValue;
@property(retain, nonatomic) NSDate *dateValue; // @dynamic dateValue;
@property(retain, nonatomic) NSNumber *numberValue; // @dynamic numberValue;
@property(retain, nonatomic) NSString *stringValue; // @dynamic stringValue;
- (id)objectValueMatchingClass:(Class)arg1;
- (BOOL)hasData;
- (id)description;
- (void)dealloc;
- (id)init;

@end

