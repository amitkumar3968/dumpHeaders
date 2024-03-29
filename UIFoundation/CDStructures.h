/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@class NSMutableParagraphStyle, UIFont;

#pragma mark Named Structures

struct CGAffineTransform {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

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

struct RTFColor;

struct RTFFont;

struct RTFStyle;

struct _NSAttributeDictionaryElement {
    unsigned int hash;
    id key;
    id value;
};

struct _NSAttributeInfo {
    unsigned int toUniCharEncoding;
    unsigned int codePageEncoding;
    UIFont *font;
    float fontSize;
    float kern;
    NSMutableParagraphStyle *paraStyle;
    unsigned int bold:1;
    unsigned int italic:1;
    unsigned int fontIsValid:1;
    unsigned int paraStyleIsValid:1;
    unsigned int kernIsValid:1;
    unsigned int attributesSameAsBefore:1;
    unsigned int multiByteEncoding:1;
    unsigned int unicodeAlternativeLength:3;
    unsigned int tabStopType:4;
    unsigned int curAttributesNeedsCopying:1;
    unsigned int paraStyleNeedsCopying:1;
    unsigned int hasWritingDirectionAttribute:1;
    unsigned int :15;
};

struct _NSDrawingParameters {
    id _field1;
    id _field2;
};

struct _NSGlyphNode;

struct _NSGlyphTree {
    struct _NSGlyphNode *rootNode;
    struct _NSGlyphNode *curNode;
    unsigned int curCharIndex;
    unsigned int curGlyphIndex;
};

struct _NSLayoutNode;

struct _NSLayoutTree {
    struct _NSLayoutNode *rootNode;
    struct _NSLayoutNode *curNode;
    unsigned int curGlyphIndex;
    float curLongitudinalOrigin;
    struct CGRect extraLineFragmentRect;
    struct CGRect extraLineFragmentUsedRect;
    unsigned int glyphsPerLineEstimate;
    float offsetPerLineEstimate;
};

struct _NSRTFPriv {
    void *reader;
    char *rtfInput;
    unsigned int rtfInputLength;
    unsigned int rtfInputLocation;
    unsigned int rtfHeaderEndLocation;
    int pushedChar;
    int pushedClass;
    int pushedMajor;
    int pushedMinor;
    int pushedParam;
    char pushedTextBuf[1024];
    int prevChar;
    int bumpLine;
    struct RTFFont *fontList;
    struct RTFColor *colorList;
    struct RTFStyle *styleList;
    char *inputName;
    char *outputName;
    void *ccb[5];
    void *readHook;
    void *msgProc;
    void *panicProc;
    char textBuf[1024];
    int textLen;
    int class;
    int major;
    int minor;
    int param;
    int lineNum;
    int linePos;
    int groupState;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _NSRunBlock {
    unsigned int _field1;
    unsigned char _field2[0];
};

struct _NSStoredContainerUsage {
    struct CGRect _field1;
    struct CGRect _field2;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :29;
    } _field3;
    struct CGRect _field4;
    struct _NSRange _field5;
};

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _hasNonNominalGlyph:1;
    unsigned int _hasPositionalStake:1;
    unsigned int _hasBidiRun:1;
    unsigned int _isEllipsisStorage:1;
    unsigned int _hasNonNominalStringIndexes:1;
    unsigned int _isUnordered:1;
    unsigned int _hasTotalAbsorbedCount:1;
    unsigned int _reserved:25;
} CDStruct_9f69489a;

typedef struct {
    int location;
    int length;
} CDStruct_dff5684f;

typedef struct {
    id _field1;
    id _field2;
    int _field3;
    int _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    struct CGRect _field9;
    CDStruct_9f69489a _field10;
} CDStruct_0de91d73;

typedef struct {
    struct *_field1;
    struct _NSRange _field2;
    struct _NSRange _field3;
    float _field4;
    float _field5;
    void *_field6;
    void *_field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    struct CGRect _field14;
    struct CGRect _field15;
    struct _NSRange _field16;
    id _field17;
    float _field18;
    int _field19;
    struct {
        unsigned int :4;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :4;
        unsigned int :4;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :11;
    } _field20;
    void *_field21[0];
} CDStruct_88fe8ffc;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        float _field1;
        float _field2;
        float _field3;
        int _field4;
    } _field1;
    struct {
        struct CGRect _field1;
    } _field2;
} CDUnion_a04c68c6;

