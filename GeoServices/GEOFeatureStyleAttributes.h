/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@interface GEOFeatureStyleAttributes : NSObject <NSCopying>
{
    struct {
        unsigned int key;
        int value;
    } v[16];
}

- (void)sort;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isFreeway;
- (BOOL)isRamp;
- (BOOL)isTunnel;

@end

