/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MZAlertDialog : NSObject
{
    NSString *_title;
    NSString *_message;
    NSString *_cancelButtonTitle;
    id _completionHandler;
    NSString *_acceptButtonTitle;
}

@property(copy, nonatomic) NSString *acceptButtonTitle; // @synthesize acceptButtonTitle=_acceptButtonTitle;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_runAsCFUserNotificationDisplayAlert;
- (BOOL)_runAsUIAlertView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4;

@end

