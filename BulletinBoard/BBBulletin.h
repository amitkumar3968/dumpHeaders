/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class BBAction, BBAttachments, BBContent, BBObserver, BBSound, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSTimeZone;

@interface BBBulletin : NSObject <NSCopying, NSCoding>
{
    NSString *_sectionID;
    NSSet *_subsectionIDs;
    NSString *_publisherRecordID;
    NSString *_publisherBulletinID;
    int _addressBookRecordID;
    int _sectionSubtype;
    BBContent *_content;
    BBContent *_modalAlertContent;
    NSDate *_date;
    NSDate *_endDate;
    NSDate *_recencyDate;
    int _dateFormatStyle;
    BOOL _dateIsAllDay;
    NSTimeZone *_timeZone;
    int _accessoryStyle;
    BOOL _clearable;
    BBSound *_sound;
    BBAttachments *_attachments;
    NSString *_unlockActionLabelOverride;
    NSMutableDictionary *_actions;
    NSArray *_buttons;
    BOOL _expiresOnPublisherDeath;
    NSDictionary *_context;
    NSDate *_expirationDate;
    unsigned int _expirationEvents;
    NSSet *_alertSuppressionContexts;
    NSString *_bulletinID;
    NSDate *_lastInterruptDate;
    BOOL _showsMessagePreview;
    NSString *_bulletinVersionID;
    NSMutableArray *_lifeAssertions;
    BBObserver *_observer;
    unsigned int realertCount_deprecated;
    NSSet *alertSuppressionAppIDs_deprecated;
}

+ (id)copyCachedBulletinWithBulletinID:(id)arg1;
+ (void)removeBulletinFromCache:(id)arg1;
+ (void)addBulletinToCache:(id)arg1;
+ (id)bulletinWithBulletin:(id)arg1;
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated; // @synthesize alertSuppressionAppIDs_deprecated;
@property(nonatomic) unsigned int realertCount_deprecated; // @synthesize realertCount_deprecated;
@property(retain, nonatomic) BBObserver *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSMutableArray *lifeAssertions; // @synthesize lifeAssertions=_lifeAssertions;
@property(copy, nonatomic) NSString *bulletinVersionID; // @synthesize bulletinVersionID=_bulletinVersionID;
@property(nonatomic) BOOL showsMessagePreview; // @synthesize showsMessagePreview=_showsMessagePreview;
@property(retain, nonatomic) NSDate *lastInterruptDate; // @synthesize lastInterruptDate=_lastInterruptDate;
@property(copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(copy, nonatomic) NSSet *alertSuppressionContexts; // @synthesize alertSuppressionContexts=_alertSuppressionContexts;
@property(nonatomic) unsigned int expirationEvents; // @synthesize expirationEvents=_expirationEvents;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(nonatomic) BOOL expiresOnPublisherDeath; // @synthesize expiresOnPublisherDeath=_expiresOnPublisherDeath;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSMutableDictionary *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *unlockActionLabelOverride; // @synthesize unlockActionLabelOverride=_unlockActionLabelOverride;
@property(retain, nonatomic) BBAttachments *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) BBSound *sound; // @synthesize sound=_sound;
@property(nonatomic) BOOL clearable; // @synthesize clearable=_clearable;
@property(nonatomic) int accessoryStyle; // @synthesize accessoryStyle=_accessoryStyle;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) BOOL dateIsAllDay; // @synthesize dateIsAllDay=_dateIsAllDay;
@property(nonatomic) int dateFormatStyle; // @synthesize dateFormatStyle=_dateFormatStyle;
@property(retain, nonatomic) NSDate *recencyDate; // @synthesize recencyDate=_recencyDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) BBContent *modalAlertContent; // @synthesize modalAlertContent=_modalAlertContent;
@property(retain, nonatomic) BBContent *content; // @synthesize content=_content;
@property(nonatomic) int sectionSubtype; // @synthesize sectionSubtype=_sectionSubtype;
@property(nonatomic) int addressBookRecordID; // @synthesize addressBookRecordID=_addressBookRecordID;
@property(copy, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_publisherRecordID;
@property(copy, nonatomic) NSSet *subsectionIDs; // @synthesize subsectionIDs=_subsectionIDs;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addLifeAssertion:(id)arg1;
- (void)_fillOutCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)deliverResponse:(id)arg1;
- (id)responseSendBlock;
- (id)responseForExpireAction;
- (id)responseForButtonActionAtIndex:(unsigned int)arg1;
- (id)responseForAcknowledgeAction;
- (id)responseForDefaultAction;
- (id)_responseForActionKey:(id)arg1;
- (id)_actionKeyForButtonIndex:(unsigned int)arg1;
@property(copy, nonatomic) BBAction *expireAction;
@property(copy, nonatomic) BBAction *acknowledgeAction;
@property(copy, nonatomic) BBAction *alternateAction;
@property(copy, nonatomic) BBAction *defaultAction;
- (id)attachmentsCreatingIfNecessary:(BOOL)arg1;
- (unsigned int)numberOfAdditionalAttachmentsOfType:(int)arg1;
- (unsigned int)numberOfAdditionalAttachments;
@property(readonly, nonatomic) int primaryAttachmentType;
@property(copy, nonatomic) NSString *section;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) int iPodOutAlertType;
@property(readonly, nonatomic) unsigned int subtypePriority;
@property(readonly, nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;
@property(readonly, nonatomic) BOOL bannerShowsSubtitle;
@property(readonly, nonatomic) BOOL preservesUnlockActionCase;
@property(readonly, nonatomic) BOOL inertWhenLocked;
@property(readonly, nonatomic) unsigned int realertCount;
@property(readonly, nonatomic) BOOL suppressesMessageForPrivacy;
@property(readonly, nonatomic) BOOL coalescesWhenLocked;
@property(readonly, nonatomic) NSSet *alertSuppressionAppIDs;
@property(readonly, nonatomic) NSString *unlockActionLabel;
@property(readonly, nonatomic) NSString *fullUnlockActionLabel;
@property(readonly, nonatomic) NSString *missedBannerDescriptionFormat;
@property(readonly, nonatomic) NSString *topic;
@property(readonly, nonatomic) BOOL showsDateInFloatingLockScreenAlert;
@property(readonly, nonatomic) BOOL orderSectionUsingRecencyDate;
@property(readonly, nonatomic) BOOL usesVariableLayout;
@property(readonly, nonatomic) unsigned int messageNumberOfLines;
@property(readonly, nonatomic) BOOL showsSubtitle;
@property(readonly, nonatomic) BOOL sectionDisplaysCriticalBulletins;
@property(readonly, nonatomic) NSData *sectionIconData;
@property(readonly, nonatomic) NSString *sectionDisplayName;
- (struct CGSize)composedAttachmentImageSizeForKey:(id)arg1;
- (id)composedAttachmentImageForKey:(id)arg1;
- (struct CGSize)composedAttachmentImageSize;
- (id)composedAttachmentImage;
- (struct CGSize)composedAttachmentImageSizeForKey:(id)arg1 withObserver:(id)arg2;
- (id)composedAttachmentImageForKey:(id)arg1 withObserver:(id)arg2;
- (struct CGSize)composedAttachmentImageSizeWithObserver:(id)arg1;
- (id)composedAttachmentImageWithObserver:(id)arg1;

@end

