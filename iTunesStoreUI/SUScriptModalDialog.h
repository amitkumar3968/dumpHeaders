/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ISDialog, UIAlertView;

@interface SUScriptModalDialog : NSObject
{
    UIAlertView *_alert;
    int _buttonIndex;
    ISDialog *_dialog;
}

+ (id)titleForURL:(id)arg1;
- (id)_copyResponseByRunningModal;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)copyResponseByRunningModal;
- (void)dealloc;
- (id)initWithDialog:(id)arg1;

@end

