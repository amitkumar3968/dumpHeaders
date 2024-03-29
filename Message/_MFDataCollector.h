/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFCollectingDataConsumer.h"

@class LibraryMessage, MFBufferedDataConsumer, MFMailMessageLibrary, NSString;

@interface _MFDataCollector : NSObject <MFCollectingDataConsumer>
{
    MFMailMessageLibrary *_library;
    LibraryMessage *_message;
    MFBufferedDataConsumer *_consumer;
    NSString *_part;
    BOOL _partial;
    BOOL _incomplete;
}

- (id)data;
- (void)dealloc;
- (void)done;
- (int)appendData:(id)arg1;
- (id)pathForStorage;
- (id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(BOOL)arg4 incomplete:(BOOL)arg5;

@end

