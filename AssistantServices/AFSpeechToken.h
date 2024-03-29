/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AFSpeechToken : NSObject
{
    NSString *_text;
    int _confidence;
    double _startTime;
    double _endTime;
    BOOL _removeSpaceBefore;
    BOOL _removeSpaceAfter;
}

@property BOOL removeSpaceAfter; // @synthesize removeSpaceAfter=_removeSpaceAfter;
@property BOOL removeSpaceBefore; // @synthesize removeSpaceBefore=_removeSpaceBefore;
@property double endTime; // @synthesize endTime=_endTime;
@property double startTime; // @synthesize startTime=_startTime;
@property int confidenceScore; // @synthesize confidenceScore=_confidence;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithDKPlistRepresentation:(id)arg1;
- (id)dkPlistRepresentation;
- (id)description;

@end

