/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ML3MusicLibrary.h"

@interface ML3MusicLibrary (HomeSharingAdditions)
+ (void)buildDatabaseFromHomeSharingConnection:(id)arg1 atPath:(id)arg2 completionHandler:(id)arg3 progressHandler:(void)arg4;
+ (void)buildDatabaseFromHomeSharingConnection:(id)arg1 atPath:(id)arg2 completionHandler:(id)arg3;
- (void)clearTrackAndCollectionCloudStatus;
- (void)checkForChangesOnConnection:(id)arg1 completionHandler:(id)arg2;
- (void)fillContainerForHomeSharingConnection:(id)arg1 containerID:(long long)arg2 completionHandler:(id)arg3;
@end

