/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct BlanSportsDataFrame {
    unsigned char _field1[28];
};

struct IapSimpleRemoteButtonState {
    unsigned int buttonStatus;
};

struct PaceModel {
    float _field1;
    _Bool _field2;
    unsigned char _field3;
    unsigned short _field4;
    _Bool _field5;
    unsigned char _field6;
    unsigned long _field7;
    _Bool _field8;
    unsigned long _field9;
    unsigned long _field10;
    unsigned long _field11;
    unsigned long _field12;
    unsigned long _field13;
    unsigned char _field14;
    unsigned short _field15;
    unsigned long _field16;
    unsigned long _field17;
    float _field18;
    short _field19;
    float _field20;
    short _field21;
    float _field22;
    float _field23;
    float _field24;
    short _field25;
    float _field26;
    short _field27;
    float _field28;
    float _field29;
    unsigned char _field30;
    unsigned char _field31[3];
    unsigned short _field32[7];
    unsigned char _field33;
    _Bool _field34;
    unsigned short _field35;
    unsigned short _field36;
    unsigned short _field37;
    _Bool _field38;
    _Bool _field39;
    unsigned long _field40;
    unsigned long _field41;
    unsigned long _field42;
    unsigned long _field43;
    unsigned long _field44;
    unsigned short _field45;
    _Bool _field46;
    unsigned char _field47[3];
    float _field48;
    short _field49;
    float _field50;
    short _field51;
    float _field52;
    short _field53;
    float _field54;
    short _field55;
    unsigned char _field56;
    unsigned short _field57;
    unsigned char _field58;
};

struct SDARunState {
    unsigned int sdaContactTime256X;
    unsigned int sdaContactTimeDelta256X;
    unsigned int sdaRunStepCnt;
    unsigned int sdaRunStepCntDelta;
    unsigned int sdaRunTstcCnt;
    unsigned int sdaRunTstcCntDelta;
    unsigned int sdaRunContactTimeMin256X;
    unsigned int sdaRunContactTimeMax256X;
};

struct Snapshot;

struct _Vector_impl {
    struct Snapshot *_field1;
    struct Snapshot *_field2;
    struct Snapshot *_field3;
};

struct vector<ISL::IPodSportsWorkout_Run::Snapshot, std::allocator<ISL::IPodSportsWorkout_Run::Snapshot>> {
    struct _Vector_impl _field1;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1[6];
} CDStruct_5cfa2073;

// Template types
typedef struct vector<ISL::IPodSportsWorkout_Run::Snapshot, std::allocator<ISL::IPodSportsWorkout_Run::Snapshot>> {
    struct _Vector_impl _field1;
} vector_ebf5b573;

