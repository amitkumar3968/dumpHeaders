/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <WebCore/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement
{
}

@property(readonly) NSURL *absoluteLinkURL;
@property(readonly) NSString *search;
@property(readonly) NSString *protocol;
@property(readonly) NSString *port;
@property(readonly) NSString *pathname;
@property(readonly) NSString *hostname;
@property(readonly) NSString *host;
@property(readonly) NSString *hashName;
@property(copy) NSString *accessKey;
@property(copy) NSString *target;
@property(copy) NSString *shape;
- (void)setPing:(id)arg1;
- (id)ping;
@property BOOL noHref;
@property(copy) NSString *href;
@property(copy) NSString *coords;
@property(copy) NSString *alt;
- (id)absoluteQuadsWithOwner:(id)arg1;
- (id)boundingBoxesWithOwner:(id)arg1;
- (struct _WKQuad)absoluteQuadWithOwner:(id)arg1;
- (struct CGRect)boundingBoxWithOwner:(id)arg1;

@end

