/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol GQHXMLOutput <NSObject>
- (struct __CFData *)createProgressiveHtml;
- (struct __CFData *)createHtmlWithCss:(struct __CFString *)arg1;
- (struct __CFData *)createHtml;
- (void)addCharRef:(const char *)arg1;
- (void)addXmlCharContent:(const char *)arg1;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)endElementWithExpectedName:(const char *)arg1;
- (void)endElement;
- (void)startElement:(const char *)arg1;
@end

