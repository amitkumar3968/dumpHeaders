/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDictionary, NSMutableSet, NSNumber, NSString, PLManagedAsset;

@interface _PLGenericAlbum : PLManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)objectID;

// Remaining properties
@property(retain, nonatomic) NSMutableSet *albumLists; // @dynamic albumLists;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @dynamic keyAsset;
@property(retain, nonatomic) NSNumber *kind; // @dynamic kind;
@property(nonatomic) unsigned int pendingItemsCount; // @dynamic pendingItemsCount;
@property(nonatomic) unsigned int pendingItemsType; // @dynamic pendingItemsType;
@property(retain, nonatomic) NSDictionary *slideshowSettings; // @dynamic slideshowSettings;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end
