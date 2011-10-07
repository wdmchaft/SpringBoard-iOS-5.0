/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UITableView.h"

#import "SBBulletinHeaderViewDelegate-Protocol.h"

@class NSMutableSet, SBBulletinLinenSegmentView, UIImageView;

@interface SBBulletinTableView : UITableView <SBBulletinHeaderViewDelegate>
{
    NSMutableSet *_visibleSectionHeaders;
    SBBulletinLinenSegmentView *_fadeOverlay;
    UIImageView *_fadeOverlayMask;
}

- (id)initWithFrame:(struct CGRect)arg1 linenView:(id)arg2;
- (void)dealloc;
- (id)visibleSectionHeaders;
- (void)setRasterizesFadeOverlay:(BOOL)arg1;
- (void)setLinenGradientAlpha:(float)arg1;
- (void)layoutSubviews;
- (void)headerViewWillAppear:(id)arg1;
- (void)headerViewWillDisappear:(id)arg1;

@end

