/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMediaQueriesDataSource.h>

@interface IUAudioBooksDataSource : IUMediaQueriesDataSource
{
    unsigned int _numberOfAudibleBooks;
}

+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;
+ (int)mediaEntityType;
- (unsigned int)_numberOfAudibleBooks;
- (id)_createContextForAudibleBooks;
- (BOOL)_isAudibleAudioBooks;
- (BOOL)_isAudibleAudioBooksQuery:(id)arg1;
- (id)viewControllerContextForMediaQuery:(id)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (id)viewControllerContextForActionRow:(id)arg1;
- (void)setQueries:(id)arg1;
- (void)reloadActionRows;
- (id)createNoContentDataSource;
- (void)createGlobalContexts;
- (BOOL)hideActionRowsOnAppear;
- (BOOL)hasActionRowsEvenWhenNoOtherRowsExist;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (int)filteredMediaTypes;
- (id)init;

@end

