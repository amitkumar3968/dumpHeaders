/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_UIRemoteViewController.h"

#import "CKSMSComposeRemoteViewControllerDelegate.h"

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate>
{
    id <CKSMSComposeRemoteViewControllerDelegate> _delegate;
}

+ (id)requestViewControllerWithConnectionHandler:(id)arg1;
@property(nonatomic) id <CKSMSComposeRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerDataInserted;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)dealloc;

@end
