/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

#import "SBAppSwitcherScrollViewDelegate-Protocol.h"

@class NSMutableArray, SBAppSwitcherScrollView, SBLinenView;

@interface SBAppSwitcherBarView : UIView <SBAppSwitcherScrollViewDelegate>
{
    id <SBAppSwitcherBarViewDelegate> _delegate;
    NSMutableArray *_appIcons;
    UIView *_contentView;
    SBLinenView *_backgroundView;
    NSMutableArray *_auxViews;
    SBAppSwitcherScrollView *_scrollView;
    BOOL _animateContentReflow;
    BOOL _animatedScrolling;
    int _lastPageIndex;
    BOOL _isVisible;
    struct CGPoint _savedPositionForSuspendGesture;
}

+ (unsigned int)iconsPerPage:(int)arg1;
+ (struct CGSize)viewSize:(int)arg1;
+ (float)edgePaddingForWidth:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)prepareIconViewsForDisplay:(id)arg1 showFirstPage:(BOOL)arg2;
- (id)iconViews;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isScrolling;
- (void)addIcon:(id)arg1;
- (void)removeIcon:(id)arg1;
- (void)replaceIcons:(id)arg1 with:(id)arg2;
- (void)addAuxiliaryViews:(id)arg1;
- (BOOL)nowPlayingControlsVisible;
- (BOOL)airPlayControlsVisible;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)_iconRemoveDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_reflowContent:(BOOL)arg1;
- (void)_adjustContentOffsetForReflow:(BOOL)arg1;
- (void)_adjustContentOffsetForResizeFromOldOffset:(struct CGPoint)arg1 andOldSize:(struct CGSize)arg2 toNewSize:(struct CGSize)arg3;
- (void)_adjustScrollContentSize;
- (void)_positionAtFirstPage:(BOOL)arg1;
- (void)layoutSubviews;
- (struct CGRect)_iconFrameForIndex:(unsigned int)arg1 withSize:(struct CGSize)arg2;
- (unsigned int)_pageCount;
- (unsigned int)_iconCountForWidth:(float)arg1;
- (struct CGPoint)_firstPageOffset:(struct CGSize)arg1;
- (int)_pageForOffset:(struct CGPoint)arg1 withSize:(struct CGSize)arg2;
- (int)_pageForIndex:(unsigned int)arg1;
- (void)didMoveToSuperview;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (BOOL)scrollView:(id)arg1 shouldCancelInContentForView:(id)arg2;
- (void)saveScrollPositionBeforeSuspendGesture;
- (void)restoreScrollPositionAfterSuspendGesture;
@property(nonatomic) id <SBAppSwitcherBarViewDelegate> delegate; // @synthesize delegate=_delegate;

@end

