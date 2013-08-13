/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VGLRectList : NSObject
{
    CDStruct_818bb265 *_list;
    unsigned int _cursor;
    unsigned int _capacity;
    unsigned int _count;
}

@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
- (void)resizeCapacity:(unsigned int)arg1;
- (BOOL)intersectsWith:(CDStruct_818bb265)arg1;
- (void)removeAllRects;
- (void)removeRect:(CDStruct_818bb265)arg1;
- (void)addRect:(CDStruct_818bb265)arg1;
- (CDStruct_818bb265)rectAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

