/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MobileBackup/MBDigest.h>

@interface MBDigestSHA1 : MBDigest
{
    struct CC_SHA1state_st _context;
}

- (id)final;
- (void)finalWithBytes:(void *)arg1 length:(unsigned int)arg2;
- (void)updateWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)init;

@end

