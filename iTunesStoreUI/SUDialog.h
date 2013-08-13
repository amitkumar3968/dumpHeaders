/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class ISDialog, UIAlertView;

@interface SUDialog : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_alertView;
    id _completionBlock;
    ISDialog *_dialog;
}

@property(readonly, nonatomic) ISDialog *dialog; // @synthesize dialog=_dialog;
- (void)_completeWithButtonIndex:(int)arg1;
- (id)_alertView;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showWithCompletionBlock:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (void)dealloc;
- (id)initWithDialog:(id)arg1;

@end

