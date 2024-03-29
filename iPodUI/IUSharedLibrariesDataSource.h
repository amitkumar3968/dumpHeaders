/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMediaListDataSource.h>

@class MPMediaLibrary, NSArray;

@interface IUSharedLibrariesDataSource : IUMediaListDataSource
{
    MPMediaLibrary *_connectingMediaLibrary;
    NSArray *_sharedMediaLibraries;
}

+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;
@property(retain, nonatomic) MPMediaLibrary *connectingMediaLibrary; // @synthesize connectingMediaLibrary=_connectingMediaLibrary;
@property(readonly, nonatomic) NSArray *sharedMediaLibraries;
- (void)_mediaLibrariesDidChangeNotification:(id)arg1;
- (BOOL)shouldShowGlobalSectionHeader;
- (float)sectionTitleLeftPadding;
- (void)reloadActionRows;
- (BOOL)hasActionRowsEvenWhenNoOtherRowsExist;
- (int)mediaDisclosureStyleForIndex:(unsigned int)arg1;
- (id)cellConfigurationForIndex:(unsigned int)arg1 shouldLoadArtwork:(BOOL)arg2 artworkLoadingCompletionHandler:(id)arg3;
- (unsigned int)count;
- (id)accessoryViewForIndex:(unsigned int)arg1;
- (void)configureMoreListTableCell:(id)arg1;
- (void)dealloc;
- (id)init;

@end

