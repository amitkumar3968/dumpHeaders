/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WBTableCell : NSObject
{
}

+ (void)setParagraphProperties:(id)arg1 paragraphProperties:(struct WrdParagraphProperties *)arg2 for:(id)arg3;
+ (void)writeCharacterProperties:(id)arg1 to:(id)arg2;
+ (void)writeParagraphProperties:(id)arg1 to:(id)arg2;
+ (void)writeText:(id)arg1 to:(id)arg2;
+ (void)readFrom:(id)arg1 textRun:(struct WrdTextRun *)arg2 with:(struct WrdTableProperties *)arg3 tracked:(struct WrdTableProperties *)arg4 row:(id)arg5 index:(int)arg6 cell:(id)arg7;

@end
