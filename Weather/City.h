/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString;

@interface City : NSObject
{
    id _delegate;
    int _updateInterval;
    NSString *_name;
    NSString *_locationID;
    NSString *_state;
    NSString *_link;
    float _latitude;
    float _longitude;
    NSString *_temperature;
    unsigned int _bigIcon;
    NSMutableArray *_dayForecasts;
    NSMutableArray *_hourlyForecasts;
    unsigned int _observationTime;
    unsigned int _sunsetTime;
    unsigned int _sunriseTime;
    unsigned int _moonPhase;
    BOOL _dataCelsius;
    BOOL _autoUpdate;
    BOOL _isUpdating;
    NSString *_updateTimeString;
    NSDate *_updateTime;
    int _lastUpdateStatus;
    int _lastUpdateDetail;
    BOOL isLocalWeatherCity;
    BOOL _hourlyDataIsCelsius;
    NSString *_windChill;
    unsigned int _windDirection;
    float _windSpeed;
    unsigned int _humidity;
    float _visibility;
    float _pressure;
    int _pressureRising;
    float _dewPoint;
    float _feelsLike;
    float _heatIndex;
    NSString *_woeid;
    BOOL _isLocalWeatherCity;
    int _secondsFromGMT;
    BOOL _isRequestedByFrameworkClient;
}

@property(nonatomic) BOOL isRequestedByFrameworkClient; // @synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient;
@property(nonatomic) int secondsFromGMT; // @synthesize secondsFromGMT=_secondsFromGMT;
@property(nonatomic) BOOL isLocalWeatherCity; // @synthesize isLocalWeatherCity=_isLocalWeatherCity;
@property(copy, nonatomic) NSString *woeid; // @synthesize woeid=_woeid;
@property(nonatomic) float heatIndex; // @synthesize heatIndex=_heatIndex;
@property(nonatomic) float feelsLike; // @synthesize feelsLike=_feelsLike;
@property(nonatomic) float dewPoint; // @synthesize dewPoint=_dewPoint;
@property(nonatomic) int pressureRising; // @synthesize pressureRising=_pressureRising;
@property(nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(nonatomic) float visibility; // @synthesize visibility=_visibility;
@property(nonatomic) unsigned int humidity; // @synthesize humidity=_humidity;
@property(nonatomic) float windSpeed; // @synthesize windSpeed=_windSpeed;
@property(nonatomic) unsigned int windDirection; // @synthesize windDirection=_windDirection;
@property(copy, nonatomic) NSString *windChill; // @synthesize windChill=_windChill;
@property(nonatomic) BOOL isHourlyDataCelsius; // @synthesize isHourlyDataCelsius=_hourlyDataIsCelsius;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
- (id)windDirectionAsString:(int)arg1;
- (BOOL)populateWithDataFromCity:(id)arg1;
- (id)cityAndState;
- (id)state;
- (void)setState:(id)arg1;
- (id)updateTimeString;
- (id)updateTime;
- (int)lastUpdateDetail;
- (int)lastUpdateStatus;
- (void)setLastUpdateStatus:(int)arg1;
- (BOOL)isUpdatingOrNoData;
- (BOOL)_isUpdating;
- (void)finishedUpdating:(int)arg1 statusDetail:(int)arg2;
- (void)setUpdateTime:(id)arg1;
- (void)addHourlyForecast:(id)arg1;
- (id)hourlyForecasts;
- (void)setHourlyForecasts:(id)arg1;
- (void)addDayForecast:(id)arg1;
- (void)clearForecasts;
- (void)update;
- (void)updateLocalWeather;
- (int)weatherDataAge;
- (void)setDataCelsius:(BOOL)arg1;
- (BOOL)isDataCelsius;
- (void)setMoonPhase:(unsigned int)arg1;
- (unsigned int)moonPhase;
- (BOOL)isDay;
- (unsigned int)sunriseTime;
- (void)setSunriseTime:(unsigned int)arg1;
- (unsigned int)sunsetTime;
- (void)setSunsetTime:(unsigned int)arg1;
- (unsigned int)observationTime;
- (void)setObservationTime:(unsigned int)arg1;
- (id)dayForecasts;
- (void)setDayForecasts:(id)arg1;
- (void)setBigIcon:(unsigned int)arg1;
- (unsigned int)bigIcon;
- (id)temperature;
- (void)setTemperature:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (void)setLocationID:(id)arg1;
- (id)displayName;
- (id)locationID;
- (id)name;
- (void)setName:(id)arg1;
- (void)setAutoUpdate:(BOOL)arg1;
- (void)disassociateWithDelegate:(id)arg1;
- (void)associateWithDelegate:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

