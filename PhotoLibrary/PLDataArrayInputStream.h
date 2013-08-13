/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSInputStream.h"

@class NSArray, NSMutableData;

@interface PLDataArrayInputStream : NSInputStream
{
    NSArray *_dataArray;
    NSMutableData *_bodyData;
    unsigned int _dataCount;
    unsigned int _dataLength;
    unsigned int _dataOffset;
    unsigned int _currentIndex;
    unsigned int _currentOffset;
    unsigned int _currentLength;
    BOOL _openEventSent;
    unsigned int _streamStatus;
    id _delegate;
    id <PLDataArrayInputStreamProgressDelegate> _progressDelegate;
    struct __CFRunLoopSource *_rls;
    void *_clientCallback;
    CDStruct_304912e7 _clientContext;
}

@property(nonatomic) id <PLDataArrayInputStreamProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int *)arg2;
- (BOOL)hasBytesAvailable;
- (unsigned int)bytesRead;
- (unsigned int)totalBytes;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (void)_scheduleProgressUpdate;
- (void)_updateProgress;
- (unsigned int)streamStatus;
- (id)streamError;
- (void)close;
- (void)open;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(void *)arg2 context:(CDStruct_304912e7 *)arg3;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithDataArray:(id)arg1;

@end

