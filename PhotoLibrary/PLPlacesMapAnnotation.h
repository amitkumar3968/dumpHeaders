/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MKAnnotation.h"

@class NSString;

@interface PLPlacesMapAnnotation : NSObject <MKAnnotation>
{
    CDStruct_2c43369c _coordinate;
    NSString *_title;
    NSString *_subtitle;
    id _context;
    struct NSObject *_photoAlbum;
    CDStruct_2c43369c _animationOrigin;
    CDStruct_2c43369c _animationDestination;
    unsigned int _animationOriginSet:1;
    unsigned int _animationDestinationSet:1;
    unsigned int _isAnimationOnlyAnnotation:1;
}

@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void)clearAnimationInformation;
- (void)setAnimationDestination:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)animationDestination;
- (BOOL)hasAnimationDestination;
- (void)setAnimationOrigin:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)animationOrigin;
- (BOOL)hasAnimationOrigin;
- (BOOL)isAnimationOnlyAnnotation;
- (void)resetAfterMapChangeWhenVisible;
- (void)resetAfterMapChange;
- (void)updateCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)updateToTitle:(id)arg1 subtitle:(id)arg2 album:(struct NSObject *)arg3;
- (struct NSObject *)photoAlbum;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)setTitle:(id)arg1;
- (id)title;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initAnimationOnlyAnnotationWithLongitude:(double)arg1 latitude:(double)arg2;
- (id)initWithLongitude:(double)arg1 latitude:(double)arg2 title:(id)arg3 subtitle:(id)arg4 photoAlbum:(struct NSObject *)arg5;

@end
