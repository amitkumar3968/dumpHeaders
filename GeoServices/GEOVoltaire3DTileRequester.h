/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <GeoServices/GEOVoltaireTileRequester.h>

@interface GEOVoltaire3DTileRequester : GEOVoltaireTileRequester
{
}

+ (Class)multiDownloaderClass;
+ (Class)simpleRequesterClass;
+ (unsigned char)tileProviderIdentifier;
- (id)multiTileURLStringForTileKey:(struct _GEOTileKey *)arg1 useStatusCodes:(char *)arg2;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;

@end

