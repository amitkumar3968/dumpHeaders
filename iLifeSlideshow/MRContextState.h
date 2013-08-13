/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MRContextState : NSObject
{
    float modelViewMatrix[16];
    float textureMatrix[4][16];
    float normal[3];
    unsigned int currentVBO;
    int currentVBOStride;
    int inSpriteCoordinatesStride;
    int textureCoordinatesStride[4];
    const float *vertex2DPointer;
    const float *vertex3DPointer;
    const float *colorsPointer;
    const float *normalsPointer;
    float *textureCoordinatesPointer[4];
    const float *inSpriteCoordinatesPointer;
    BOOL vertexArrayIsEnabled;
    BOOL foreColorArrayIsEnabled;
    BOOL normalArrayIsEnabled;
    char textureCoordinatesArrayIsEnabled[4];
    BOOL inSpriteCoordinatesArrayIsEnabled;
    float foreColor[4];
    float backColor[4];
    unsigned int textureTargetOnUnit[4];
    unsigned int textureNameOnUnit[4];
    double textureTimestampOnUnit[4];
    BOOL blendingIsEnabled;
    int blendingType;
    BOOL cullingIsEnabled;
    BOOL cullFrontfacing;
    BOOL depthTestIsEnabled;
    NSString *_shaderID;
    NSDictionary *_shaderArguments;
    NSMutableDictionary *_vertexAttributes;
    NSMutableDictionary *_temporaryUniforms;
}

@property(readonly) NSMutableDictionary *temporaryUniforms; // @synthesize temporaryUniforms=_temporaryUniforms;
@property(readonly) NSMutableDictionary *vertexAttributes; // @synthesize vertexAttributes=_vertexAttributes;
@property(copy) NSDictionary *shaderArguments; // @synthesize shaderArguments=_shaderArguments;
@property(copy) NSString *shaderID; // @synthesize shaderID=_shaderID;
- (void)dealloc;
- (id)init;

@end

