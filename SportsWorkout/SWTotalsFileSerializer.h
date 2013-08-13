/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableString, NSURL;

@interface SWTotalsFileSerializer : NSObject <NSXMLParserDelegate>
{
    unsigned int _totalWorkouts;
    unsigned int _totalCalories;
    unsigned int _totalSeconds;
    unsigned int _mostCalories;
    unsigned int _total5K;
    unsigned int _total10K;
    unsigned int _totalMarathon;
    unsigned int _totalHalfMarathon;
    float _farthestMile;
    float _totalDistanceMiles;
    unsigned int _totalWeightWorkouts;
    double _weight;
    NSMutableString *_foundCharacters;
    NSURL *_url;
}

+ (void)initialize;
@property(readonly) double weight; // @synthesize weight=_weight;
@property(readonly) unsigned int totalWeightWorkouts; // @synthesize totalWeightWorkouts=_totalWeightWorkouts;
@property(readonly) float totalDistanceMiles; // @synthesize totalDistanceMiles=_totalDistanceMiles;
@property(readonly) float farthestMile; // @synthesize farthestMile=_farthestMile;
@property(readonly) unsigned int totalHalfMarathon; // @synthesize totalHalfMarathon=_totalHalfMarathon;
@property(readonly) unsigned int totalMarathon; // @synthesize totalMarathon=_totalMarathon;
@property(readonly) unsigned int total10K; // @synthesize total10K=_total10K;
@property(readonly) unsigned int total5K; // @synthesize total5K=_total5K;
@property(readonly) unsigned int mostCalories; // @synthesize mostCalories=_mostCalories;
@property(readonly) unsigned int totalSeconds; // @synthesize totalSeconds=_totalSeconds;
@property(readonly) unsigned int totalCalories; // @synthesize totalCalories=_totalCalories;
@property(readonly) unsigned int totalWorkouts; // @synthesize totalWorkouts=_totalWorkouts;
- (void)parseWeight;
- (void)parseTotalWeightWorkouts;
- (void)parseTotalDistanceMiles;
- (void)parseFarthestMile;
- (void)parseTotalHalfMarathon;
- (void)parseTotalMarathon;
- (void)parseTotal10K;
- (void)parseTotal5K;
- (void)parseMostCalories;
- (void)parseTotalSeconds;
- (void)parseTotalCalories;
- (void)parseTotalWorkouts;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidStartDocument:(id)arg1;
- (void)reset;
- (id)url;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;
- (id)init;

@end

