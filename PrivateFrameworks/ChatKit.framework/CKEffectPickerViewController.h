/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEffectPickerViewController : UIViewController <CKEffectPickerViewDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    }  _balloonViewOrigin;
    <CKEffectPickerViewControllerDelegate> * _delegate;
    CKEffectPickerView * _pickerView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _sendButtonFrame;
    NSAttributedString * _text;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } balloonViewOrigin;
@property (nonatomic) <CKEffectPickerViewControllerDelegate> *delegate;
@property (nonatomic, retain) CKEffectPickerView *pickerView;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } sendButtonFrame;
@property (nonatomic, copy) NSAttributedString *text;

- (void).cxx_destruct;
- (struct CGPoint { float x1; float x2; })balloonViewOrigin;
- (id)delegate;
- (void)effectPickerViewDidFinishAnimatingIn:(id)arg1;
- (void)effectSelectedWithIdentifier:(id)arg1;
- (void)handleTouchMoved:(struct CGPoint { float x1; float x2; })arg1;
- (void)handleTouchUp:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithComposition:(id)arg1 sendButtonFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 balloonViewOrigin:(struct CGPoint { float x1; float x2; })arg3;
- (id)pickerView;
- (void)presentPicker;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sendButtonFrame;
- (void)setBalloonViewOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCloseButtonYPosition:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPickerView:(id)arg1;
- (void)setSemanticContentAttribute:(id)arg1 forceLTR:(BOOL)arg2;
- (void)setSendButtonFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)touchUpInsideCloseButton;
- (void)updateHintTransition:(float)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end