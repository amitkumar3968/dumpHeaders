/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKAVMediaObject.h>

@class NSDictionary, NSString;

@interface CKAudioMediaObject : CKAVMediaObject
{
    NSDictionary *_transcodeOptions;
    NSString *_transcodePath;
}

+ (id)mimeTypesToFileExtensions;
- (id)effectiveExportedFilename;
- (double)transcodeDuration;
- (double)transcodeEndTime;
- (double)transcodeStartTime;
- (id)transcodeMimeType;
- (id)transcodedFilename;
- (void)prepareForTranscode;
- (id)_transcodeOptions;
- (int)mediaType;
- (void)dealloc;

@end

