/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUMediaObject.h>

@class NSArray, NSMutableArray;

@interface SUMovieMediaObject : SUMediaObject
{
    NSMutableArray *_remakerOutputs;
}

- (id)_newSnapshotImageWithMaximumSize:(float)arg1;
- (id)_activeRemadeVariant;
- (void)saveToLibraryWithCompletionBlock:(id)arg1;
- (id)newThumbnailImageWithMaximumSize:(float)arg1;
- (id)newComposeImageWithMaximumSize:(float)arg1;
- (id)newInputSource;
- (id)inputSourceMIMEType;
- (id)_fullSizeImage;
- (id)copyPreparationOperations;
@property(readonly) NSArray *remadeVariants;
- (void)addRemadeVariant:(id)arg1;
- (void)dealloc;

@end
