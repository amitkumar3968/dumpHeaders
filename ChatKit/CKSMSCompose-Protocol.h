/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol CKSMSCompose <NSObject>
+ (BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (BOOL)acceptsMIMEType:(id)arg1;
- (void)setUICustomizationData:(id)arg1;
- (void)forceCancelComposition;
- (void)setText:(id)arg1 addresses:(id)arg2;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)disableCameraAttachments;
- (void)setCanEditRecipients:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (BOOL)insertTextPart:(id)arg1;
@end

