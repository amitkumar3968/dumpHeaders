/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <HomeSharing/HSRequest.h>

@interface HSItemsRequest : HSRequest
{
    BOOL _shouldParseResponse;
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;
+ (id)requestWithDatabaseID:(unsigned int)arg1;
@property(nonatomic) BOOL shouldParseResponse; // @synthesize shouldParseResponse=_shouldParseResponse;
- (void)setSongsRequestWithSessonID:(unsigned int)arg1 metadataFilter:(id)arg2 purchaseTokenListing:(id)arg3 queryFilter:(id)arg4;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;
- (id)initWithDatabaseID:(unsigned int)arg1;
- (id)initWithAction:(id)arg1;

@end

