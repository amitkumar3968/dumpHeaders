/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Stocks/XMLHTTPRequest.h>

@class NSArray, NSError, NSMutableDictionary, QuoteParserData;

@interface StockUpdater : XMLHTTPRequest
{
    NSArray *_requestStocks;
    BOOL _ignoreNewRequests;
    BOOL _isComprehensive;
    NSMutableDictionary *_cacheDurationForParts;
    id <StockUpdaterDelegate> _delegate;
    QuoteParserData *_quoteParserData;
    NSError *_lastError;
}

@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) __weak id <StockUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isComprehensive; // @synthesize isComprehensive=_isComprehensive;
@property(retain, nonatomic) NSArray *requestStocks; // @synthesize requestStocks=_requestStocks;
- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)failWithError:(id)arg1;
- (void)didParseData;
- (BOOL)hadError;
- (int)parseData:(id)arg1;
- (void)setCacheTimeInterval:(double)arg1 forPartsTag:(id)arg2;
- (void)_updateWithPartsTag:(id)arg1 forStocks:(id)arg2;
- (id)_symbolTagsForRequestStocks;
- (void)_updateWithPostBody:(id)arg1;
- (void)cancel;
- (id)init;

@end

