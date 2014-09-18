/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class IMManualUpdater;

@interface CKAudioProgressView : CKBalloonImageView {
    BOOL _color;
    IMManualUpdater *_displayUpdater;
    float _progress;
    int _style;
    bool_played;
    bool_playing;
}

@property BOOL color;
@property(retain) IMManualUpdater * displayUpdater;
@property(getter=isPlayed) bool played;
@property(getter=isPlaying) bool playing;
@property float progress;
@property int style;

+ (id)pauseImageWithColor:(BOOL)arg1;
+ (id)pauseTemplateImage;
+ (id)playImageWithColor:(BOOL)arg1;
+ (id)playTemplateImage;
+ (float)progressForTime:(double)arg1 duration:(double)arg2;
+ (id)templateImageWithControlImage:(id)arg1;

- (BOOL)color;
- (void)dealloc;
- (id)displayUpdater;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlayed;
- (bool)isPlaying;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (float)progress;
- (void)setColor:(BOOL)arg1;
- (void)setDisplayUpdater:(id)arg1;
- (void)setNeedsPrepareForDisplay;
- (void)setPlayed:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setProgress:(float)arg1;
- (void)setStyle:(int)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (int)style;

@end