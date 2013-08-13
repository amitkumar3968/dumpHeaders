/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface EDPageSetup : NSObject
{
    int mOrientation;
    int mPageOrder;
    _Bool mCustomFirstPageNumber;
    unsigned int mFirstPageNumber;
    unsigned int mCopies;
    unsigned int mFitToHeight;
    unsigned int mFitToWidth;
    unsigned int mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;
- (void)setFooterMargin:(float)arg1;
- (float)footerMargin;
- (void)setHeaderMargin:(float)arg1;
- (float)headerMargin;
- (void)setBottomMargin:(float)arg1;
- (float)bottomMargin;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;
- (void)setRightMargin:(float)arg1;
- (float)rightMargin;
- (void)setLeftMargin:(float)arg1;
- (float)leftMargin;
- (void)setScale:(unsigned int)arg1;
- (unsigned int)scale;
- (void)setFitToWidth:(unsigned int)arg1;
- (unsigned int)fitToWidth;
- (void)setFitToHeight:(unsigned int)arg1;
- (unsigned int)fitToHeight;
- (void)setFirstPageNumber:(unsigned int)arg1;
- (unsigned int)firstPageNumber;
- (void)setCustomFirstPageNumber:(_Bool)arg1;
- (_Bool)customFirstPageNumber;
- (void)setOrder:(int)arg1;
- (int)order;
- (void)setOrientation:(int)arg1;
- (int)orientation;
- (id)init;

@end

