/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "EKEventEditViewDelegate.h"

@class UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface DDLinksEventController : UIViewController <EKEventEditViewDelegate>
{
    struct __DDResult *_result;
    UILabel *_label;
    UIButton *_button;
}

- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)buttonClicked:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (id)nibBundle;
- (id)nibName;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidLoad;
- (id)initWithResult:(struct __DDResult *)arg1;

@end

