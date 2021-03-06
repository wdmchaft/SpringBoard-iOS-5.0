/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class UIButton, UISlider;

@interface SBAirPlayBarView : UIView
{
    UIView *_speakerIcon;
    UIButton *_airPlayButton;
    UISlider *_volumeSlider;
    BOOL _airPlayEnabled;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic, getter=isAirPlayEnabled) BOOL airPlayEnabled;
- (void)setAirPlayEnabled:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) UIButton *airPlayButton; // @synthesize airPlayButton=_airPlayButton;
@property(readonly, nonatomic) UISlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;

@end

