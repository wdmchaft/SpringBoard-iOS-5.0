/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "TPBottomLockBar.h"

@interface SBBulletinLockBar : TPBottomLockBar
{
}

- (id)initWithFrame:(struct CGRect)arg1 knobImage:(id)arg2;
- (void)dealloc;
- (float)defaultWellWidth;
- (id)wellImageName;
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;
- (BOOL)usesBackgroundImage;
- (BOOL)_shouldStopLabelAnimationForGrab;
- (float)knobTrackInsetLeft;
- (float)knobTrackInsetRight;
- (void)_adjustLabelOrigin;
- (float)_calcKnobYOffset;
- (void)knobDragged:(float)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)showKnob;
- (void)hideKnob;
- (void)setAlpha:(float)arg1;
- (void)setWellWidth:(float)arg1;

@end

