/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class FirmwareBundle, NSMutableData;

@interface iAUPServer : NSObject
{
    int _parserState;
    BOOL _escapeInProgress;
    unsigned int _telegramLength;
    unsigned char _telegramChecksum;
    NSMutableData *_telegramDataIn;
    unsigned short objectBlockTransferSizes[4];
    unsigned int _firmwareImageBaseTransferAddress;
    FirmwareBundle *firmwareBundle;
    id <iAUPServerDelegate> _delegate;
}

+ (id)sharedServer;
@property(retain, nonatomic) FirmwareBundle *firmwareBundle; // @synthesize firmwareBundle;
- (void)setDelegate:(id)arg1;
- (void)sendCommand:(unsigned char)arg1 payload:(char *)arg2 payload_length:(unsigned short)arg3;
- (unsigned char)appendByteWithEscaping:(unsigned char)arg1 toObject:(id *)arg2;
- (void)processInTelegram;
- (void)processInByte:(unsigned char)arg1;
- (void)logCommand:(unsigned char)arg1 payload:(char *)arg2 length:(unsigned int)arg3;
- (void)appendToLog:(id)arg1;
- (void)resetParser;
- (unsigned int)supportedTargetProductIDCode;
- (void)dealloc;
- (id)init;

@end

