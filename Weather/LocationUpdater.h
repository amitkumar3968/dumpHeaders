/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Weather/WeatherUpdater.h>

@class CLGeocoder, City;

@interface LocationUpdater : WeatherUpdater
{
    BOOL _isGeoCoding;
    CLGeocoder *_geoCoder;
    id _localWeatherHandler;
    City *_currentCity;
}

+ (void)clearSharedLocationUpdater;
+ (id)sharedLocationUpdater;
@property(retain, nonatomic) City *currentCity; // @synthesize currentCity=_currentCity;
- (void)_failed:(int)arg1;
- (void)didProcessDocument;
- (id)aggregateDictionaryDomain;
- (void)failCity:(id)arg1;
- (BOOL)isDataValid:(id)arg1;
- (void)updateWeatherForLocation:(id)arg1 city:(id)arg2;
- (void)updateWeatherForLocation:(id)arg1 city:(id)arg2 withCompletionHandler:(id)arg3;
- (void)handleCompletionForCity:(id)arg1 withUpdateDetail:(int)arg2;
- (void)handleNilCity;
- (void)enableProgressIndicator:(BOOL)arg1;
- (void)parsedResultCity:(id)arg1;
- (void)cancel;
- (void)dealloc;

@end
