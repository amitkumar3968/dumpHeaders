/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol SUManagerServerInterface
- (void)setType:(int)arg1 forClient:(id)arg2 withResult:(id)arg3;
- (void)installUpdate:(id)arg1;
- (void)isUpdateReadyForInstallation:(id)arg1;
- (void)download:(id)arg1;
- (void)updateDownloadMetadata:(id)arg1 withResult:(id)arg2;
- (void)resumeDownload:(id)arg1;
- (void)pauseDownload:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)startDownloadWithMetadata:(id)arg1 withResult:(id)arg2;
- (void)startDownload:(id)arg1;
- (void)isDownloading:(id)arg1;
- (void)scanForUpdates:(id)arg1 withResult:(id)arg2;
- (void)isScanning:(id)arg1;
@end

