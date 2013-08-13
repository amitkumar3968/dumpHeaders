/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ICCameraDeviceDelegate.h"
#import "ICDeviceDelegate.h"

@class ICCameraDevice, NSMutableArray, NSMutableDictionary, NSString, PLCameraImportQueue, PLImportFileManager, PLMutableCameraImportQueue;

@interface PLCameraImporter : NSObject <ICDeviceDelegate, ICCameraDeviceDelegate>
{
    id _delegate;
    NSMutableDictionary *_itemsMapping;
    NSMutableArray *_items;
    PLMutableCameraImportQueue *_thumbnailQueue;
    PLCameraImportQueue *_downloadQueue;
    PLCameraImportQueue *_importQueue;
    PLCameraImportQueue *_deleteQueue;
    NSMutableArray *_orphanItems;
    NSMutableArray *_coalescedDeletedItems;
    BOOL _importInProgress;
    NSMutableDictionary *_parentFolderMapping;
    BOOL _autosplitEvents;
    int _eventSplitGranularity;
    ICCameraDevice *_camera;
    PLImportFileManager *_importFileManager;
    BOOL _stopAfterNextItemImport;
    BOOL _importItemInProgress;
    NSString *importSessionIdentifier;
}

@property(retain, nonatomic) ICCameraDevice *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableDictionary *itemsMapping; // @synthesize itemsMapping=_itemsMapping;
@property(nonatomic) id <PLCameraImporterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *importSessionIdentifier; // @synthesize importSessionIdentifier;
- (void)cameraDevice:(id)arg1 didReceiveMetadata:(id)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didReceiveThumbnail:(struct CGImage *)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2;
- (void)_coalescedRemoveImportItems;
- (void)cameraDevice:(id)arg1 didAddItems:(id)arg2;
- (void)device:(id)arg1 didEncounterError:(id)arg2;
- (void)device:(id)arg1 didCloseSessionWithError:(id)arg2;
- (void)deviceDidBecomeReady:(id)arg1;
- (void)device:(id)arg1 didOpenSessionWithError:(id)arg2;
- (void)didRemoveDevice:(id)arg1;
- (void)_deleteImportItemsFromDiskInBackground:(id)arg1;
- (void)_removeImportItemsAtPathsInBackground:(id)arg1;
- (void)_deleteImportItemFromDisk:(id)arg1;
- (void)_didFinishDeletingItems:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)_deleteImportItems:(id)arg1;
- (void)stopImport;
- (void)_stopImport;
- (void)_didFinishImportingItems:(id)arg1;
- (void)importItems:(id)arg1;
- (void)didReceiveImportNotification:(id)arg1;
- (void)_photoLibraryFinishedImportForPhoto:(id)arg1 atPath:(id)arg2 error:(id)arg3;
- (void)didImportImportItem:(id)arg1 error:(id)arg2;
- (void)importImportItem:(id)arg1;
- (void)_downloadImportItems:(id)arg1;
- (void)_clearImportItemsForDownload:(id)arg1;
- (void)_separateItems:(id)arg1 intoEventsWithGranularity:(int)arg2;
- (unsigned long long)approximateBytesRequiredToImportItem:(id)arg1;
- (void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void *)arg4;
- (void)didReceiveThumbnail:(struct CGImage *)arg1 forCameraFile:(id)arg2 error:(id)arg3;
- (void)didReceiveThumbnail:(struct CGImage *)arg1 forImportItem:(id)arg2 error:(id)arg3;
- (void)readThumbnailsForImportItems:(id)arg1;
- (void)didReceiveMetadata:(id)arg1 forCameraFile:(id)arg2 error:(id)arg3;
- (void)readMetadataForImportItems:(id)arg1;
- (void)camaraDidEnumerateContents;
- (void)readImportItems;
- (id)importItemForCameraFile:(id)arg1;
- (void)removeImportItemsForCameraFiles:(id)arg1;
- (void)addImportItemsFromCameraFiles:(id)arg1;
- (void)_addImportItemFromCameraFile:(id)arg1;
- (id)allImportItems;
- (BOOL)isImporting;
- (BOOL)deviceIsLocked;
- (void)cameraDidError:(id)arg1;
- (unsigned int)contentPercentCompleted;
- (unsigned int)estimatedNumberOfItems;
- (void)ejectCamera;
- (id)cameraKind;
- (id)cameraName;
- (void)didDisconnectFromCamera:(id)arg1 error:(id)arg2;
- (void)didConnectToCamera:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 delegate:(id)arg2;

@end

