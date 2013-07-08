/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBCandidateCollectionView, TIKeyboardCandidateResultSet, UIKeyboardCandidatePocketShadow, <UIKeyboardCandidateList>, <UIKeyboardCandidateListDelegate>, UIKeyboardCandidateLogButton, NSArray;

@interface UIKBHandwritingCandidateView : UIKBKeyView <UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _usesCandidateSelection;
    <UIKeyboardCandidateListDelegate> *_delegate;
    TIKeyboardCandidateResultSet *_candidateResultSet;
    UIKBCandidateCollectionView *_candidatesCollectionView;
    UIKeyboardCandidatePocketShadow *_pocketShadow;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    } _visualStyling;
    UIKeyboardCandidateLogButton *_logButton;
}

@property <UIKeyboardCandidateListDelegate> * delegate;
@property(readonly) <UIKeyboardCandidateList> * candidateList;
@property(retain) TIKeyboardCandidateResultSet * candidateResultSet;
@property(readonly) NSArray * candidates;
@property(retain) UIKBCandidateCollectionView * candidatesCollectionView;
@property(retain) UIKeyboardCandidatePocketShadow * pocketShadow;
@property struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;
@property BOOL usesCandidateSelection;
@property(retain) UIKeyboardCandidateLogButton * logButton;


- (id)keyboardBehaviors;
- (id)candidateResultSet;
- (id)candidates;
- (BOOL)hasCandidates;
- (id)currentCandidate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setLogButton:(id)arg1;
- (id)candidateList;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)jumpToCompositions;
- (BOOL)hasPreviousPage;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)isHiddenCandidatesList;
- (BOOL)isExtendedList;
- (void)setRenderConfig:(id)arg1;
- (void)setCandidatesCollectionView:(id)arg1;
- (void)selectAndScrollToCandidateAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidateResultSet:(id)arg1;
- (unsigned int)dummyCellsCount;
- (void)reloadDataByAppendingAtEnd:(BOOL)arg1;
- (void)setPocketShadow:(id)arg1;
- (id)pocketShadow;
- (id)logButton;
- (id)candidatesCollectionView;
- (void)updatePocketShadowForKeyplane:(id)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;
- (id)_inheritedRenderConfig;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (void)setUsesCandidateSelection:(BOOL)arg1;
- (BOOL)hasNextPage;
- (BOOL)usesCandidateSelection;
- (void)_setRenderConfig:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end