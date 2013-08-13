/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSString;

@interface MBSnapshot : NSObject <NSCopying, NSCoding>
{
    unsigned int _snapshotID;
    NSString *_deviceName;
    NSDate *_date;
    int _state;
    BOOL _isCompatible;
    NSString *_systemVersion;
}

@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) unsigned int snapshotID; // @synthesize snapshotID=_snapshotID;
@property(readonly, nonatomic) BOOL isCompatible; // @synthesize isCompatible=_isCompatible;
@property(readonly, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapshotID:(unsigned int)arg1 deviceName:(id)arg2 date:(id)arg3 state:(int)arg4 isCompatible:(BOOL)arg5 systemVersion:(id)arg6;

@end
