/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlertDisplay.h"

#import "UITextFieldDelegate-Protocol.h"

@class SBTextDisplayView, TPBottomSingleButtonBar, UIActivityIndicatorView, UIScrollView, UITextField, UITransitionView, UIView;

@interface SBUSSDAlertDisplay : SBAlertDisplay <UITextFieldDelegate>
{
    TPBottomSingleButtonBar *_responseBar;
    UIView *_notifyView;
    UIView *_replyView;
    UITransitionView *_transitionView;
    UIScrollView *_scroller;
    SBTextDisplayView *_contentView;
    SBTextDisplayView *_charsRemainingView;
    UIActivityIndicatorView *_progressIndicator;
    UITextField *_responseField;
    BOOL _allowsResponse;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)_notifyView;
- (id)_replyView;
- (void)dealloc;
- (void)displayString:(id)arg1 centerVertically:(BOOL)arg2;
- (void)alertDisplayWillBecomeVisible;
- (void)alertDisplayBecameVisible;
- (void)_setupResponseBar;
- (void)alertStringAvailable:(id)arg1;
- (BOOL)allowsResponse;
- (void)setAllowsResponse:(BOOL)arg1;
- (BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (void)_updateCharsRemaining;
- (void)_textChanged:(id)arg1;
- (void)_replyClicked;
- (void)_okayClicked;
- (void)_cancelClicked;

@end

