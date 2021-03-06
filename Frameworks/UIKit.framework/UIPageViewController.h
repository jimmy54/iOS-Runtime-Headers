/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIPageViewControllerDataSource>, <UIPageViewControllerDelegate>, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, UIPanGestureRecognizer, UITapGestureRecognizer, _UIPageCurl, _UIPageViewControllerContentView, _UIQueuingScrollView;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int delegateWantsTransitionWillBegin : 1; 
        unsigned int delegateWantsTransitionCompleted : 1; 
        unsigned int delegateCustomizesSpineLocationForInterfaceOrientation : 1; 
        unsigned int dataSourceSuppliesBeforeViewController : 1; 
        unsigned int dataSourceSuppliesAfterViewController : 1; 
        unsigned int dataSourceSuppliesPageCount : 1; 
        unsigned int dataSourceSuppliesPageNumber : 1; 
    NSMutableDictionary *_cachedViewControllersForCurl;
    NSMutableArray *_cachedViewControllersForScroll;
    <UIPageViewControllerDataSource> *_dataSource;
    <UIPageViewControllerDelegate> *_delegate;
    } _delegateFlags;
    int _disableAutorotationCount;
    BOOL _doubleSided;
    } _effectiveTapRegionBreadths;
    } _effectiveTapRegionInsets;
    NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;
    BOOL _interfaceRotating;
    int _lastKnownNavigationDirection;
    int _navigationOrientation;
    BOOL _pageControlRequiresValidation;
    _UIPageCurl *_pageCurl;
    float _pageSpacing;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSMutableArray *_rotationSnapshotViews;
    int _spineLocation;
    int _spineLocationPriorToInterfaceRotation;
    BOOL _stashingViewControllersForRotation;
    UITapGestureRecognizer *_tapGestureRecognizer;
    } _tapRegionBreadths;
    } _tapRegionInsets;
    struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } *_tapRegions;
    int _transitionStyle;
    NSArray *_viewControllers;
    NSArray *_viewControllersStashedForRotation;
}

@property(readonly) _UIPageViewControllerContentView * _contentView;
@property(getter=_isInterfaceRotating,readonly) BOOL _interfaceRotating;
@property(readonly) int _navigationOrientation;
@property(getter=_isPageControlVisible,readonly) BOOL _pageControlVisible;
@property(setter=_setPageSpacing:) float _pageSpacing;
@property(readonly) _UIQueuingScrollView * _scrollView;
@property(readonly) int _transitionStyle;
@property(setter=_setViewControllers:,retain) NSArray * _viewControllers;
@property(setter=_setViewControllersStashedForRotation:,retain) NSArray * _viewControllersStashedForRotation;
@property <UIPageViewControllerDataSource> * dataSource;
@property <UIPageViewControllerDelegate> * delegate;
@property(getter=isDoubleSided) BOOL doubleSided;
@property(readonly) NSArray * gestureRecognizers;
@property(readonly) int navigationOrientation;
@property(readonly) int spineLocation;
@property(readonly) int transitionStyle;
@property(readonly) NSArray * viewControllers;

+ (id)_incomingViewControllerKeys;
+ (BOOL)_isNavigationOrientation:(int)arg1 supportedForTransitionStyle:(int)arg2;
+ (BOOL)_isSpineLocation:(int)arg1 supportedForTransitionStyle:(int)arg2;
+ (BOOL)_isSupportedTransitionStyle:(int)arg1;
+ (id)_outgoingViewControllerKeys;
+ (id)stringForSpineLocation:(int)arg1;

- (void)_beginDisablingInterfaceAutorotation;
- (void)_cacheViewControllerForScroll:(id)arg1;
- (BOOL)_canHandleGestures;
- (void)_child:(id)arg1 beginAppearanceTransition:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_child:(id)arg1 beginAppearanceTransitionIfPossible:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)_child:(id)arg1 canBeginAppearanceTransition:(BOOL)arg2;
- (void)_child:(id)arg1 didRotateFromInterfaceOrientation:(int)arg2;
- (void)_child:(id)arg1 endAppearanceTransitionIfPossible:(BOOL)arg2;
- (void)_child:(id)arg1 willAnimateRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)_child:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (BOOL)_childCanEndAppearanceTransition:(id)arg1;
- (void)_childEndAppearanceTransition:(id)arg1;
- (struct CGSize { float x1; float x2; })_contentSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_contentView;
- (void)_contentViewFrameOrBoundsDidChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_disabledScrollingRegion;
- (struct CGSize { float x1; float x2; })_effectiveTapRegionBreadths;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_effectiveTapRegionInsets;
- (void)_endDisablingInterfaceAutorotation;
- (void)_flushViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(int)arg1;
- (void)_invalidateEffectiveTapRegions;
- (void)_invalidatePageCurl;
- (void)_invalidateViewControllersStashedForCurlFromDataSource;
- (BOOL)_isCurrentViewControllerStateValid;
- (BOOL)_isInterfaceRotating;
- (BOOL)_isPageControlVisible;
- (int)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(float*)arg2;
- (int)_navigationOrientation;
- (id)_pageControl;
- (void)_pageControlValueChanged:(id)arg1;
- (float)_pageSpacing;
- (void)_populateIncomingViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(int)arg3;
- (void)_populateOutgoingViewControllersInMap:(id)arg1;
- (id)_queuingScrollView:(id)arg1 viewBefore:(BOOL)arg2 view:(id)arg3;
- (int)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(int)arg1;
- (id)_scrollView;
- (void)_sendChildViewWill:(BOOL)arg1 appear:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setDisabledScrollingRegion:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setPageSpacing:(float)arg1;
- (void)_setSpineLocation:(int)arg1;
- (void)_setTapRegionBreadths:(struct CGSize { float x1; float x2; })arg1;
- (void)_setTapRegionInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setViewControllers:(id)arg1 withCurlOfType:(int)arg2 fromLocation:(struct CGPoint { float x1; float x2; })arg3 direction:(int)arg4 animated:(BOOL)arg5 notifyDelegate:(BOOL)arg6 completion:(id)arg7;
- (void)_setViewControllers:(id)arg1 withScrollInDirection:(int)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (void)_setViewControllers:(id)arg1;
- (void)_setViewControllersStashedForRotation:(id)arg1;
- (BOOL)_shouldBeginNavigationInDirection:(int*)arg1 inResponseToPanGestureRecognizer:(id)arg2;
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(float*)arg1;
- (BOOL)_shouldNavigateInDirection:(int*)arg1 inResponseToTapGestureRecognizer:(id)arg2;
- (BOOL)_shouldNavigateInDirection:(int*)arg1 inResponseToVelocity:(float*)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (struct CGSize { float x1; float x2; })_tapRegionBreadths;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_tapRegionInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_tapRegions;
- (int)_transitionStyle;
- (void)_updatePageControlViaDataSourceIfNecessary;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_validRangeForPresentationOfViewControllersWithSpineLocation:(int)arg1;
- (id)_validatedViewControllersForPresentationOfViewControllers:(id)arg1 validRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)_validatedViewControllersForTransitionWithViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)_viewControllerAfterViewController:(id)arg1;
- (id)_viewControllerBefore:(BOOL)arg1 viewController:(id)arg2;
- (id)_viewControllerBeforeViewController:(id)arg1;
- (id)_viewControllers;
- (id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(int)arg2;
- (id)_viewControllersForPendingSpineLocation:(int)arg1;
- (id)_viewControllersStashedForRotation;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gestureRecognizers;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTransitionStyle:(int)arg1 navigationOrientation:(int)arg2 options:(id)arg3;
- (BOOL)isDoubleSided;
- (void)loadView;
- (int)navigationOrientation;
- (void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
- (void)queuingScrollView:(id)arg1 didCommitManualScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(int)arg5 animated:(BOOL)arg6 canComplete:(BOOL)arg7;
- (void)queuingScrollView:(id)arg1 didEndManualScroll:(BOOL)arg2 toRevealView:(id)arg3 direction:(int)arg4 animated:(BOOL)arg5 didFinish:(BOOL)arg6 didComplete:(BOOL)arg7;
- (void)queuingScrollView:(id)arg1 didFlushView:(id)arg2 animated:(BOOL)arg3;
- (id)queuingScrollView:(id)arg1 viewAfterView:(id)arg2;
- (id)queuingScrollView:(id)arg1 viewBeforeView:(id)arg2;
- (void)queuingScrollView:(id)arg1 willManuallyScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(BOOL)arg5;
- (BOOL)queuingScrollViewShouldLayoutSubviews:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoubleSided:(BOOL)arg1;
- (void)setViewControllers:(id)arg1 direction:(int)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (int)spineLocation;
- (int)transitionStyle;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillUnload;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
