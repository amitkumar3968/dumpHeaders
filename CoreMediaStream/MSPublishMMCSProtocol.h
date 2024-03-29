/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreMediaStream/MSMMCSProtocol.h>

#import "MSPublishStorageProtocol.h"

@class NSMutableDictionary;

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol>
{
    id <MSPublishStorageProtocolDelegate> _delegate;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    const char **_signatures;
    char **_authTokens;
    unsigned int *_itemFlags;
    int _itemsInFlight;
}

@property(nonatomic) id <MSPublishStorageProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_putItemsFailure;
- (void)_requestCompleted;
- (void)_putItemDone:(unsigned long long)arg1 error:(id)arg2;
- (void)publishAssets:(id)arg1 URL:(id)arg2;
- (id)_getUTIFromItem:(unsigned long long)arg1;
- (void)_closeFDForAsset:(id)arg1;
- (int)_getFileDescriptorFromItem:(unsigned long long)arg1;
- (void)computeHashForAsset:(id)arg1;
- (void)dealloc;
- (void)deactivate;
- (id)initWithPersonID:(id)arg1;

@end

