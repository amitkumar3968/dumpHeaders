/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUMessagePart.h>

@class SUMediaObject, UIImage;

@interface SUMediaObjectMessagePart : SUMessagePart
{
    UIImage *_composeImage;
    SUMediaObject *_mediaObject;
}

- (id)_bubbleImageForImage:(id)arg1;
- (id)newUnfilteredInputSource;
- (id)MIMEType;
- (id)copyPreparationOperations;
- (id)composeImage;
- (void)generateComposeImage;
- (void)dealloc;
- (id)initWithMediaObject:(id)arg1;

@end
