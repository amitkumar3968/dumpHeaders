/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MCManifest : NSObject
{
    NSString *_path;
    NSMutableDictionary *_manifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)installedProfileWithIdentifier:(id)arg1;
+ (id)sharedManifest;
+ (void)_setManifestPath:(id)arg1;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)removeIdentifierFromManifest:(id)arg1;
- (void)addIdentifierToManifest:(id)arg1 flag:(int)arg2;
- (id)allInstalledProfileIdentifiers;
- (id)identifiersOfProfilesWithFilterFlags:(int)arg1;
- (void)_setManifest:(id)arg1;
- (id)manifest;
- (id)_manifest;
- (void)dealloc;
- (id)init;

@end

