/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface IMChatRegistry : NSObject <NSFastEnumeration>
{
    NSMutableArray *_allChats;
    NSMutableDictionary *_chatGUIDToCurrentThreadMap;
    NSMutableDictionary *_chatGUIDToInfoMap;
    NSMutableDictionary *_chatGUIDToChatMap;
    NSMutableDictionary *_threadNameToChatMap;
    NSMutableArray *_allChatsInThreadNameMap;
    NSMutableArray *_pendingQueries;
    NSMutableArray *_waitingForQueries;
    NSString *_historyModificationStamp;
    BOOL _firstLoad;
    BOOL _loading;
    BOOL _daemonHadTerminated;
    BOOL _wantsHistoryReload;
    BOOL _postMessageSentNotifications;
    unsigned int _defaultNumberOfMessagesToLoad;
}

+ (Class)messageClass;
+ (void)setMessageClass:(Class)arg1;
+ (Class)chatClass;
+ (void)setChatClass:(Class)arg1;
+ (Class)chatRegistryClass;
+ (void)setChatRegistryClass:(Class)arg1;
+ (id)sharedInstance;
@property(nonatomic, setter=_setPostMessageSentNotifications:) BOOL _postMessageSentNotifications; // @synthesize _postMessageSentNotifications;
@property(readonly, nonatomic) BOOL _isLoading; // @synthesize _isLoading=_loading;
@property(nonatomic, setter=_setDefaultNumberOfMessagesToLoad:) unsigned int _defaultNumberOfMessagesToLoad; // @synthesize _defaultNumberOfMessagesToLoad;
- (void)_blockUntilQueriesComplete:(id)arg1;
- (void)__blockUntilQueriesComplete;
- (id)_chatsWithMessage:(id)arg1;
- (id)_allGUIDsForChat:(id)arg1;
- (void)handleIMChatParticipantsDidChange:(id)arg1;
- (id)_chatForChatDictionary:(id)arg1 chatItems:(id)arg2 allowCreate:(BOOL)arg3 createdChat:(char *)arg4 outGUID:(id *)arg5;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 allowRetargeting:(BOOL)arg3;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2;
- (id)existingChatForIMHandle:(id)arg1 allowRetargeting:(BOOL)arg2;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)existingChatForIMHandles:(id)arg1;
- (id)existingChatForIMHandle:(id)arg1;
- (id)existingChatWithGUID:(id)arg1;
- (id)existingChatWithChatIdentifier:(id)arg1;
- (id)_lookupExistingChatWithIMHandle:(id)arg1;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 service:(id)arg3;
@property(readonly, nonatomic) NSArray *allExistingChats;
@property(readonly, nonatomic) unsigned int numberOfExistingChats;
- (BOOL)_hasChat:(id)arg1 forService:(id)arg2;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)_createdChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)_createdChatForIMHandles:(id)arg1 style:(unsigned char)arg2;
- (id)_createdChatForIMHandle:(id)arg1;
- (id)_createdChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (id)_allCreatedChats;
- (id)chatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)chatForIMHandles:(id)arg1 chatName:(id)arg2;
- (id)chatForIMHandles:(id)arg1;
- (id)chatForIMHandle:(id)arg1;
- (void)_unregisterChatWithGUID:(id)arg1;
- (void)_unregisterChat:(id)arg1;
- (void)unregisterChatWithGUID:(id)arg1;
- (void)unregisterChat:(id)arg1;
- (void)_registerChat:(id)arg1 isIncoming:(BOOL)arg2 guid:(id)arg3;
- (void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(BOOL)arg3 newGUID:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)_chatInstanceForGUID:(id)arg1;
- (void)_noteChatDealloc:(id)arg1;
- (void)_noteChatInit:(id)arg1;
- (void)_chat:(id)arg1 setValue:(id)arg2 forChatProperty:(id)arg3;
- (void)_chat:(id)arg1 setProperties:(id)arg2 ofParticipant:(id)arg3;
- (void)_chat_declineInvitation:(id)arg1;
- (void)_chat_leave:(id)arg1;
- (void)_chat:(id)arg1 joinWithProperties:(id)arg2;
- (void)_chat:(id)arg1 removeParticipants:(id)arg2 reason:(id)arg3;
- (void)_chat:(id)arg1 inviteParticipants:(id)arg2 reason:(id)arg3;
- (void)_chat:(id)arg1 sendMessage:(id)arg2;
- (void)_chat_sendReadReceiptForAllMessages:(id)arg1;
- (void)_chat:(id)arg1 sendReadReceiptForMessages:(id)arg2;
- (void)setupComplete;
- (void)_daemonReallyDied:(id)arg1;
- (void)setupComplete:(BOOL)arg1 info:(id)arg2;
- (void)_handleChatReconstructions:(id)arg1;
- (void)historyQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (void)historicalMessageGUIDsDeleted:(id)arg1 chatGUIDs:(id)arg2 queryID:(id)arg3;
- (void)chat:(id)arg1 updated:(id)arg2;
- (void)_updateInfo:(id)arg1 forGUID:(id)arg2 updatingUnreadCount:(BOOL)arg3;
- (void)_updateUnreadCountForChat:(id)arg1;
- (void)chat:(id)arg1 propertiesUpdated:(id)arg2;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 member:(id)arg5 statusChanged:(int)arg6;
- (void)leftChat:(id)arg1;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 statusChanged:(int)arg5 handleInfo:(id)arg6;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 error:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 updateProperties:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 notifySentMessage:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageSent:(id)arg5;
- (void)_processMessageForAccount:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 message:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageUpdated:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;
- (void)_account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;

@end

