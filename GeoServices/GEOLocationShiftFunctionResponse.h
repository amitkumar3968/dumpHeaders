/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface GEOLocationShiftFunctionResponse : NSObject
{
    CDStruct_2c43369c _originalCoordinate;
    CDStruct_2c43369c _shiftedCoordinate;
    double _creationTime;
}

@property(nonatomic) CDStruct_c3b9c2ee originalCoordinate; // @synthesize originalCoordinate=_originalCoordinate;
- (BOOL)needsNewFunctionForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (BOOL)wantsNewFunctionForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)shiftedCoordinateForCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double *)arg2;
- (id)initWithLocationShiftResponse:(id)arg1 originalCoordinate:(CDStruct_c3b9c2ee)arg2;

@end

