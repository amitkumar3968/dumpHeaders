/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WBTableCellBodyProperties : NSObject
{
}

+ (void)write:(id)arg1 wrdProperties:(struct WrdTableProperties *)arg2 tracked:(struct WrdTableProperties *)arg3 index:(int)arg4;
+ (void)readFrom:(struct WrdTableProperties *)arg1 tracked:(struct WrdTableProperties *)arg2 properties:(id)arg3 index:(int)arg4;
+ (void)mapProperties:(id)arg1 toWordProperties:(struct WrdTableProperties *)arg2 index:(int)arg3;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg1 toProperties:(id)arg2 index:(int)arg3;
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;

@end

