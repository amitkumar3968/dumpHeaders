/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "CKTranscriptButtonView.h"

@class UIButton;

@interface CKTranscriptHeaderView : UIView <CKTranscriptButtonView>
{
    id _transcriptButtonDelegate;
    UIButton *_callButton;
    UIButton *_faceTimeButton;
    UIButton *_contactsButton;
    UIButton *_loadMoreButton;
    BOOL _hasContact;
    BOOL _callingAvailable;
    BOOL _faceTimeAvailable;
    BOOL _isGroupMessage;
    BOOL _hasMoreMessages;
    BOOL _disableFirstButtonRow;
    BOOL _isPhoneTranscript;
}

+ (float)defaultHeight;
@property(nonatomic) BOOL disableFirstButtonRow; // @synthesize disableFirstButtonRow=_disableFirstButtonRow;
@property(nonatomic) BOOL hasMoreMessages; // @synthesize hasMoreMessages=_hasMoreMessages;
@property(readonly, nonatomic) BOOL isGroupMessage; // @synthesize isGroupMessage=_isGroupMessage;
@property(nonatomic, getter=isCallingAvailable) BOOL callingAvailable; // @synthesize callingAvailable=_callingAvailable;
@property(nonatomic, getter=isFaceTimeAvailable) BOOL faceTimeAvailable; // @synthesize faceTimeAvailable=_faceTimeAvailable;
@property(nonatomic) BOOL hasContact; // @synthesize hasContact=_hasContact;
@property(nonatomic) id <CKTranscriptButtonViewDelegate> transcriptButtonDelegate; // @synthesize transcriptButtonDelegate=_transcriptButtonDelegate;
- (void)_buttonClicked:(id)arg1;
- (void)setButtonsEnabled:(BOOL)arg1;
- (struct CGRect)frameForButton:(short)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isPhoneTranscript:(BOOL)arg2 displayLoadPrevious:(BOOL)arg3 isGroupMessage:(BOOL)arg4;
- (void)_updateCallButton;

@end

