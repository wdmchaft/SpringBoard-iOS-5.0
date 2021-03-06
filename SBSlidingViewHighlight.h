/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView;

@interface SBSlidingViewHighlight : UIView
{
    UIImageView *_leftHighlight;
    UIImageView *_rightHighlight;
    struct CGRect _notchRect;
}

+ (float)defaultHeight;
+ (id)highlightImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 notchRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)setNotchRect:(struct CGRect)arg1;
- (void)dealloc;

@end

