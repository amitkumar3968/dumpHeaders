/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <RemoteUI/RUIElement.h>

#import "UIWebViewDelegate.h"

@class NSString, NSURL, UIWebView;

@interface RUIWebView : RUIElement <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSString *_html;
    NSURL *_baseURL;
    id _delegate;
}

@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *html; // @synthesize html=_html;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)dealloc;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)webView;
- (void)setDelegate:(id)arg1;

@end

