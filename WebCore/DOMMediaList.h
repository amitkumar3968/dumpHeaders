/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <WebCore/DOMObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMMediaList : DOMObject
{
}

- (void)appendMedium:(id)arg1;
- (void)deleteMedium:(id)arg1;
- (id)item:(unsigned int)arg1;
@property(readonly) unsigned int length;
@property(copy) NSString *mediaText;
- (void)finalize;
- (void)dealloc;

@end

