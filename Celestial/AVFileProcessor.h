/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface AVFileProcessor : NSObject
{
    float _percentComplete;
}

+ (id)fileProcessor;
- (id)sinfInfoFromFilePath:(id)arg1;
- (id)sinfsFromFilePath:(id)arg1;
- (id)rentalInfo:(id)arg1;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3 progressBlock:(id)arg4;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(id)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2;

@end

