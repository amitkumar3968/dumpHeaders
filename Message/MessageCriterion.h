/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface MessageCriterion : NSObject
{
    NSString *_uniqueId;
    NSString *_criterionIdentifier;
    NSString *_expression;
    int _qualifier;
    NSArray *_criteria;
    int _dateUnitType;
    NSString *_name;
    unsigned int _allCriteriaMustBeSatisfied:1;
    unsigned int _dateIsRelative:1;
    unsigned int _includeRelatedMessages:1;
    int _type;
    NSArray *_requiredHeaders;
    BOOL _useFlaggedForUnreadCount;
}

+ (id)orCompoundCriterionWithCriteria:(id)arg1;
+ (id)andCompoundCriterionWithCriteria:(id)arg1;
+ (id)flaggedMessageCriterion;
+ (id)VIPSenderMessageCriterion;
+ (id)messageIsServerSearchResultCriterion:(BOOL)arg1;
+ (id)messageIsDeletedCriterion:(BOOL)arg1;
+ (id)criterionForMailboxURL:(id)arg1;
+ (id)stringForCriterionType:(int)arg1;
+ (int)criterionTypeForString:(id)arg1;
+ (void)_updateAddressComments:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2;
+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (void)setTestAddressBook:(void *)arg1;
@property(nonatomic) BOOL useFlaggedForUnreadCount; // @synthesize useFlaggedForUnreadCount=_useFlaggedForUnreadCount;
@property(nonatomic) BOOL includeRelatedMessages; // @synthesize includeRelatedMessages=_includeRelatedMessages;
- (id)emailAddressesForGroupCriterion;
- (id)simplifiedCriterion;
- (id)simplifyOnce;
- (void)setDateIsRelative:(BOOL)arg1;
- (BOOL)dateIsRelative;
- (void)setDateUnits:(int)arg1;
- (int)dateUnits;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (BOOL)allCriteriaMustBeSatisfied;
- (void)setCriteria:(id)arg1;
- (id)criteria;
- (id)stringForMessageRuleQualifier:(int)arg1;
- (int)messageRuleQualifierForString:(id)arg1;
- (BOOL)doesMessageSatisfyCriterion:(id)arg1;
- (BOOL)_evaluateDateCriterion:(id)arg1;
- (BOOL)_evaluateAddressHistoryCriterion:(id)arg1;
- (BOOL)_evaluateAccountCriterion:(id)arg1;
- (BOOL)_evaluateAttachmentCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (BOOL)_evaluateIsEncryptedCriterion:(id)arg1;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (BOOL)_evaluateFullNameCriterion:(id)arg1;
- (BOOL)_evaluateAddressBookCriterion:(id)arg1;
- (BOOL)_evaluateSenderHeaderCriterion:(id)arg1;
- (BOOL)_evaluateHeaderCriterion:(id)arg1;
- (BOOL)_evaluateFlagCriterion:(id)arg1;
- (BOOL)_evaluateCompoundCriterion:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (void)setName:(id)arg1;
- (id)name;
- (void)setExpression:(id)arg1;
- (id)expression;
- (void)setQualifier:(int)arg1;
- (int)qualifier;
- (id)_qualifierString;
- (void)setCriterionIdentifier:(id)arg1;
- (id)criterionIdentifier;
- (void)setCriterionType:(int)arg1;
- (int)criterionType;
- (id)dictionaryRepresentation;
- (id)description;
- (id)descriptionWithDepth:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(int)arg1 qualifier:(int)arg2 expression:(id)arg3;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (id)init;
- (BOOL)includesCriterionSatisfyingPredicate:(void *)arg1 restrictive:(BOOL)arg2;
- (unsigned int)bestBaseTable;
- (id)SQLExpressionWithTables:(unsigned int *)arg1 baseTable:(unsigned int)arg2 protectedDataAvailable:(BOOL)arg3;
- (id)criterionForSQL;
- (id)_criterionForSQL;
- (BOOL)hasNumberCriterion;
- (id)SQLExpressionWithContext:(CDStruct_7721b905 *)arg1 depth:(unsigned int)arg2;
- (id)fixOnce;
- (id)criterionByExpandingAddressCriteria;
- (id)criterionByAddingEmailCriteria;

@end

