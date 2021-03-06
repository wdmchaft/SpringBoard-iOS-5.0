/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBBulletinCellContentViewBase.h"

@interface SBBulletinCellContentView : SBBulletinCellContentViewBase
{
    BOOL _italicizeContent;
    float _shadowBlur;
    BOOL _buttonsBelowContent;
}

+ (id)_titleFont:(BOOL)arg1;
+ (id)_dateFont:(BOOL)arg1;
+ (id)_subtitleFont:(BOOL)arg1;
+ (id)_messageFont:(BOOL)arg1;
+ (id)_attachmentFont:(BOOL)arg1;
+ (float)heightForBulletinStyleWithSubtitle:(id)arg1 message:(id)arg2 maxLines:(unsigned int)arg3 contentWidth:(float)arg4 italicize:(BOOL)arg5;
+ (float)heightForBulletinStyleWithSubtitle:(id)arg1 imageHeight:(float)arg2 italicize:(BOOL)arg3;
+ (float)heightForSystemAlertStyleWithTitle:(id)arg1 maxLines:(unsigned int)arg2 message:(id)arg3 maxLines:(unsigned int)arg4 contentWidth:(float)arg5;
- (void)setItalicizesContent:(BOOL)arg1;
- (void)setShadowBlur:(float)arg1;
- (void)setHasButtonBelow:(BOOL)arg1;
- (id)_initForLayoutStyle:(int)arg1;
- (void)_configureLabel:(id)arg1 withFont:(id)arg2 alignment:(int)arg3;
- (id)_dateFont;
- (id)_titleFont;
- (id)_subtitleFont;
- (id)_messageFont;
- (id)_attachmentFont;
- (BOOL)_shouldVerticallyCenterBulletinStyleTitleAndDate;
- (float)_layoutTitleAtX:(float)arg1 y:(float)arg2;
- (float)_layoutSubtitleAtX:(float)arg1 y:(float)arg2;
- (float)_layoutAttachmentImageAtX:(float)arg1 y:(float)arg2;
- (float)_layoutMessageAtX:(float)arg1 y:(float)arg2;
- (void)_layoutAttachmentTextAtX:(float)arg1;
- (void)layoutSubviews;
- (void)_drawLabel:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;

@end

