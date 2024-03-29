/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableOrderedSet, NSNumber, NSString, NSURL, PLManagedAlbum;

@interface PLPersistedAlbumMetadata : NSObject
{
    NSString *_title;
    NSString *_uuid;
    NSNumber *_kind;
    NSMutableOrderedSet *_assetUUIDs;
    BOOL _allowsOverwite;
    PLManagedAlbum *_managedAlbum;
    NSURL *_metadataURL;
}

+ (BOOL)isValidPath:(id)arg1;
@property(retain, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(retain, nonatomic) PLManagedAlbum *managedAlbum; // @synthesize managedAlbum=_managedAlbum;
@property(nonatomic) BOOL allowsOverwite; // @synthesize allowsOverwite=_allowsOverwite;
@property(retain, nonatomic) NSMutableOrderedSet *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property(retain, nonatomic) NSNumber *kind; // @synthesize kind=_kind;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_saveMetadata;
- (void)_readMetadata;
- (id)description;
- (BOOL)containsAsset:(id)arg1;
- (id)albumFromDataInManagedObjectContext:(id)arg1;
- (void)removePersistedAlbumData;
- (void)persistAlbumData;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 kind:(id)arg3 assetUUIDs:(id)arg4;
- (id)initWithPersistedDataAtPath:(id)arg1;
- (id)initWithPLGenericAlbum:(id)arg1;
- (void)dealloc;
- (id)init;

@end

