/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

#import "SBIconObserver-Protocol.h"

@class NSTimer, SBIcon, SBIconBadgeImage, SBIconImageContainerView, SBIconImageView, SBIconLabel, UIImage, UIImageView;

@interface SBIconView : UIView <SBIconObserver>
{
    SBIcon *_icon;
    id <SBIconViewDelegate> _delegate;
    id <SBIconViewLocker> _locker;
    SBIconImageContainerView *_iconImageContainer;
    SBIconImageView *_iconImageView;
    UIImageView *_iconDarkeningOverlay;
    UIImageView *_ghostlyImageView;
    UIImageView *_reflection;
    UIImageView *_shadow;
    SBIconBadgeImage *_badgeImage;
    UIImageView *_badgeView;
    SBIconLabel *_label;
    BOOL _labelHidden;
    BOOL _labelOnWallpaper;
    UIView *_closeBox;
    int _closeBoxType;
    UIImageView *_dropGlow;
    unsigned int _drawsLabel:1;
    unsigned int _isHidden:1;
    unsigned int _isGrabbed:1;
    unsigned int _isOverlapping:1;
    unsigned int _refusesRecipientStatus:1;
    unsigned int _highlighted:1;
    unsigned int _launchDisabled:1;
    unsigned int _isJittering:1;
    unsigned int _allowJitter:1;
    unsigned int _touchDownInIcon:1;
    unsigned int _hideShadow:1;
    NSTimer *_delayedUnhighlightTimer;
    unsigned int _onWallpaper:1;
    unsigned int _ghostlyRequesters;
    int _iconLocation;
    float _iconImageAlpha;
    float _iconImageBrightness;
    float _iconLabelAlpha;
    float _accessoryAlpha;
    struct CGPoint _unjitterPoint;
    struct CGPoint _grabPoint;
    NSTimer *_longPressTimer;
    unsigned int _ghostlyTag;
    UIImage *_ghostlyImage;
    BOOL _ghostlyPending;
}

+ (struct CGSize)defaultIconSize;
+ (struct CGSize)defaultIconImageSize;
+ (BOOL)allowsRecycling;
+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimation;
- (id)initWithDefaultSize;
- (void)dealloc;
@property(readonly, retain) SBIcon *icon;
- (void)setIcon:(id)arg1;
- (int)location;
- (void)setLocation:(int)arg1;
- (void)showIconAnimationDidStop:(id)arg1 didFinish:(id)arg2 icon:(id)arg3;
- (void)setIsHidden:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)isHidden;
- (BOOL)isRevealable;
- (void)positionIconImageView;
- (void)applyIconImageTransform:(struct CATransform3D)arg1 duration:(float)arg2 delay:(float)arg3;
- (void)setDisplayedIconImage:(id)arg1;
- (id)snapshotSettings;
- (id)iconImageSnapshot:(id)arg1;
- (id)reflectedIconWithBrightness:(float)arg1;
- (void)setIconImageAlpha:(float)arg1;
- (void)setIconLabelAlpha:(float)arg1;
- (id)iconImageView;
- (void)setLabelHidden:(BOOL)arg1;
- (void)positionLabel;
- (struct CGSize)_labelSize;
- (Class)_labelClass;
- (void)updateLabel;
- (void)_updateBadgePosition;
- (id)_overriddenBadgeTextForText:(id)arg1;
- (void)updateBadge;
- (id)_automationID;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)frameForIconOverlay;
- (void)placeIconOverlayView;
- (void)updateIconOverlayView;
- (void)_updateIconBrightness;
- (BOOL)allowsTapWhileEditing;
- (BOOL)delaysUnhighlightWhenTapped;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 delayUnhighlight:(BOOL)arg2;
- (void)_delayedUnhighlight;
- (BOOL)isInDock;
- (id)_shadowImage;
- (void)_updateShadow;
- (void)updateReflection;
- (void)setDisplaysOnWallpaper:(BOOL)arg1;
- (void)setLabelDisplaysOnWallpaper:(BOOL)arg1;
- (BOOL)showsReflection;
- (float)_reflectionImageOffset;
- (void)setFrame:(struct CGRect)arg1;
- (void)setIsJittering:(BOOL)arg1;
- (void)setAllowJitter:(BOOL)arg1;
- (BOOL)allowJitter;
- (void)removeAllIconAnimations;
- (void)setIconPosition:(struct CGPoint)arg1;
- (void)setRefusesRecipientStatus:(BOOL)arg1;
- (BOOL)canReceiveGrabbedIcon:(id)arg1;
- (double)grabDurationForEvent:(id)arg1;
- (void)setIsGrabbed:(BOOL)arg1;
- (BOOL)isGrabbed;
- (void)setIsOverlapping:(BOOL)arg1;
- (struct CGAffineTransform)transformToMakeDropGlowShrinkToIconSize;
- (void)prepareDropGlow;
- (void)showDropGlow:(BOOL)arg1;
- (void)removeDropGlow;
- (id)dropGlow;
- (BOOL)isShowingDropGlow;
- (void)placeGhostlyImageView;
- (id)_genGhostlyImage:(id)arg1;
- (void)prepareGhostlyImageIfNeeded;
- (void)prepareGhostlyImage;
- (void)prepareGhostlyImageView;
- (void)setGhostly:(BOOL)arg1 requester:(int)arg2;
- (void)setPartialGhostly:(float)arg1 requester:(int)arg2;
- (void)removeGhostlyImageView;
- (BOOL)isGhostly;
- (int)ghostlyRequesters;
- (void)longPressTimerFired;
- (void)cancelLongPressTimer;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)isTouchDownInIcon;
- (void)setTouchDownInIcon:(BOOL)arg1;
- (void)hideCloseBoxAnimationDidStop:(id)arg1 didFinish:(id)arg2 closeBox:(id)arg3;
- (void)positionCloseBoxOfType:(int)arg1;
- (id)_newCloseBoxOfType:(int)arg1;
- (void)setShowsCloseBox:(BOOL)arg1;
- (void)setShowsCloseBox:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isShowingCloseBox;
- (void)closeBoxTapped;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets)snapshotEdgeInsets;
- (void)setShadowsHidden:(BOOL)arg1;
- (void)_updateShadowFrameForShadow:(id)arg1;
- (void)_updateShadowFrame;
- (BOOL)_delegatePositionIsEditable;
- (void)_delegateTouchEnded:(BOOL)arg1;
- (BOOL)_delegateTapAllowed;
- (int)_delegateCloseBoxType;
- (id)createShadowImageView;
- (void)prepareForRecycling;
- (struct CGRect)defaultFrameForProgressBar;
- (void)iconImageDidUpdate:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)iconLaunchEnabledDidChange:(id)arg1;
@property id <SBIconViewLocker> locker; // @synthesize locker=_locker;
@property id <SBIconViewDelegate> delegate; // @synthesize delegate=_delegate;

@end

