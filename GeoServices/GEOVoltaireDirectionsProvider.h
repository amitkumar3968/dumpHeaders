/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <GeoServices/GEODirectionsProvider.h>

#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate>
{
    GEORequester *_requester;
}

+ (void)setUsePersistentConnection:(BOOL)arg1;
+ (unsigned short)providerID;
+ (void)resetProviderURL;
+ (id)providerURL;
@property(retain, nonatomic) GEORequester *requester; // @synthesize requester=_requester;
- (void)requesterDidCancel:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidFinish:(id)arg1;
- (void)cleanupRequester;
- (void)cancelProviderRequest;
- (void)startProviderWithRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

