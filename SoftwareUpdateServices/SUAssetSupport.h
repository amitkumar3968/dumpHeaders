/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface SUAssetSupport : NSObject
{
}

+ (id)assetDownloadOptionsFromMetadata:(id)arg1 priority:(int)arg2;
+ (id)assetDownloadOptionsForDocumentation;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)arg1;
+ (id)localURLForAsset:(struct __MobileAsset *)arg1;
+ (id)_createPossibleDocumentationAssetsFromSUAssetState:(id)arg1;
+ (struct __MobileAsset *)createUpdateAssetUsingProductType:(id)arg1 productBuild:(id)arg2 productVersion:(id)arg3 releaseType:(id)arg4;
+ (struct __MobileAsset *)createDefaultUpdateAsset;
+ (void)purgeSoftwareUpdateAsset:(struct __MobileAsset *)arg1 includingDocumentation:(BOOL)arg2;
+ (void)cleanupAsset:(struct __MobileAsset *)arg1 withCompletion:(id)arg2;
+ (void)cleanupAsset:(struct __MobileAsset *)arg1;
+ (void)cancelDownloadIfNecessary:(struct __MobileAsset *)arg1;
+ (id)tryCreateDocumentationFromAsset:(struct __MobileAsset *)arg1;
+ (id)createDescriptorFromAsset:(struct __MobileAsset *)arg1 state:(id)arg2 documentationAssetCandidates:(id *)arg3;
+ (id)tryCreateDescriptorFromAsset:(struct __MobileAsset *)arg1 documentationAssetCandidates:(id *)arg2;
+ (id)tryCreateDescriptorFromAsset:(struct __MobileAsset *)arg1;
+ (id)tryCreateDescriptorFromCachedAsset;

@end

