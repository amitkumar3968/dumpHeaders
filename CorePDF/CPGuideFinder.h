/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "CPDisposable.h"

@class CPCluster, CPZone, NSMutableArray;

@interface CPGuideFinder : NSObject <CPDisposable>
{
    CPZone *contentZone;
    unsigned int countOfWordsInZone;
    double *anchorArray;
    double *rightHandSideArray;
    CDStruct_efade31e *crossingWordArray;
    CPCluster *anchors;
    CPCluster *rightHandSides;
    float medianFontSizeOfFirstCharacter;
    float medianFontSizeOfLastCharacter;
    NSMutableArray *gutters;
    NSMutableArray *leftGuides;
    NSMutableArray *rightGuides;
}

+ (void)reclusterBetweenGuides:(id)arg1;
+ (void)reclusterPreservingAlignment:(id)arg1;
+ (BOOL)gutterSeparates:(id)arg1 from:(id)arg2;
+ (BOOL)guideSeparates:(id)arg1 from:(id)arg2;
- (id)rightGuides;
- (BOOL)hasRightGuides;
- (id)leftGuides;
- (BOOL)hasLeftGuides;
- (id)gutters;
- (BOOL)hasGutters;
- (void)markTextLines;
- (void)splitTextLines;
- (void)splitTextLinesBetweenBorderWords;
- (void)splitTextLinesAtBorderWords;
- (void)findGuides;
- (void)findGutters;
- (void)findWordEdgeClusters;
- (void)subdivideRightGuideAt:(unsigned int)arg1;
- (void)subdivideLeftGuideAt:(unsigned int)arg1;
- (void)subdivideGutterFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(CDStruct_efade31e *)arg4 ofCount:(unsigned int)arg5 crossedBy:(CDStruct_efade31e *)arg6 ofCount:(unsigned int)arg7;
- (void)setAlignForWordWithExtent:(CDStruct_efade31e *)arg1 stripArray:(id)arg2 stripMax:(double)arg3;
- (BOOL)addStripTo:(id)arg1 bottom:(float)arg2 left:(float)arg3 top:(float)arg4 right:(float)arg5;
- (void)getWordEdges;
- (float)medianFontSizeOfLastCharacter;
- (float)medianFontSizeOfFirstCharacter;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithContentZone:(id)arg1;

@end

