/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class SBNewsstandShelfHeaderView, SBNewsstandTilingImageView;

@interface SBNewsstandShelfFrameView : UIView
{
    struct CGSize _borderSize;
    SBNewsstandShelfHeaderView *_headerView;
    SBNewsstandTilingImageView *_leftBorder;
    SBNewsstandTilingImageView *_rightBorder;
    int _orientation;
}

+ (void)setupCache;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)showHeaderView;
- (void)setFrame:(struct CGRect)arg1;
- (void)configureForOrientation:(int)arg1;
- (void)layoutSubviews;

@end

