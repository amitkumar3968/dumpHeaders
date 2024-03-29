/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class NSNumber;

@interface ICSByDayValue : NSObject <NSCoding>
{
    NSNumber *_number;
    int _weekday;
}

+ (id)byDayValueFromICSString:(id)arg1;
+ (int)weekdayFromICSString:(id)arg1;
@property int weekday; // @synthesize weekday=_weekday;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain) NSNumber *number;
- (id)initWithWeekday:(int)arg1 number:(id)arg2;
- (id)initWithWeekday:(int)arg1;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;

@end

