/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface WebEvent : NSObject
{
    int _type;
    double _timestamp;
    struct CGPoint _locationInWindow;
    NSString *_characters;
    NSString *_charactersIgnoringModifiers;
    unsigned int _modifierFlags;
    BOOL _keyRepeating;
    BOOL _popupVariant;
    unsigned short _keyCode;
    BOOL _tabKey;
    int _characterSet;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray *_touchLocations;
    NSArray *_touchIdentifiers;
    NSArray *_touchPhases;
    BOOL _isGesture;
    float _gestureScale;
    float _gestureRotation;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id).cxx_construct;
@property(readonly, nonatomic) float gestureRotation;
@property(readonly, nonatomic) float gestureScale;
@property(readonly, nonatomic) BOOL isGesture;
@property(readonly, nonatomic) NSArray *touchPhases;
@property(readonly, nonatomic) NSArray *touchIdentifiers;
@property(readonly, nonatomic) NSArray *touchLocations;
@property(readonly, nonatomic) unsigned int touchCount;
@property(readonly, nonatomic) float deltaY;
@property(readonly, nonatomic) float deltaX;
@property(readonly, nonatomic) int characterSet;
@property(readonly, nonatomic, getter=isTabKey) BOOL tabKey;
@property(readonly, nonatomic) unsigned short keyCode;
@property(readonly, nonatomic, getter=isPopupVariant) BOOL popupVariant;
@property(readonly, nonatomic, getter=isKeyRepeating) BOOL keyRepeating;
@property(readonly, nonatomic) unsigned int modifierFlags;
@property(readonly, nonatomic) NSString *charactersIgnoringModifiers;
@property(readonly, nonatomic) NSString *characters;
@property(readonly, nonatomic) struct CGPoint locationInWindow;
- (id)description;
- (id)_eventDescription;
- (id)_touchPhasesDescription;
- (id)_touchPhaseDescription:(int)arg1;
- (id)_touchIdentifiersDescription;
- (id)_touchLocationsDescription:(id)arg1;
- (id)_characterSetDescription;
- (id)_modiferFlagsDescription;
- (id)_typeDescription;
- (void)dealloc;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(BOOL)arg6 isPopupVariant:(BOOL)arg7 keyCode:(unsigned short)arg8 isTabKey:(BOOL)arg9 characterSet:(int)arg10;
- (id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3 modifiers:(unsigned int)arg4 touchCount:(unsigned int)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(BOOL)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11;
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(struct CGPoint)arg2 deltaX:(float)arg3 deltaY:(float)arg4;
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3;

@end

