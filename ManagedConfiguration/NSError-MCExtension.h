/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSError.h"

@interface NSError (MCExtension)
+ (id)MCErrorWithDomain:(id)arg1 code:(int)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;
+ (id)MCErrorWithDomain:(id)arg1 code:(int)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;
+ (id)MCErrorWithDomain:(id)arg1 code:(int)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;
+ (id)MCErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 errorType:(id)arg4;
- (id)MCErrorType;
- (id)MCUSEnglishSuggestion;
- (id)MCUSEnglishDescription;
- (BOOL)MCContainsErrorDomain:(id)arg1 code:(int)arg2;
- (id)MCMakePrimaryError;
- (id)MCFindPrimaryError;
- (id)MCVerboseDescription;
@end

