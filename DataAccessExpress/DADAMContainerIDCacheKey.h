/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying>
{
    NSString *_accountID;
    int _dataclass;
}

@property(readonly) int dataclass; // @synthesize dataclass=_dataclass;
@property(readonly) NSString *accountID; // @synthesize accountID=_accountID;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 andDataclass:(int)arg2;

@end

