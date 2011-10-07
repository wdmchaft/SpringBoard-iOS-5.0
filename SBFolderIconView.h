/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBIconView.h"

#import "SBFolderIconObserver-Protocol.h"

@class NSMutableSet, SBDownloadingProgressBar, SBFolderIcon, UIImageView;

@interface SBFolderIconView : SBIconView <SBFolderIconObserver>
{
    UIImageView *_iconBackgroundView;
    UIImageView *_iconForegroundView;
    SBDownloadingProgressBar *_progressBar;
    NSMutableSet *_animatingIcons;
    unsigned int _currentScrollRow;
    BOOL _skippingGridIcons;
    float _miniIconVisibleOffset;
}

- (void)dealloc;
@property(readonly, retain) SBFolderIcon *folderIcon;
- (void)setFolderIcon:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)noteIconAdded:(id)arg1;
- (void)setIconScrollPosition:(int)arg1 animated:(BOOL)arg2;
- (void)setIsOverlapping:(BOOL)arg1;
- (struct CGRect)rectForMiniIconAtIndex:(unsigned int)arg1;
- (id)_folderBackgroundImage;
- (id)_folderForegroundImage;
- (id)snapshotSettings;
- (id)iconImageSnapshot:(id)arg1;
- (void)_positionMiniGrid;
- (void)positionIconImageView;
- (struct CGAffineTransform)transformToMakeIconBorderExpandToSizeOfDropGlow;
- (void)showDropGlow:(BOOL)arg1;
- (struct CGRect)frameForIconOverlay;
- (void)placeGhostlyImageView;
- (void)setGhostly:(BOOL)arg1 requester:(int)arg2;
- (void)setPartialGhostly:(float)arg1 requester:(int)arg2;
- (id)progressBar;
- (id)iconBackgroundView;
- (void)positionCloseBoxOfType:(int)arg1;
- (id)folder;
- (id)description;
- (BOOL)allowsTapWhileEditing;
- (BOOL)delaysUnhighlightWhenTapped;
- (double)grabDurationForEvent:(id)arg1;
- (void)_updateProgressBar;
- (void)prepareForRecycling;
- (void)iconImageDidUpdate:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)containedIconImageDidUpdate:(id)arg1;

@end

