/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface PTPInitFailPacket : NSObject
{
    unsigned long _reason;
}

- (void)setReason:(unsigned long)arg1;
- (unsigned long)reason;
- (id)description;
- (id)contentForTCP;
- (id)initWithTCPBuffer:(void *)arg1;
- (id)initWithReason:(unsigned long)arg1;

@end

