/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ISOperation.h"

@class ISStoreURLOperation, NSString, SUClientInterface, SUSectionsResponse;

@interface SULoadNetworkSectionsOperation : ISOperation
{
    ISStoreURLOperation *_baseOperation;
    SUClientInterface *_clientInterface;
    NSString *_expectedVersionString;
    SUSectionsResponse *_sectionsResponse;
}

- (void)_setSectionsResponse:(id)arg1;
- (BOOL)_loadArtworkForResponse:(id)arg1;
- (id)_copyLoadedItemImage:(id)arg1 error:(id *)arg2;
- (id)_copyImageWithURL:(id)arg1 scale:(float)arg2 error:(id *)arg3;
- (id)_bestItemImageForImages:(id)arg1 withImageKind:(id)arg2;
- (void)run;
@property(retain) NSString *expectedVersionString;
@property(retain) ISStoreURLOperation *baseOperation;
@property(readonly) SUSectionsResponse *sectionsResponse;
- (void)dealloc;
- (id)initWithURL:(id)arg1 clientInterface:(id)arg2;

@end

