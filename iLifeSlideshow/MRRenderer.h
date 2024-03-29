/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CADisplayLink, MCMontage, MRContext, MRLayerParallelizer, MRRendererInternal, NSDictionary;

@interface MRRenderer : NSObject
{
    MRLayerParallelizer *mTopMRLayer;
    struct CGSize mSize;
    MRRendererInternal *mInternal;
    id <MREditingDelegate> mEditingDelegate;
    id <MRFeatureDelegate> mFeatureDelegate;
    NSDictionary *mDescriptionsForRandomTransitionPresetIDs;
    CADisplayLink *mDisplayLink;
    double mDisplayLinkTimestamp;
    NSDictionary *mDescriptionsForRandomTransitionPresetIDs;
    MCMontage *mMontage;
    int mMode;
    int mOrientation;
    BOOL mIsEditing;
    BOOL mIsPlaying;
    BOOL mPushRendering;
    BOOL mRequestRenderingOnChanges;
    BOOL mDisplaysFPS;
    BOOL mDisplaysPlayingIDs;
    BOOL mDisplaysIsPreloadingImages;
    id <MZMediaManagement> mAssetManagementDelegate;
    id <MRRenderingDelegate> mRenderingDelegate;
    float mVolume;
    double mTimeQuantum;
    int _frameBufferStatus;
    NSDictionary *mParameters;
    BOOL mIsCleanedUp;
    BOOL _asynchronousOperationsAreSuspended;
}

+ (BOOL)isDiskImageCacheEnabled;
+ (void)enableDiskImageCache;
+ (float)textScaleForResolution:(struct CGSize)arg1;
@property(setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended; // @synthesize asynchronousOperationsAreSuspended=_asynchronousOperationsAreSuspended;
@property(readonly) BOOL isCleanedUp; // @synthesize isCleanedUp=mIsCleanedUp;
@property(readonly) NSDictionary *parameters; // @synthesize parameters=mParameters;
@property int frameBufferStatus; // @synthesize frameBufferStatus=_frameBufferStatus;
@property(nonatomic) double timeQuantum; // @synthesize timeQuantum=mTimeQuantum;
@property(nonatomic) float volume; // @synthesize volume=mVolume;
@property(retain) id <MREditingDelegate> editingDelegate; // @synthesize editingDelegate=mEditingDelegate;
@property(retain) id <MRRenderingDelegate> renderingDelegate; // @synthesize renderingDelegate=mRenderingDelegate;
@property(retain) id <MRFeatureDelegate> featureDelegate; // @synthesize featureDelegate=mFeatureDelegate;
@property(retain, nonatomic) id <MZMediaManagement> assetManagementDelegate; // @synthesize assetManagementDelegate=mAssetManagementDelegate;
@property(nonatomic) BOOL displaysIsPreloadingImages; // @synthesize displaysIsPreloadingImages=mDisplaysIsPreloadingImages;
@property(nonatomic) BOOL displaysPlayingIDs; // @synthesize displaysPlayingIDs=mDisplaysPlayingIDs;
@property(nonatomic) BOOL displaysFPS; // @synthesize displaysFPS=mDisplaysFPS;
@property(nonatomic) BOOL requestRenderingOnChanges; // @synthesize requestRenderingOnChanges=mRequestRenderingOnChanges;
@property(nonatomic) BOOL pushRendering; // @synthesize pushRendering=mPushRendering;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=mIsEditing;
@property(nonatomic) int mode; // @synthesize mode=mMode;
@property(nonatomic) struct CGSize size; // @synthesize size=mSize;
@property(retain, nonatomic) MCMontage *montage; // @synthesize montage=mMontage;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(float)arg1 andOrientation:(int)arg2 withDuration:(double)arg3;
- (void)addIDToDisplay:(id)arg1:(id)arg2;
- (void)imagePreloadingEnded;
- (void)imagePreloadingBegan;
- (void)stall;
- (void)effect:(id)arg1 requestedNumberOfSlides:(unsigned int)arg2 firstSlideIndexStillNeeded:(unsigned int)arg3;
- (void)_effectRequestedSlides:(id)arg1;
- (void)nearingEndForSerializer:(id)arg1;
- (void)_nearingEndForSerializer:(id)arg1;
- (void)dumpActiveHierarchy;
- (id)snapshotOfStates:(id)arg1 atSize:(struct CGSize)arg2;
- (void)gotoState:(id)arg1;
- (id)currentState;
- (id)plugForCurrentSublayerInNavigatorForPlug:(id)arg1;
- (id)layerForPlugObjectID:(id)arg1;
- (id)layerForPlug:(id)arg1;
- (void)transitionToPreviousPlugInContainerOfPlug:(id)arg1;
- (void)transitionToNextPlugInContainerOfPlug:(id)arg1;
@property(readonly) BOOL isOffscreen;
@property BOOL usesNewImageManager;
@property(nonatomic) unsigned char currentLayoutIndex;
@property(nonatomic) int orientation; // @synthesize orientation=mOrientation;
@property(nonatomic) struct CGPoint contextOffset;
- (void)setTemporarySize:(struct CGSize)arg1;
- (void)_syncTimeToOuter;
@property(nonatomic) double time;
- (void)moveNavigatorFromForthToBackHistory:(id)arg1;
- (void)moveNavigatorFromBackToForthHistory:(id)arg1;
- (void)removeNavigatorFromForthHistory:(id)arg1;
- (void)removeNavigatorFromBackHistory:(id)arg1;
- (void)addNavigatorToForthHistory:(id)arg1;
- (void)addNavigatorToBackHistory:(id)arg1;
- (BOOL)canGoForth;
- (BOOL)canGoBack;
- (void)goForth;
- (void)goBack;
- (void)stepBackward;
- (void)stepForward;
- (void)_doSnapshot;
- (void)_renderForScreenBurnTestAtTime:(double)arg1;
- (void)_renderWithPassParameters:(id)arg1;
- (void)_stopRenderTimer;
- (void)_startRenderTimer;
- (void)_renderOnDisplayLink:(id)arg1;
- (void)updateTimeWithDisplayLinkTimestamp:(double)arg1;
- (void)_renderThreadMain;
- (void)warmupVideo:(BOOL)arg1;
- (void)warmupAudio:(BOOL)arg1;
- (BOOL)requestRenderingWithin:(double)arg1;
- (void)requestRendering:(BOOL)arg1;
- (void)pauseWhenStill;
- (void)_resume;
- (void)_pause;
- (void)_syncIsPlayingToOuter;
- (void)resume;
- (void)pause;
@property(readonly) BOOL isPlaying; // @synthesize isPlaying=mIsPlaying;
@property BOOL slaveFrameMode;
- (void)unlockRendering;
- (void)lockRendering;
- (void)setEAGLContext:(id)arg1;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (void)_displayIsPreloadingImages;
- (void)_displayPlayingIDs;
- (void)_displayFPS:(double)arg1 actuallyDisplay:(BOOL)arg2;
- (double)_unalteredTime;
- (void)_setTime:(double)arg1 isResyncing:(BOOL)arg2;
- (void)removeAudioPlayer:(id)arg1;
- (void)addAudioPlayer:(id)arg1;
- (void)processAudioPlayers;
- (void)setUseCGLFlushDrawableWorkaround:(BOOL)arg1;
@property BOOL hideTextWhileEditing;
@property BOOL screenBurnTest;
@property(retain) id <MRAsynchronousOperationsDelegate> asynchronousOperationsDelegate;
@property(retain) id <MRLiveSlideshowDelegate> liveSlideshowDelegate;
- (void)setMasterStartTime:(double)arg1 andDuration:(double)arg2 mode:(int)arg3;
- (void)setMasterStartTime:(double)arg1 andDuration:(double)arg2 loop:(BOOL)arg3;
- (struct CGImage *)currentFrameAsCGImage;
- (struct CGImage *)copyCGSnapshotAtTime:(double)arg1 andSize:(struct CGSize)arg2;
- (struct CGImage *)snapshotAsCGImageForTime:(double)arg1 andSize:(struct CGSize)arg2;
- (id)layerAtPath:(id)arg1 fromLayer:(id)arg2;
- (void)undimAllLayers;
- (void)dimLayersExceptForPathTo:(id)arg1;
- (void)_undimAllLayersInLayer:(id)arg1;
- (void)_dimLayersExceptForPathTo:(id)arg1;
- (id)selectedLayers;
- (void)deselectAllLayers;
- (void)deselectLayer:(id)arg1;
- (void)selectLayer:(id)arg1;
- (void)updateSelectionLayer;
@property(readonly) BOOL isFlipped;
- (void)setFreezeSizeOfImageRequests:(BOOL)arg1;
@property double masterClock;
@property BOOL dontShowDRMUI;
@property(readonly) MRContext *context;
- (void)sendNotification:(id)arg1;
- (void)_sendNotificationMainThread:(id)arg1;
- (id)chooseTransitionIDForRandomTransitionPresetID:(id)arg1;
- (id)actionByEvaluatingConditionalAction:(id)arg1 withStates:(id)arg2;
- (BOOL)sendStandardAction:(id)arg1;
- (void)sendMCAction:(id)arg1 fromSender:(id)arg2 toTarget:(id)arg3;
- (void)sendMCAction:(id)arg1 fromSender:(id)arg2;
- (void)doAction:(id)arg1;
- (void)_doActions;
- (double)_doAction:(id)arg1;
- (id)actionHitAtPoint:(struct CGPoint)arg1 layer:(id *)arg2;
- (id)layerHitAtPoint:(struct CGPoint)arg1 onlyIfHitElement:(BOOL)arg2 localPoint:(struct CGPoint *)arg3;
- (void)touchesCancelled:(id)arg1;
- (BOOL)touchesEnded:(id)arg1;
- (void)touchesMoved:(id)arg1;
- (void)touchesBegan:(id)arg1;
- (void)_doLayerTrackingAtLocation:(struct CGPoint)arg1;
- (id)_computeMatrixChainForLayer:(id)arg1;
- (void)_cleanupGestureRecognizers;
- (void)endTextEditing:(BOOL)arg1;
- (BOOL)beginTextEditingOfElement:(id)arg1 inPlug:(id)arg2 callDelegate:(BOOL)arg3;
- (BOOL)beginTextEditingOfElement:(id)arg1 inLayer:(id)arg2 callDelegate:(BOOL)arg3;
- (int)_maxLinesForCurrentEditingTextElement;
- (struct CGSize)_maxSizeForCurrentEditingTextElement;
- (BOOL)getVerticesCoordinatesForCurrentlyEditedTextElement:(struct CGPoint (*)[4])arg1;

@end

