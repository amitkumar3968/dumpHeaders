/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMediaQueryPlaybackDataSource.h>

#import "IUGeniusMixQueueFeederDataSource.h"

@class MPGeniusMix, MPMediaItem, NSMutableArray;

@interface IUGeniusMixPlaybackDataSource : IUMediaQueryPlaybackDataSource <IUGeniusMixQueueFeederDataSource>
{
    NSMutableArray *_playlistQueries;
    MPMediaItem *_requiredInitialMediaItem;
    MPGeniusMix *_mix;
    BOOL _finite;
}

+ (Class)queueFeederClass;
@property(retain, nonatomic) MPMediaItem *requiredInitialMediaItem; // @synthesize requiredInitialMediaItem=_requiredInitialMediaItem;
@property(readonly, nonatomic) MPGeniusMix *mix; // @synthesize mix=_mix;
- (id)_generateNewPlaylistQuery:(id *)arg1 index:(unsigned int)arg2;
- (id)_queryForMediaItemAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) MPMediaItem *initialMediaItem;
- (unsigned int)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned int)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned int)arg2;
- (unsigned int)geniusMixQueueFeederMediaItemCount:(id)arg1;
- (id)query;
- (void)dealloc;
- (id)initWithGeniusMix:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id *)arg3;

@end

