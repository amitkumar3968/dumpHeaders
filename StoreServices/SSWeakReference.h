/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface SSWeakReference : NSObject
{
    id _object;
    unsigned int _objectAddress;
}

+ (id)weakReferenceWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic) id object;
- (void)dealloc;

@end

