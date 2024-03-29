/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface CKMediaObjectManager : NSObject
{
    NSMutableDictionary *_mediaObjectDict;
}

+ (id)sharedInstance;
- (void)dealloc;
- (Class)mediaObjectClassForMIMEType:(id)arg1;
- (Class)mediaObjectClassForPath:(id)arg1;
- (id)newMediaObjectForTransferGUID:(id)arg1;
- (Class)mediaObjectClassForTransferGUID:(id)arg1;
- (id)newMediaObjectForData:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3;
- (id)newMediaObjectForFilename:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3 composeOptions:(id)arg4;
- (void)_registerAllMediaTypes;

@end

