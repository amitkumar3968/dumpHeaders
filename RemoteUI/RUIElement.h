/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface RUIElement : NSObject
{
    NSDictionary *_attributes;
}

@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setImage:(id)arg1;
- (BOOL)loadImage;
- (void)imageLoaded:(id)arg1;
- (int)_horizontalAlignmentForString:(id)arg1;
- (id)imageAttributeAndScale:(float *)arg1;
- (void)dealloc;
- (void)populatePostbackDictionary:(id)arg1;

@end

