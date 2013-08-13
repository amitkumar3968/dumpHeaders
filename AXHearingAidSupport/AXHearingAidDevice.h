/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "CBPeripheralDelegate.h"

@class AXHearingAidMode, AXTimer, CBPeripheral, NSArray, NSMutableDictionary, NSString;

@interface AXHearingAidDevice : NSObject <CBPeripheralDelegate>
{
    float _leftVolume;
    float _rightVolume;
    float _leftMicrophoneVolume;
    float _rightMicrophoneVolume;
    float _leftStreamVolume;
    float _rightStreamVolume;
    BOOL _keepInSync;
    BOOL _finishedLoading;
    long initialLoadToken;
    AXTimer *_leftInvalidationTimer;
    AXTimer *_rightInvalidationTimer;
    AXTimer *_propertyWriteTimer;
    BOOL _didLoseLeftPeripheral;
    BOOL _didLoseRightPeripheral;
    NSString *leftUUID;
    NSString *rightUUID;
    NSString *name;
    NSString *manufacturer;
    NSString *model;
    NSString *leftFirmwareVersion;
    NSString *rightFirmwareVersion;
    NSString *leftHardwareVersion;
    NSString *rightHardwareVersion;
    float rightBatteryLevel;
    float leftBatteryLevel;
    NSArray *rightPrograms;
    NSArray *leftPrograms;
    AXHearingAidMode *currentRightProgram;
    AXHearingAidMode *currentLeftProgram;
    CBPeripheral *leftPeripheral;
    CBPeripheral *rightPeripheral;
    BOOL isPaired;
    BOOL isConnecting;
    BOOL isPersistent;
    int leftLoadedProperties;
    int rightLoadedProperties;
    NSMutableDictionary *leftPropertiesLoadCount;
    NSMutableDictionary *rightPropertiesLoadCount;
    NSString *leftPeripheralUUID;
    NSString *rightPeripheralUUID;
    int leftWriteRequestProperties;
    int rightWriteRequestProperties;
    struct CGImage *_devicePhoto;
}

+ (id)characteristicsUUIDs;
@property(nonatomic) struct CGImage *devicePhoto; // @synthesize devicePhoto=_devicePhoto;
@property(nonatomic) int rightWriteRequestProperties; // @synthesize rightWriteRequestProperties;
@property(nonatomic) int leftWriteRequestProperties; // @synthesize leftWriteRequestProperties;
@property(retain, nonatomic) NSString *rightPeripheralUUID; // @synthesize rightPeripheralUUID;
@property(retain, nonatomic) NSString *leftPeripheralUUID; // @synthesize leftPeripheralUUID;
@property(retain, nonatomic) NSMutableDictionary *rightPropertiesLoadCount; // @synthesize rightPropertiesLoadCount;
@property(retain, nonatomic) NSMutableDictionary *leftPropertiesLoadCount; // @synthesize leftPropertiesLoadCount;
@property(nonatomic) int rightLoadedProperties; // @synthesize rightLoadedProperties;
@property(nonatomic) int leftLoadedProperties; // @synthesize leftLoadedProperties;
@property(nonatomic) BOOL keepInSync; // @synthesize keepInSync=_keepInSync;
@property(nonatomic) float leftStreamVolume; // @synthesize leftStreamVolume=_leftStreamVolume;
@property(nonatomic) float rightStreamVolume; // @synthesize rightStreamVolume=_rightStreamVolume;
@property(nonatomic) float leftMicrophoneVolume; // @synthesize leftMicrophoneVolume=_leftMicrophoneVolume;
@property(nonatomic) float rightMicrophoneVolume; // @synthesize rightMicrophoneVolume=_rightMicrophoneVolume;
@property(nonatomic) float leftVolume; // @synthesize leftVolume=_leftVolume;
@property(nonatomic) float rightVolume; // @synthesize rightVolume=_rightVolume;
@property(nonatomic) BOOL isPersistent; // @synthesize isPersistent;
@property(nonatomic) BOOL isConnecting; // @synthesize isConnecting;
@property(nonatomic) BOOL isPaired; // @synthesize isPaired;
@property(retain, nonatomic) CBPeripheral *rightPeripheral; // @synthesize rightPeripheral;
@property(retain, nonatomic) CBPeripheral *leftPeripheral; // @synthesize leftPeripheral;
@property(nonatomic) AXHearingAidMode *currentLeftProgram; // @synthesize currentLeftProgram;
@property(nonatomic) AXHearingAidMode *currentRightProgram; // @synthesize currentRightProgram;
@property(copy, nonatomic) NSArray *leftPrograms; // @synthesize leftPrograms;
@property(copy, nonatomic) NSArray *rightPrograms; // @synthesize rightPrograms;
@property(nonatomic) float leftBatteryLevel; // @synthesize leftBatteryLevel;
@property(nonatomic) float rightBatteryLevel; // @synthesize rightBatteryLevel;
@property(retain, nonatomic) NSString *rightHardwareVersion; // @synthesize rightHardwareVersion;
@property(retain, nonatomic) NSString *leftHardwareVersion; // @synthesize leftHardwareVersion;
@property(retain, nonatomic) NSString *rightFirmwareVersion; // @synthesize rightFirmwareVersion;
@property(retain, nonatomic) NSString *leftFirmwareVersion; // @synthesize leftFirmwareVersion;
@property(retain, nonatomic) NSString *model; // @synthesize model;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *rightUUID; // @synthesize rightUUID;
@property(retain, nonatomic) NSString *leftUUID; // @synthesize leftUUID;
- (BOOL)peripheralsStillAvailable;
- (void)didCommunicateWithPeripheral:(id)arg1;
- (id)persistentRepresentation;
- (BOOL)addPeripheral:(id)arg1;
- (id)description;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)logCharacteristic:(id)arg1 andPeripheral:(id)arg2;
- (void)peripheralDidInvalidateServices:(id)arg1;
- (void)peripheral:(id)arg1 didUpdateCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheralDidUpdateName:(id)arg1;
- (void)setRightSelectedProgram:(id)arg1;
- (id)rightSelectedProgram;
- (void)setLeftSelectedProgram:(id)arg1;
- (id)leftSelectedProgram;
- (id)selectedProgramIndexes;
- (id)selectedPrograms;
- (void)selectProgram:(id)arg1;
- (void)writeInt:(unsigned char)arg1 toPeripheral:(id)arg2 forProperty:(int)arg3;
- (void)writeVolume:(float)arg1 toPeripheral:(id)arg2 forProperty:(int)arg3;
- (void)delayWriteProperty:(int)arg1 forPeripheral:(id)arg2;
- (unsigned char)volumeValueForProperty:(int)arg1 andPeripheral:(id)arg2;
- (void)_sendDelayedWrites;
- (void)loadFailedProperties;
- (void)loadRequiredProperties;
- (void)loadBasicProperties;
- (void)reload;
- (void)loadProperties:(int)arg1 forPeripheral:(id)arg2 withRetryPeriod:(float)arg3;
- (void)reloadPropertiesForPeripheral:(id)arg1 withLoadCount:(id)arg2;
- (void)setNotify:(BOOL)arg1 forPeripheral:(id)arg2;
- (id)peripheral:(id)arg1 characteristicForProperty:(int)arg2;
- (int)peripheral:(id)arg1 propertyForCharacteristic:(id)arg2;
- (id)programs;
- (BOOL)isConnected;
- (BOOL)rightAvailable;
- (BOOL)leftAvailable;
- (void)mateWithDevice:(id)arg1;
- (BOOL)didLoadRequiredProperties;
- (BOOL)didLoadBasicProperties;
- (BOOL)peripheral:(id)arg1 didLoadProperty:(int)arg2;
- (id)rssi;
- (BOOL)containsPeripheralWithUUID:(id)arg1;
- (void)connectionDidChange;
- (void)disconnect;
- (void)connect;
- (void)dealloc;
- (id)initWithPersistentRepresentation:(id)arg1;
- (id)initWithPeripheral:(id)arg1;
- (void)_init;

@end
