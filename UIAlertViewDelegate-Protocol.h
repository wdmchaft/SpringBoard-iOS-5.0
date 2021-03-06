/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol UIAlertViewDelegate <NSObject>

@optional
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)didPresentAlertView:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1;
@end

