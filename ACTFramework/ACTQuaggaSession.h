/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ACQuaggaSessionDelegateACT.h"

@class ACQuaggaSessionACT, NSObject<ACTQuaggaSessionDelegate>;

@interface ACTQuaggaSession : NSObject <ACQuaggaSessionDelegateACT>
{
    ACQuaggaSessionACT *_brain;
    NSObject<ACTQuaggaSessionDelegate> *delegate;
}

@property NSObject<ACTQuaggaSessionDelegate> *delegate; // @synthesize delegate;
- (void)ACTsession:(id)arg1 didRecognizeACT:(id)arg2 frameInfo:(id)arg3;
- (void)processCGImageRef:(struct CGImage *)arg1 interestRect:(struct CGRect)arg2 orientation:(int)arg3;
- (void)processCVPixelBuffer:(struct __CVBuffer *)arg1 interestRect:(struct CGRect)arg2 orientation:(int)arg3;
- (id)supportedCobraTypes;
- (void)setCobraTypesToDecode:(id)arg1;
- (id)cobraTypesToDecode;
- (id)initWithOptions:(id)arg1;
- (void)dealloc;

@end

