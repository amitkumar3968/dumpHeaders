/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol OIProgressiveReaderDelegate

@optional
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned int)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(int)arg2;
@end

