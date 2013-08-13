/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iLifeSlideshow/MCObject.h>

@class MCAsset, MCContainerEffect, NSArray, NSAttributedString, NSString;

@interface MCText : MCObject
{
    MCAsset *mAsset;
    unsigned int mIndex;
    NSString *mKeyInAsset;
    MCContainerEffect *mContainer;
    NSArray *mStringAttributes;
}

@property(retain) NSArray *stringAttributes; // @synthesize stringAttributes=mStringAttributes;
@property MCContainerEffect *container; // @synthesize container=mContainer;
@property(copy) NSString *keyInAsset; // @synthesize keyInAsset=mKeyInAsset;
@property(nonatomic) unsigned int index; // @synthesize index=mIndex;
@property(copy) NSAttributedString *attributedString; // @dynamic attributedString;
- (id)attributedStringWithCTAttributes;
@property(retain, nonatomic) MCAsset *asset; // @synthesize asset=mAsset;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;

@end

