/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class EDCollection, EDReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDTable : NSObject
{
    EDResources *mResources;
    unsigned int mStyleIndex;
    unsigned int mHeaderRowDxfIndex;
    unsigned int mTotalsRowDxfIndex;
    unsigned int mDataAreaDxfIndex;
    unsigned int mHeaderRowBorderDxfIndex;
    unsigned int mTotalsRowBorderDxfIndex;
    unsigned int mDataAreaBorderDxfIndex;
    unsigned int mTableBorderDxfIndex;
    NSString *mName;
    NSString *mDisplayName;
    EDReference *mTableRange;
    NSString *mStyleName;
    unsigned int mHeaderRowCount;
    unsigned int mTotalsRowCount;
    _Bool mShowFirstColumn;
    _Bool mShowLastColumn;
    _Bool mShowRowStripes;
    _Bool mShowColumnStripes;
    EDCollection *mTableColumns;
}

+ (id)tableWithResources:(id)arg1;
- (void)setTableRange:(id)arg1;
- (void)setShowColumnStripes:(_Bool)arg1;
- (_Bool)showColumnStripes;
- (void)setShowRowStripes:(_Bool)arg1;
- (_Bool)showRowStripes;
- (void)setShowLastColumn:(_Bool)arg1;
- (_Bool)showLastColumn;
- (void)setShowFirstColumn:(_Bool)arg1;
- (_Bool)showFirstColumn;
- (id)tableColumns;
- (void)setTotalsRowCount:(unsigned int)arg1;
- (unsigned int)totalsRowCount;
- (void)setHeaderRowCount:(unsigned int)arg1;
- (unsigned int)headerRowCount;
- (id)tableRange;
- (void)setStyleName:(id)arg1;
- (id)styleName;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (void)setName:(id)arg1;
- (id)name;
- (void)setTableBorderDxf:(id)arg1;
- (id)tableBorderDxf;
- (void)setDataAreaBorderDxf:(id)arg1;
- (id)dataAreaBorderDxf;
- (void)setTotalsRowBorderDxf:(id)arg1;
- (id)totalsRowBorderDxf;
- (void)setHeaderRowBorderDxf:(id)arg1;
- (id)headerRowBorderDxf;
- (void)setDataAreaDxf:(id)arg1;
- (id)dataAreaDxf;
- (void)setTotalsRowDxf:(id)arg1;
- (id)totalsRowDxf;
- (void)setHeaderRowDxf:(id)arg1;
- (id)headerRowDxf;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
- (void)setTableBorderDxfIndex:(unsigned int)arg1;
- (unsigned int)tableBorderDxfIndex;
- (void)setDataAreaBorderDxfIndex:(unsigned int)arg1;
- (unsigned int)dataAreaBorderDxfIndex;
- (void)setTotalsRowBorderDxfIndex:(unsigned int)arg1;
- (unsigned int)totalsRowBorderDxfIndex;
- (void)setHeaderRowBorderDxfIndex:(unsigned int)arg1;
- (unsigned int)headerRowBorderDxfIndex;
- (void)setDataAreaDxfIndex:(unsigned int)arg1;
- (unsigned int)dataAreaDxfIndex;
- (void)setTotalsRowDxfIndex:(unsigned int)arg1;
- (unsigned int)totalsRowDxfIndex;
- (void)setHeaderRowDxfIndex:(unsigned int)arg1;
- (unsigned int)headerRowDxfIndex;
- (void)setStyleIndex:(unsigned int)arg1;
- (unsigned int)styleIndex;

@end

