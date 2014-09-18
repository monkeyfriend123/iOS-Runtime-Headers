/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage;

@interface UIKeyboardEmojiCategoryBar_iPad : UIKeyboardEmojiCategoryBar {
    UIImage *categoryKeyHighlightedImage;
    UIImage *categoryKeyImage;
    UIImage *dividerHighlightedImage;
    UIImage *dividerImage;
}

@property(retain) UIImage * categoryKeyHighlightedImage;
@property(retain) UIImage * categoryKeyImage;
@property(retain) UIImage * dividerHighlightedImage;
@property(retain) UIImage * dividerImage;

- (id)categoryKeyHighlightedImage;
- (id)categoryKeyImage;
- (id)dividerHighlightedImage;
- (id)dividerImage;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSegment:(int)arg1;
- (void)layoutSubviews;
- (void)releaseImagesAndViews;
- (void)setCategoryKeyHighlightedImage:(id)arg1;
- (void)setCategoryKeyImage:(id)arg1;
- (void)setDividerHighlightedImage:(id)arg1;
- (void)setDividerImage:(id)arg1;
- (void)updateSegmentAndDividers:(int)arg1;
- (void)updateSegmentImages;

@end