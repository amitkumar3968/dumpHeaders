/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreServices/SSAuthenticationContext.h>

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "SSXPCCoding.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying>
{
}

@property(nonatomic) int tokenType; // @dynamic tokenType;
@property(copy, nonatomic) NSDictionary *HTTPHeaders; // @dynamic HTTPHeaders;
@property(nonatomic, getter=isDemoAccount) BOOL demoAccount; // @dynamic demoAccount;
@property(copy, nonatomic) NSString *clientIdentifierHeader; // @dynamic clientIdentifierHeader;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(copy, nonatomic) NSArray *userAgentComponents; // @dynamic userAgentComponents;
@property(copy, nonatomic) NSDictionary *signupRequestParameters; // @dynamic signupRequestParameters;
@property(nonatomic) BOOL shouldSuppressDialogs; // @dynamic shouldSuppressDialogs;
@property(nonatomic) BOOL shouldIgnoreProtocol; // @dynamic shouldIgnoreProtocol;
@property(nonatomic) BOOL shouldFollowAccountButtons; // @dynamic shouldFollowAccountButtons;
@property(retain, nonatomic) NSNumber *requiredUniqueIdentifier; // @dynamic requiredUniqueIdentifier;
@property(copy, nonatomic) NSDictionary *requestParameters; // @dynamic requestParameters;
@property(nonatomic) int promptStyle; // @dynamic promptStyle;
@property(copy, nonatomic) NSString *preferredITunesStoreClient; // @dynamic preferredITunesStoreClient;
@property(copy, nonatomic) NSString *initialPassword; // @dynamic initialPassword;
@property(nonatomic) BOOL canSetActiveAccount; // @dynamic canSetActiveAccount;
@property(nonatomic) BOOL canCreateNewAccount; // @dynamic canCreateNewAccount;
@property(nonatomic) BOOL allowsRetry; // @dynamic allowsRetry;
@property int accountScope; // @dynamic accountScope;
@property(nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable; // @dynamic accountNameEditable;
@property(copy, nonatomic) NSString *accountName; // @dynamic accountName;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

