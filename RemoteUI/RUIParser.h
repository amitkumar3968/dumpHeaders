/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSURL, NSXMLParser, RUIObjectModel;

@interface RUIParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;
    RUIObjectModel *_uiObjectModel;
    NSMutableArray *_pages;
    NSMutableArray *_currentPageStack;
    int _actionSignal;
    int _parserState;
    NSURL *_baseURL;
    BOOL _succeeded;
}

@property(readonly, nonatomic) BOOL succeeded; // @synthesize succeeded=_succeeded;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)_addSectionWithAttributes:(id)arg1;
- (void)_addNavigationBarWithAttributes:(id)arg1;
- (id)_lastRow;
- (id)_lastPageCreateIfNeeded;
- (void)_newRowWithAttributeDict:(id)arg1;
- (id)_createNewPage;
- (id)_createSupplementalPageNamed:(id)arg1;
- (int)actionSignal;
- (id)uiObjectModel;
- (void)dealloc;
- (id)initWithXML:(id)arg1;
- (id)initWithXML:(id)arg1 baseURL:(id)arg2;

@end

