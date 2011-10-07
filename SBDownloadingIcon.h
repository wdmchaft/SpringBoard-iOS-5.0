/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBLeafIcon.h"

@class NSMutableArray, NSOperation, NSString, SSDownload, SSDownloadStatus;

@interface SBDownloadingIcon : SBLeafIcon
{
    NSString *_leafIdentifier;
    NSString *_applicationBundleID;
    SSDownload *_download;
    float _progress;
    BOOL _installing;
    BOOL _wasUninstalledByUser;
    BOOL _isNewsstandDownload;
    SSDownloadStatus *_lastStatus;
    SSDownload *_downloadForImageDataBeingLoaded;
    NSOperation *_iconImageGenerationOperation;
    NSMutableArray *_imageCacheFilePaths;
    BOOL _imageCacheBeingRead;
}

+ (struct dispatch_queue_s *)backgroundQueue;
+ (id)__imageCacheDirectoryPath;
+ (void)setupDownloadingIconImageCache;
+ (id)leafIdentifierForDownloadUniqueID:(id)arg1;
+ (id)leafIdentifierForDownload:(id)arg1;
+ (id)__darkenedIconImageForImage:(id)arg1;
+ (id)__iconImageFromData:(id)arg1 format:(int)arg2 scale:(float)arg3 options:(int)arg4 darken:(BOOL)arg5;
- (id)initWithLeafIdentifier:(id)arg1;
- (id)initWithDownload:(id)arg1;
- (void)dealloc;
- (BOOL)matchesRepresentation:(id)arg1;
- (id)representation;
- (id)description;
- (void)setLeafIdentifier:(id)arg1;
- (id)identifierForCorrespondingApplicationIcon;
- (id)undarkenedHomeScreenIconImage;
- (int)_iconImageOptions;
- (id)getGenericIconImage:(int)arg1;
- (int)iconFormatForLocation:(int)arg1;
- (BOOL)shouldCacheImageForFormat:(int)arg1;
- (void)loadAndDarkenHomeScreenIconImageInBackground;
- (void)_reloadThumbnailImage;
- (void)_removeImageCacheFileAtPath:(id)arg1;
- (id)generateIconImage:(int)arg1;
- (BOOL)canEllipsizeLabel;
- (id)displayName;
- (id)realDisplayName;
- (id)leafIdentifier;
- (void)launch;
- (BOOL)allowsUninstall;
- (void)completeUninstall;
- (void)reloadForStatusChange;
- (float)progress;
- (BOOL)isDone;
- (id)applicationBundleID;
- (void)setApplicationBundleID:(id)arg1;
- (void)setDownload:(id)arg1;
- (id)download;
- (BOOL)isNewsstandDownload;
- (void)setNewsstandDownload:(BOOL)arg1;
- (void)retry;
- (void)remove;
- (BOOL)uninstalledByUser;
- (void)setUninstalledByUser:(BOOL)arg1;
- (id)uninstallAlertTitle;
- (id)uninstallAlertBody;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertCancelTitle;
- (void)_showAlertForError:(id)arg1;
- (BOOL)iconAppearsInNewsstand;

@end

