/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OCDDocument.h>

@class NSMutableArray, NSMutableDictionary, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface PDPresentation : OCDDocument
{
    NSMutableArray *mSlideMasters;
    NSMutableArray *mNotesMasters;
    NSMutableArray *mSlides;
    NSMutableArray *mBulletBlips;
    struct CGSize mSlideSize;
    struct CGSize mNotesSize;
    BOOL mIsAutoPlay;
    BOOL mIsCommentsVisible;
    BOOL mIsLooping;
    BOOL mIsKiosk;
    NSMutableDictionary *mCommentAuthors;
    OADTextListStyle *mDefaultTextStyle;
}

- (id).cxx_construct;
- (void)flushUnusedMastersAndLayouts;
- (id)defaultTextStyle;
- (void)setCommentAuthor:(id)arg1 forId:(unsigned int)arg2;
- (id)commentAuthorForId:(unsigned int)arg1;
- (void)setIsKiosk:(BOOL)arg1;
- (BOOL)isKiosk;
- (void)setIsLooping:(BOOL)arg1;
- (BOOL)isLooping;
- (void)setIsCommentsVisible:(BOOL)arg1;
- (BOOL)isCommentsVisible;
- (void)setIsAutoPlay:(BOOL)arg1;
- (BOOL)isAutoPlay;
- (void)setNotesSize:(struct CGSize)arg1;
- (struct CGSize)notesSize;
- (void)setSlideSize:(struct CGSize)arg1;
- (struct CGSize)slideSize;
- (id)bulletBlips;
- (unsigned long)bulletBlipCount;
- (unsigned long)addBulletBlip:(id)arg1;
- (id)bulletBlipAtIndex:(long)arg1;
- (unsigned int)indexOfSlide:(id)arg1;
- (void)addSlide:(id)arg1;
- (id)slideAtIndex:(unsigned int)arg1;
- (unsigned int)slideCount;
- (void)addNotesMaster:(id)arg1;
- (id)notesMasterAtIndex:(unsigned int)arg1;
- (unsigned int)notesMasterCount;
- (void)addSlideMaster:(id)arg1;
- (id)slideMasterAtIndex:(unsigned int)arg1;
- (unsigned int)slideMasterCount;
- (void)dealloc;
- (id)init;

@end

