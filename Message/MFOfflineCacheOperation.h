/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@interface MFOfflineCacheOperation : NSObject <NSCoding>
{
    long long _rowid;
}

@property(nonatomic) long long rowid; // @synthesize rowid=_rowid;
- (BOOL)hasRowid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

