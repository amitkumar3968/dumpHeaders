/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

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

struct FaceCoreAPI {
    void **_field1;
    struct FaceCoreAPIInternal *_field2;
    struct FaceCoreContext *_field3;
    void *_field4;
};

struct FaceCoreAPIInternal;

struct FaceCoreContext;

struct FunctionInterpreter<double> {
    void **_field1;
    struct Parser<double> *_field2;
    struct Parser<double> *_field3;
    struct ParserVariable<double> *_field4;
    int _field5;
};

struct FunctionInterpreter<float> {
    void **_field1;
    struct Parser<float> *_field2;
    struct Parser<float> *_field3;
    struct ParserVariable<float> *_field4;
    int _field5;
};

struct MRLayerRenderingStateOpaque {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13[16];
    float _field14[16];
    float _field15[16];
    char _field16;
    char _field17;
    char _field18;
    char _field19;
    char _field20;
};

struct Parser<double>;

struct Parser<float>;

struct ParserVariable<double>;

struct ParserVariable<float>;

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    Class _field1;
    id _field2;
    id _field3;
    char _field4;
} CDStruct_76c99235;

typedef struct {
    id _field1;
    char _field2;
} CDStruct_02fb8bfc;

typedef struct {
    unsigned char length;
    float v[4];
} CDStruct_d27e73f0;

typedef struct {
    char _field1;
} CDStruct_2920cfb7;

typedef struct {
    int _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    char _field6;
} CDStruct_2a38db39;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    int _field1;
    long _field2;
    long _field3;
} CDStruct_ac6699d7;

