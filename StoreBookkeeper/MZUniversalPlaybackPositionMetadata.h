/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface MZUniversalPlaybackPositionMetadata : NSObject <NSCopying>
{
    NSString *_itemIdentifier;
    double _timestamp;
    double _bookmarkTime;
    BOOL _hasBeenPlayed;
    unsigned int _playCount;
}

+ (id)metadataWithValuesItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2;
+ (id)metadataWithValuesFromDataSourceItem:(id)arg1;
+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) BOOL hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)keyValueStorePayload;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end
