/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class OADBackground;

__attribute__((visibility("hidden")))
@interface PMBackgroundMapper : CMMapper
{
    OADBackground *mBackground;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOadBackground:(id)arg1 parent:(id)arg2;
- (struct CGRect)slideRect;

@end

