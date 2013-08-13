/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSMutableSet, NSString;

@interface PLBBBulletin : NSObject
{
    int _bulletinType;
    NSString *_senderName;
    NSString *_senderEmailAddress;
    NSString *_albumTitle;
    NSString *_photosBatchID;
    NSString *_mainAssetUUID;
    BOOL _mainAssetIsMine;
    BOOL _containsBatchFirstKnownAsset;
    NSMutableSet *_assetUUIDs;
    NSMutableSet *_placeholderAssetUUIDs;
    NSMutableSet *_lowResThumbAssetUUIDs;
    int _invitationState;
    NSString *_firstCommentGUID;
    NSDate *_commentDate;
    NSString *_commentText;
    int _commentCount;
    BOOL _commentIsCaption;
    NSDate *_expirationDate;
    NSString *_albumUUID;
    NSDate *_date;
    unsigned int _recordID;
    unsigned int _replacedBulletinRecordID;
}

@property(readonly) NSString *senderEmailAddress; // @synthesize senderEmailAddress=_senderEmailAddress;
@property(readonly) NSString *mainAssetUUID; // @synthesize mainAssetUUID=_mainAssetUUID;
@property unsigned int replacedBulletinRecordID; // @synthesize replacedBulletinRecordID=_replacedBulletinRecordID;
@property unsigned int recordID; // @synthesize recordID=_recordID;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) int bulletinType; // @synthesize bulletinType=_bulletinType;
@property(readonly) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)_localizedCountFormatter;
- (BOOL)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(int)arg2 fromOldKind:(int)arg3;
- (BOOL)isCommentPiggyBackedOnPhotosAddedBulletin;
- (id)description;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSArray *suppressionContexts;
@property(readonly) BOOL hasThumbnail;
@property(readonly) NSString *destinationURLString;
@property(readonly) NSString *message;
@property(readonly) NSString *title;
@property(readonly) double completionPercentage;
@property(readonly) BOOL thumbnailAssetIsPlaceholder;
@property(readonly) BOOL allAssetsAreFullResolution;
- (id)bulletinByMergingWithBulletinDictionary:(id)arg1;
- (id)bulletinByMergingWithBulletin:(id)arg1;
@property(readonly) BOOL canMergeWithPersistedBulletins;
- (void)dealloc;
- (id)_initWithLikesCount:(int)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 inAlbumWithTitle:(id)arg7 albumUUID:(id)arg8 assetUUIDs:(id)arg9 placeholderAssetUUIDs:(id)arg10 lowResThumbAssetUUIDs:(id)arg11;
- (id)_initWithCommentsCount:(int)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 inAlbumWithTitle:(id)arg7 albumUUID:(id)arg8 assetUUIDs:(id)arg9 placeholderAssetUUIDs:(id)arg10 lowResThumbAssetUUIDs:(id)arg11;
- (id)initWithLikeAdded:(id)arg1;
- (id)initWithCommentAdded:(id)arg1;
- (id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletin:(id)arg2;
- (id)initWithAssetAdded:(id)arg1 atIndex:(unsigned int)arg2 toAlbum:(id)arg3 misc:(id)arg4;
- (id)initWithInvitationRecordStatusChanged:(id)arg1;
- (id)initWithInvitationAlbum:(id)arg1;
- (id)_initWithType:(int)arg1;
- (id)init;

@end

