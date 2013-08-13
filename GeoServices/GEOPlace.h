/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOAddress, GEOLatLng, GEOMapRegion, NSMutableArray, NSString;

@interface GEOPlace : PBCodable
{
    long long _geoId;
    long long _uID;
    GEOAddress *_address;
    int _addressGeocodeAccuracy;
    NSMutableArray *_business;
    GEOLatLng *_center;
    NSMutableArray *_entryPoints;
    int _localSearchProviderID;
    GEOMapRegion *_mapRegion;
    NSString *_name;
    GEOAddress *_phoneticAddress;
    NSString *_phoneticName;
    int _type;
    int _version;
    BOOL _isDisputed;
    struct {
        unsigned int geoId:1;
        unsigned int uID:1;
        unsigned int addressGeocodeAccuracy:1;
        unsigned int localSearchProviderID:1;
        unsigned int type:1;
        unsigned int version:1;
        unsigned int isDisputed:1;
    } _has;
}

@property(nonatomic) long long geoId; // @synthesize geoId=_geoId;
@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property(retain, nonatomic) NSMutableArray *entryPoints; // @synthesize entryPoints=_entryPoints;
@property(nonatomic) int addressGeocodeAccuracy; // @synthesize addressGeocodeAccuracy=_addressGeocodeAccuracy;
@property(retain, nonatomic) NSMutableArray *business; // @synthesize business=_business;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property(retain, nonatomic) GEOAddress *phoneticAddress; // @synthesize phoneticAddress=_phoneticAddress;
@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) long long uID; // @synthesize uID=_uID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasGeoId;
@property(nonatomic) BOOL hasLocalSearchProviderID;
@property(nonatomic) BOOL hasIsDisputed;
@property(nonatomic) BOOL isDisputed; // @synthesize isDisputed=_isDisputed;
- (id)entryPointAtIndex:(unsigned int)arg1;
- (unsigned int)entryPointsCount;
- (void)addEntryPoint:(id)arg1;
- (void)clearEntryPoints;
@property(nonatomic) BOOL hasAddressGeocodeAccuracy;
- (id)businessAtIndex:(unsigned int)arg1;
- (unsigned int)businessCount;
- (void)addBusiness:(id)arg1;
- (void)clearBusiness;
@property(readonly, nonatomic) BOOL hasCenter;
@property(readonly, nonatomic) BOOL hasPhoneticAddress;
@property(readonly, nonatomic) BOOL hasPhoneticName;
@property(readonly, nonatomic) BOOL hasAddress;
@property(readonly, nonatomic) BOOL hasMapRegion;
@property(readonly, nonatomic) BOOL hasName;
@property(nonatomic) BOOL hasType;
@property(nonatomic) BOOL hasVersion;
@property(nonatomic) BOOL hasUID;
- (void)dealloc;
- (id)addressDictionary;

@end

