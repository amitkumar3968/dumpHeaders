/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOSearchAttributionServerProxy.h"

@class GEOSearchAttributionManifest;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerRemoteProxy : NSObject <GEOSearchAttributionServerProxy>
{
    GEOSearchAttributionManifest *_manifest;
}

- (void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned int)arg2 completionHandler:(id)arg3 errorHandler:(void)arg4;
- (id)_manifest;
- (void)dealloc;

@end

