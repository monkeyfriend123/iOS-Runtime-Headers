/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKEntity, UILabel;

@interface CKEntityView : UITableViewCell {
    CKEntity *_entity;
    UILabel *_label;
}

+ (float)defaultWidth;
+ (struct CGSize { float x1; float x2; })sizeForEntity:(id)arg1 withWidth:(float)arg2;
+ (struct CGSize { float x1; float x2; })sizeForEntity:(id)arg1;

- (void)dealloc;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (void)setEntity:(id)arg1;
- (void)sizeToFit;
- (void)updateFontSize;

@end