/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBBulletinAttachmentFactory : NSObject
{
}

+ (struct CGSize)listImageSizeForAttachmentType:(int)arg1 thumbnailWidth:(float)arg2 height:(float)arg3;
+ (struct CGSize)bannerImageSizeForAttachmentType:(int)arg1 thumbnailWidth:(float)arg2 height:(float)arg3;
+ (id)listThumbnailConstraintsForAttachmentType:(int)arg1;
+ (id)lockScreenFloatingThumbnailContraintsForAttachmentType:(int)arg1;
+ (id)bannerThumbnailConstraintsForAttachmentType:(int)arg1;
+ (id)_genericImageForAttachmentType:(int)arg1;
+ (id)_imageByCroppingOrPaddingImage:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)_imageFromPNGData:(id)arg1;
+ (id)_listImageForAttachmentType:(int)arg1 thumbnailData:(id)arg2 forFloatingAlert:(BOOL)arg3;
+ (id)listImageForAttachmentType:(int)arg1 thumbnailData:(id)arg2;
+ (id)lockScreenFloatingImageForAttachmentType:(int)arg1 thumbnailData:(id)arg2;
+ (id)bannerImageForAttachmentType:(int)arg1 thumbnailData:(id)arg2;
+ (id)_nMoreAttachments:(unsigned int)arg1;
+ (id)_nAttachments:(unsigned int)arg1;
+ (id)listTextForAdditionalAttachmentCount:(unsigned int)arg1;
+ (id)bannerTextForAdditionalAttachments:(unsigned int)arg1 showingImage:(BOOL)arg2;

@end

