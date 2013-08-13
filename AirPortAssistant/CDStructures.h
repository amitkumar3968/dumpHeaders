/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct AssistantCallbackContext {
    struct AssistantContext *_field1;
    int _field2;
    struct __CFDictionary *_field3;
    int _field4;
    id _field5;
    id _field6;
    struct _opaque_pthread_mutex_t {
        long _field1;
        char _field2[40];
    } _field7;
    void *_field8;
};

struct AssistantContext;

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int ethernetPortCount;
    unsigned int productID;
    unsigned int productFamily;
    int deviceKind;
} CDStruct_85ec20a5;

typedef struct {
    struct CGPoint _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
} CDStruct_95077174;

