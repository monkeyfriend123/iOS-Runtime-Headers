/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoFillMultipleLoginsAlertController : UIAlertController {
    id  _appDidEnterBackgroundObserver;
    UIAlertAction * _cancelAction;
    BOOL  _cancelsWhenAppEntersBackground;
}

@property (nonatomic) BOOL cancelsWhenAppEntersBackground;

+ (id)alertControllerWithMatches:(id)arg1 currentUser:(id)arg2 currentPassword:(id)arg3 lastGeneratedPassword:(id)arg4 formURL:(id)arg5 preferredStyle:(int)arg6 completionHandler:(id /* block */)arg7;

- (void).cxx_destruct;
- (BOOL)cancelsWhenAppEntersBackground;
- (void)setCancelsWhenAppEntersBackground:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
