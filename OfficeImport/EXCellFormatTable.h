/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface EXCellFormatTable : NSObject
{
}

+ (void)readFromCellStylesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromCellStyleXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromCellXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readCellFormatsFrom:(struct _xmlNode *)arg1 cellStyleXfsOffset:(unsigned int)arg2 isStyle:(_Bool)arg3 state:(id)arg4;

@end
