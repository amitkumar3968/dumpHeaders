/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class MLContentRating, MLMovieProperties, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface MLTrackImport : NSObject <NSCopying>
{
    NSData *_artworkData;
    NSString *_assetFilePath;
    NSArray *_chapters;
    NSMutableDictionary *_properties;
    BOOL _shouldAddToPurchasedPlaylist;
    BOOL _shouldDeleteExistingArtwork;
    BOOL _assignArtworkCacheIDFromAlbum;
}

+ (void)initialize;
@property(nonatomic) BOOL shouldDeleteExistingArtwork; // @synthesize shouldDeleteExistingArtwork=_shouldDeleteExistingArtwork;
@property(nonatomic) BOOL shouldAddToPurchasedPlaylist; // @synthesize shouldAddToPurchasedPlaylist=_shouldAddToPurchasedPlaylist;
@property(copy, nonatomic) NSArray *chapters; // @synthesize chapters=_chapters;
@property(nonatomic) BOOL assignArtworkCacheIDFromAlbum; // @synthesize assignArtworkCacheIDFromAlbum=_assignArtworkCacheIDFromAlbum;
@property(copy, nonatomic) NSString *assetFilePath; // @synthesize assetFilePath=_assetFilePath;
@property(copy, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
- (void).cxx_destruct;
- (void)_addSortStrings;
- (void)normalizeEntityProperties;
- (id)copyEntityProperties;
- (id)valueForEntityProperty:(id)arg1;
- (void)setValue:(id)arg1 forEntityProperty:(id)arg2;
@property(copy, nonatomic) MLMovieProperties *movieProperties;
@property(nonatomic) unsigned long mediaType;
@property(copy, nonatomic) MLContentRating *contentRating;
@property(readonly, nonatomic) NSDictionary *entityProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

