/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MFPGraphicsState, MFPObjectTable, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MFPGraphics : NSObject
{
    struct CGRect mCanvas;
    int mHorzDpi;
    int mVertDpi;
    MFPGraphicsState *mCurrentState;
    NSMutableArray *mStateStack;
    MFPObjectTable *mObjectTable;
    NSMutableDictionary *mAvailableFonts;
}

+ (float)unitsPerInch:(int)arg1;
- (id).cxx_construct;
- (id)fontNameForUppercaseFontName:(id)arg1;
- (void)strokePath:(struct CGPath *)arg1 pen:(id)arg2;
- (void)fillPath:(struct CGPath *)arg1 evenOddRule:(BOOL)arg2 brush:(id)arg3;
- (id)currentState;
- (BOOL)areThereOpenContainers;
- (void)restoreGraphicsStateOrEndContainerWithId:(unsigned long)arg1;
- (void)beginContainerWithId:(unsigned long)arg1 boundsInParent:(struct CGRect)arg2 bounds:(struct CGRect)arg3 boundsUnit:(int)arg4;
- (void)beginContainerNoParamsWithId:(unsigned long)arg1;
- (void)beginContainerWithId:(unsigned long)arg1 containerTransform:(struct CGAffineTransform)arg2;
- (void)saveGraphicsStateWithId:(unsigned long)arg1;
- (struct CGAffineTransform)pageTransformWithScale:(float)arg1 unit:(int)arg2;
- (float)pixelsPerUnit:(int)arg1 direction:(int)arg2;
- (void)setHorizontalDpi:(int)arg1 verticalDpi:(int)arg2;
- (id)objectTable;
- (struct CGRect)canvas;
- (void)dealloc;
- (id)initWithCanvas:(struct CGRect)arg1;

@end
