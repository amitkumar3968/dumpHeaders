/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADTextBody;

__attribute__((visibility("hidden")))
@interface OADShape : OADGraphic
{
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}

- (void)createPresetGeometryWithShapeType:(int)arg1;
- (void)removeUnnecessaryOverrides;
- (void)flattenProperties;
- (void)setParentTextListStyle:(id)arg1;
- (void)setTextBody:(id)arg1;
- (id)textBody;
- (id)shapeProperties;
- (int)type;
- (id)geometry;
- (void)setGeometry:(id)arg1;
- (void)dealloc;
- (id)init;

@end

