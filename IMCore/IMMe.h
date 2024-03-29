/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IMHandle, IMPerson, NSArray, NSMutableArray, NSString;

@interface IMMe : NSObject
{
    IMPerson *_person;
    NSString *_abNickname;
    NSString *_abFirstName;
    NSString *_abFullName;
    NSString *_abLastName;
    NSArray *_abEmails;
    NSMutableArray *_abIMHandles;
    NSMutableArray *_loginIMHandles;
}

+ (id)imHandleForService:(id)arg1;
+ (id)me;
+ (id)fallbackUserName;
- (void)myPictureChanged;
@property(readonly, nonatomic) NSArray *imHandles;
@property(readonly, nonatomic) IMHandle *bestIMHandle;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *email;
@property(readonly, nonatomic) NSArray *emails;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSString *nickname;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (BOOL)removeIMHandle:(id)arg1;
- (BOOL)isIMHandleLoginIMHandle:(id)arg1;
- (BOOL)addIMHandle:(id)arg1;
- (id)loginIMHandles;
- (BOOL)removeLoginIMHandle:(id)arg1;
- (BOOL)addLoginIMHandle:(id)arg1;
@property(readonly, nonatomic) IMPerson *person;
- (void)setIMPerson:(id)arg1;
- (void)resetABPerson;
- (void)rebuildIMHandles;
- (id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2;
- (void)dealloc;
@property(readonly, nonatomic) NSString *guid;
- (id)init;

@end

