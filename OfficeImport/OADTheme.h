/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class OADBaseStyles, OADDefaultProperties;

__attribute__((visibility("hidden")))
@interface OADTheme : NSObject
{
    OADBaseStyles *mBaseStyles;
    OADDefaultProperties *mShapeDefaults;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mTextDefaults;
}

- (id)addTextDefaults;
- (id)textDefaults;
- (id)addLineDefaults;
- (id)lineDefaults;
- (id)addShapeDefaults;
- (id)shapeDefaults;
- (void)addDefaults;
- (id)baseStyles;
- (void)dealloc;
- (id)init;

@end

