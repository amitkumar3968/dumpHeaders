/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CalDAV/CalDAVServerVersion.h>

@class NSRegularExpression;

@interface CalDAVConcreteServerVersion : CalDAVServerVersion
{
    NSRegularExpression *_regularExpression;
}

+ (id)prototypes;
@property(retain, nonatomic) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (void)dealloc;

@end

