/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStore/ISDialogOperation.h>

@interface ISRetryDialogOperation : ISDialogOperation
{
    BOOL _shouldRetry;
}

+ (id)operationWithTitle:(id)arg1 message:(id)arg2;
@property BOOL shouldRetry; // @synthesize shouldRetry=_shouldRetry;
- (void)handleButtonSelected:(int)arg1 withResponseDictionary:(id)arg2;

@end

