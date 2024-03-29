/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CKConversation, FTCConnectionHandler, NSMutableArray;

@interface CKConversationList : NSObject
{
    NSMutableArray *_trackedConversations;
    CKConversation *_pendingConversation;
    FTCConnectionHandler *_connectionHandler;
    BOOL _loadingConversations;
    BOOL _loadedConversations;
}

+ (id)sharedConversationList;
@property(readonly, nonatomic) FTCConnectionHandler *connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(readonly, nonatomic) BOOL loadingConversations; // @synthesize loadingConversations=_loadingConversations;
- (void)_handleMemoryWarning:(id)arg1;
- (id)_chatIdentifierForEntities:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)pendingConversationCreatingIfNecessary;
- (void)_abChanged:(id)arg1;
- (void)deleteConversationAtIndex:(int)arg1;
- (int)unreadFilteredConversationCount;
- (int)unreadConversationCount;
- (int)_unreadConversationCount:(BOOL)arg1;
- (int)unreadCount;
- (id)pendingConversation;
- (void)unpendConversation;
- (void)beginTrackingConversation:(id)arg1 forChat:(id)arg2;
- (void)_postConversationListChangedNotification;
- (void)resort;
- (id)conversations;
- (BOOL)reloadStaleConversations;
- (BOOL)hasActiveConversations;
- (id)activeConversations;
@property(readonly, nonatomic) CKConversation *firstUnreadFilteredConversation;
@property(readonly, nonatomic) CKConversation *firstUnreadConversation;
- (id)_firstUnreadConversationWithFiltering:(BOOL)arg1;
- (BOOL)_shouldFilterForParticipants:(id)arg1;
- (void)resetCaches;
- (id)conversationForExistingChatWithAddresses:(id)arg1;
- (id)conversationForRecipients:(id)arg1 create:(BOOL)arg2;
- (id)conversationForHandles:(id)arg1 create:(BOOL)arg2;
- (id)_copyEntitiesForAddressStrings:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)_handleRegistryDidRegisterChatNotification:(id)arg1;
- (void)_handleRegistryDidLoadChatNotification:(id)arg1;
- (void)_beginTrackingAllExistingChatsIfNeeded;
- (void)stopTrackingConversation:(id)arg1;
- (id)conversationForExistingChatWithGUID:(id)arg1;
- (id)conversationForExistingChatWithGroupID:(id)arg1;
- (id)_conversationForChat:(id)arg1;
- (id)_beginTrackingConversationWithChat:(id)arg1;
- (id)_alreadyTrackedConversationForChat:(id)arg1;
- (void)dealloc;
- (id)init;

@end

