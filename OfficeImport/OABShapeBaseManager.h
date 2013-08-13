/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OABFillPropertiesManager.h>

#import "OABBasePropertiesManager.h"

__attribute__((visibility("hidden")))
@interface OABShapeBaseManager : OABFillPropertiesManager <OABBasePropertiesManager>
{
    struct EshShapeBase *mShapeBase;
}

- (long)shadowSoftness;
- (long)shadowOffsetY;
- (long)shadowOffsetX;
- (long)shadowAlpha;
- (int)shadowType;
- (BOOL)isShadowed;
- (int)strokeEndArrowLength;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowType;
- (int)strokeStartArrowLength;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowType;
- (int)strokeJoinStyle;
- (int)strokeCapStyle;
- (const struct EshTablePropVal<long> *)strokeCustomDash;
- (int)strokePresetDash;
- (int)strokeCompoundType;
- (long)strokeMiterLimit;
- (long)strokeWidth;
- (long)strokeFgAlpha;
- (id)strokeFillBlipName;
- (unsigned long)strokeFillBlipID;
- (int)strokeFillType;
- (struct EshColor)shadowColor;
- (struct EshColor)strokeBgColor;
- (struct EshColor)strokeFgColor;
- (BOOL)isStroked;
- (void)dealloc;
- (id)initWithShapeBase:(struct EshShapeBase *)arg1 shapeType:(int)arg2 masterShape:(struct EshShape *)arg3;

@end

