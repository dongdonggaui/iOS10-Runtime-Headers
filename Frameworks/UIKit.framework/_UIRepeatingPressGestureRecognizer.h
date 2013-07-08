/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer  {
    BOOL _timerOn;
    int _delayIndex;
    unsigned int _numberOfTouchesRequired;
    int _buttonType;
}

@property unsigned int numberOfTouchesRequired;
@property(setter=_setButtonType:) int _buttonType;

+ (double)delayForRepeatNumber:(int)arg1;

- (void)dealloc;
- (void)_nextStep:(id)arg1;
- (void)_scheduleNextTimer;
- (void)_cancelPress;
- (void)_endPress;
- (void)_beginPress;
- (void)_clearTapTimer;
- (void)_resetGestureRecognizer;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (unsigned int)numberOfTouchesRequired;
- (void)_setButtonType:(int)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setView:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (int)_buttonType;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;

@end