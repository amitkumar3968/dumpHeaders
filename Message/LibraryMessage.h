/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Message/MailMessage.h>

@class MFLock, NSMutableDictionary, NSMutableSet, NSString;

@interface LibraryMessage : MailMessage
{
    unsigned int _libraryID;
    NSString *_remoteID;
    unsigned long _uid;
    unsigned int _size;
    unsigned int _mailboxID;
    unsigned int _originalMailboxID;
    NSString *_messageID;
    NSMutableDictionary *_metadata;
    NSMutableSet *_metadataChangedKeys;
    MFLock *_metadataLock;
    id _deallocationHandler;
}

+ (id)messageWithLibraryID:(unsigned int)arg1;
@property(copy, nonatomic) id deallocationHandler; // @synthesize deallocationHandler=_deallocationHandler;
- (id)_attachmentStorageLocation;
- (id)metadataValueForKey:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)_initializeMetadata;
- (id)copyMessageInfo;
- (BOOL)isLibraryMessage;
- (BOOL)canBeDeleted;
- (id)dataConsumerForMimePart:(id)arg1;
- (void)setMessageData:(id)arg1 isPartial:(BOOL)arg2;
- (void)setRemoteID:(const char *)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(unsigned int)arg4 originalMailboxID:(unsigned int)arg5;
- (id)preferredEmailAddressToReplyWith;
- (void)markAsForwarded;
- (void)markAsReplied;
- (void)markAsNotFlagged;
- (void)markAsFlagged;
- (void)markAsNotViewed;
- (void)markAsViewed;
- (id)account;
- (id)dataPathForMimePart:(id)arg1;
- (id)path;
- (void)dealloc;
- (id)description;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)commit;
- (void)setSummary:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (int)compareByUidWithMessage:(id)arg1;
- (id)mailboxName;
- (void)setHasTemporaryUid:(BOOL)arg1;
- (BOOL)hasTemporaryUid;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (BOOL)isMessageContentsLocallyAvailable;
- (void)setIsPartial:(BOOL)arg1;
- (BOOL)isPartial;
- (void)setUid:(unsigned long)arg1;
- (unsigned long)uid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)remoteID;
- (void)setRemoteID:(id)arg1;
- (void)_updateUID;
- (id)mailbox;
- (id)messageStore;
- (void)setMessageSize:(unsigned int)arg1;
- (unsigned int)messageSize;
- (id)originalMailboxURL;
- (void)setOriginalMailboxID:(unsigned int)arg1;
- (unsigned int)originalMailboxID;
- (void)setMailboxID:(unsigned int)arg1;
- (unsigned int)mailboxID;
- (unsigned int)libraryID;
- (id)persistentID;
- (id)messageID;
- (void)setLibraryID:(unsigned int)arg1;
- (id)refreshedMessage;
- (id)library;
- (id)initWithLibraryID:(unsigned int)arg1;

@end

