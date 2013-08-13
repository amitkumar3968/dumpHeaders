/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ICSWriting.h"
#import "NSCoding.h"

@class NSMutableDictionary;

@interface ICSProperty : NSObject <NSCoding, ICSWriting>
{
    NSMutableDictionary *_parameters;
    unsigned int _type;
    id _value;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)ICSStringWithOptions:(unsigned int)arg1;
- (void)removeParameterValueForName:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (void)setParameters:(id)arg1;
- (void)addParametersFromDictionary:(id)arg1;
- (id)parameterValueForName:(id)arg1;
- (id)value;
- (unsigned int)type;
- (BOOL)isMultiValued;
- (void)dealloc;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3;
- (void)setValueAsProperty:(id)arg1 withRawValue:(const char *)arg2 options:(unsigned int)arg3;
- (void)_setParsedValues:(id)arg1 type:(unsigned int)arg2;
- (void)addParameter:(id)arg1 withRawValue:(id)arg2 options:(unsigned int)arg3;
- (id)allParameters;
- (id)description;
- (id)stringValue;
- (id)parameters;
- (void)setValue:(id)arg1 type:(int)arg2;
- (id)initWithValue:(id)arg1 type:(unsigned int)arg2;

@end

