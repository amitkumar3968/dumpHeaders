/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SULoadMoreMediaCellConfiguration : SUItemCellConfiguration
{
    float _previousCellHeight;
}

+ (float)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
@property(nonatomic) float previousCellHeight; // @synthesize previousCellHeight=_previousCellHeight;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (void)reloadImages;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)init;

@end

