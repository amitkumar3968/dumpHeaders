/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLFormElement : DOMHTMLElement
{
}

- (BOOL)checkValidity;
- (void)reset;
- (void)submit;
- (void)setAutocapitalize:(id)arg1;
- (id)autocapitalize;
- (void)setAutocorrect:(BOOL)arg1;
- (BOOL)autocorrect;
@property(readonly) int length;
@property(readonly) DOMHTMLCollection *elements;
@property(copy) NSString *target;
- (void)setNoValidate:(BOOL)arg1;
- (BOOL)noValidate;
@property(copy) NSString *name;
@property(copy) NSString *method;
@property(copy) NSString *encoding;
@property(copy) NSString *enctype;
- (void)setAutocomplete:(id)arg1;
- (id)autocomplete;
@property(copy) NSString *action;
@property(copy) NSString *acceptCharset;
- (int)structuralComplexityContribution;

@end

