/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIColor;

@interface CKUIBehavior : NSObject
{
}

+ (id)sharedBehaviors;
@property(readonly, nonatomic) NSString *transcriptDefaultPNG;
@property(readonly, nonatomic) NSString *conversationListDefaultPNG;
- (unsigned int)conversationCacheSize;
- (id)dimmingViewBackgroundColor;
- (BOOL)dimsTranscriptWhileEditingConversations;
- (BOOL)shouldDimTranscript;
- (struct UIEdgeInsets)balloonImageCapInsets;
- (struct CGSize)balloonImageSize;
- (id)highlightedBalloonTextShadowColor;
- (id)blueBalloonTextShadowColor;
- (id)greenBalloonTextShadowColor;
- (id)grayBalloonTextShadowColor;
- (struct CGSize)balloonTextShadowOffset;
- (float)balloonTextLineHeight;
- (float)balloonTextFontSize;
- (id)balloonTextFont;
- (id)timestampTextShadowColor;
- (id)serviceTextShadowColor;
- (id)messageStatusTextShadowColor;
- (id)timestampTextColor;
- (id)serviceTextColor;
- (id)messageStatusSecondaryTextColor;
- (id)messageStatusPrimaryTextColor;
- (float)timestampTextSize;
- (float)serviceTextSize;
- (float)messageStatusTextSize;
- (id)etchedSeparatorHighlightColor;
- (id)etchedSeparatorShadowColor;
- (float)spaceBetweenEditToolbarButtons;
- (BOOL)centersEditToolbarButtons;
@property(readonly, nonatomic) struct CGSize toolbarLabelsShadowOffset;
@property(readonly, nonatomic) UIColor *toolbarLabelsShadowColor;
@property(readonly, nonatomic) UIColor *toolbarLabelsTextColor;
@property(readonly, nonatomic) float bubbleIndentationDuringEditMode;
@property(readonly, nonatomic) float contactPhotoInsideMargin;
@property(readonly, nonatomic) float contactPhotoOutsideMargin;
@property(readonly, nonatomic) float contactPhotoCornerRadius;
@property(readonly, nonatomic) float contactPhotoBorderThickness;
@property(readonly, nonatomic) struct CGSize contactPhotoSize;
@property(readonly, nonatomic) BOOL shouldShowContactPhotos;
- (struct CGSize)videoPreviewBalloonImageMaxSize;
- (struct CGSize)previewBalloonImageMaxSize;
- (struct CGSize)previewThumbnailMaxSize;
- (struct UIEdgeInsets)_mysteryPreviewImagePadding;
- (float)attachmentBalloonHeight;
- (float)paddingAfterLastTranscriptRow;
- (float)paddingBeforeFirstTranscriptRow;
- (float)messageStatusTextOutsideMargin;
- (float)messageStatusTextOutsideMarginFollowingMessageWithContactImage;
- (float)timestampHeight;
- (float)serviceNameHeight;
- (float)messageStatusHeight;
- (float)messageStatusHeightFollowingMessageWithContactImage;
- (float)bubbleMarginBottom;
- (float)bubbleMarginTop;
- (float)typingIndicatorMargin;
- (float)bubbleMarginOutside;
- (float)senderMarginBottom;
- (float)senderMarginBottomPrecedingMessageOfContactImageHeight;
- (float)senderMarginTop;
- (float)senderMarginLeft;
- (float)senderMarginLeftWithContactImage;
- (float)recipientOverlaySingleLineContentHeight;
- (BOOL)shouldRefreshAlternateAddressesSheet;
- (BOOL)shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
- (float)collapsedRecipientListLeftPadding;
- (BOOL)shouldShowDisclosureChevronInRecipientAtoms;
- (BOOL)shouldHomogenizeAtomsForPreferredService;
- (float)conversationListRowHeight;
@property(readonly, nonatomic) float sendButtonHorizontalPadding;
@property(readonly, nonatomic) float entryFieldToSendButtonSpacing;
@property(readonly, nonatomic) float entryFieldToPhotoButtonSpacing;
@property(readonly, nonatomic) float entryFieldRightMargin;
@property(readonly, nonatomic) float entryFieldLeftMargin;
@property(readonly, nonatomic) float entryFieldBottomMargin;
@property(readonly, nonatomic) struct CGRect entryFieldBackgroundStretchSpecs;
@property(readonly, nonatomic) struct CGRect inputFieldCoverStretchSpecs;
@property(readonly, nonatomic) BOOL shouldRoundBottomLeftCornerOfEntryField;
@property(readonly, nonatomic) BOOL floatingEntryFieldEnabled; // @dynamic floatingEntryFieldEnabled;
@property(readonly, nonatomic) BOOL usesFullWidthMessageEntryViewWhenKeyboardIsUndocked;
@property(readonly, nonatomic) BOOL presentForwardingUIModally;
@property(readonly, nonatomic) BOOL usesPersistentConversationSelection;
@property(readonly, nonatomic) BOOL selectNewConversationOnDeletion;
@property(readonly, nonatomic) BOOL selectNewConversationOnStateRestore;
@property(readonly, nonatomic) BOOL showPendingInConversationList;
- (float)updateTranscriptInsetsAnimationDuration;
- (float)editingTransitionAnimationDuration;
- (float)resizeMessageEntryViewAnimationDuration;
- (float)throwMessageAnimationDuration;
- (float)scrollInNewMessageAnimationDuration;
- (float)fadeInBubbleAnimationDuration;
- (float)_transcriptAnimationScaleFactor;
@property(readonly, nonatomic) BOOL shouldSetConversationKeyboardOnSearchBeginEnd;
@property(readonly, nonatomic) float scrollToHideKeyboardGestureThreshold;
@property(readonly, nonatomic) float escapeVelocityForHidingKeyboard;
@property(readonly, nonatomic) float velocityThresholdForHidingKeyboard;
@property(readonly, nonatomic) BOOL usesVelocityDirectionToDetermineWhetherToHideKeyboard;
@property(readonly, nonatomic) BOOL usesDistanceToDetermineWhetherToHideKeyboard;
@property(readonly, nonatomic) BOOL usesScrollGestureToHideKeyboard;
@property(readonly, nonatomic) BOOL returnKeySendsMessage;
@property(readonly, nonatomic) BOOL shouldShowSendProgressIndicator;
@property(readonly, nonatomic) BOOL madridRegistrationShowsSplashScreenOnSignin;
@property(readonly, nonatomic) BOOL madridRegistrationShowsSplashScreen;
@property(readonly, nonatomic) int madridRegistrationAppearanceStyle;
- (BOOL)isSupportedInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) unsigned int defaultConversationSummaryMessageCount;
@property(readonly, nonatomic) unsigned int defaultConversationViewingMessageCount;
@property(readonly, nonatomic) BOOL presentsQuickLookController;
@property(readonly, nonatomic) BOOL usesTexturedTranscriptBackground;
@property(readonly, nonatomic) BOOL showTranscriptButtonsInNavigationBar;
@property(readonly, nonatomic) BOOL showsDisclosureButtonForIncomingMedia;
@property(readonly, nonatomic) BOOL usesPopovers;
@property(readonly, nonatomic) float leftSplitPaneWidth;
@property(readonly, nonatomic) BOOL lowClearanceInLandscape;
@property(readonly, nonatomic) BOOL splitViewEnabled; // @dynamic splitViewEnabled;

@end
