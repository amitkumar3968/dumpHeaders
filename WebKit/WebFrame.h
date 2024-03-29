/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class WebFramePrivate;

@interface WebFrame : NSObject
{
    WebFramePrivate *_private;
}

+ (void)_createMainFrameWithSimpleHTMLDocumentWithPage:(struct Page *)arg1 frameView:(id)arg2 style:(id)arg3;
+ (PassRefPtr_4af616b4)_createSubframeWithOwnerElement:(struct HTMLFrameOwnerElement *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3;
+ (void)_createMainFrameWithPage:(struct Page *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3;
+ (PassRefPtr_4af616b4)_createFrameWithPage:(struct Page *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3 ownerElement:(struct HTMLFrameOwnerElement *)arg4;
+ (id)stringWithData:(id)arg1 textEncodingName:(id)arg2;
- (struct OpaqueJSContext *)globalContext;
- (id)windowObject;
- (id)childFrames;
- (id)parentFrame;
- (id)findFrameNamed:(id)arg1;
- (void)reloadFromOrigin;
- (void)reload;
- (void)stopLoading;
- (void)loadArchive:(id)arg1;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)_loadHTMLString:(id)arg1 baseURL:(id)arg2 unreachableURL:(id)arg3;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)_loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 unreachableURL:(id)arg5;
- (void)loadRequest:(id)arg1;
- (id)dataSource;
- (id)provisionalDataSource;
- (id)frameElement;
- (id)DOMDocument;
- (id)webView;
- (id)frameView;
- (id)name;
- (void)finalize;
- (void)dealloc;
- (id)initWithName:(id)arg1 webFrameView:(id)arg2 webView:(id)arg3;
- (id)init;
- (void)printToCGContext:(struct CGContext *)arg1:(float)arg2:(float)arg3;
- (id)pageSizeAndMarginsInPixels:(int)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(int)arg6:(int)arg7;
- (_Bool)isPageBoxVisible:(int)arg1;
- (id)pageProperty:(const char *)arg1:(int)arg2;
- (int)numberOfPages:(float)arg1:(float)arg2;
- (int)pageNumberForElement:(id)arg1:(float)arg2:(float)arg3;
- (id)counterValueForElement:(id)arg1;
- (id)renderTreeAsExternalRepresentationForPrinting:(BOOL)arg1;
- (void)_commitData:(id)arg1;
- (BOOL)_canSaveAsWebArchive;
- (BOOL)_canProvideDocumentSource;
- (void)_setTypingStyle:(id)arg1 withUndoAction:(int)arg2;
- (id)_typingStyle;
- (id)_characterRangeAtPoint:(struct CGPoint)arg1;
- (struct VisiblePosition)_visiblePositionForPoint:(struct CGPoint)arg1;
- (void)_insertParagraphSeparatorInQuotedContent;
- (void)_replaceSelectionWithNode:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4;
- (id)_documentFragmentWithNodesAsParagraphs:(id)arg1;
- (id)_documentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)_smartDeleteRangeForProposedRange:(id)arg1;
- (id)_markDOMRange;
- (struct _NSRange)_convertDOMRangeToNSRange:(id)arg1;
- (id)_convertNSRangeToDOMRange:(struct _NSRange)arg1;
- (PassRefPtr_d7fc6f43)_convertToDOMRange:(struct _NSRange)arg1;
- (struct _NSRange)_convertToNSRange:(struct Range *)arg1;
- (int)_selectionGranularity;
- (BOOL)_needsLayout;
- (void)_scrollDOMRangeToVisible:(id)arg1 withInset:(float)arg2;
- (void)_scrollDOMRangeToVisible:(id)arg1;
- (struct CGRect)_firstRectForDOMRange:(id)arg1;
- (struct CGRect)_caretRectAtPosition:(const struct Position *)arg1 affinity:(int)arg2;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(BOOL)arg2;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1;
- (BOOL)_getVisibleRect:(struct CGRect *)arg1;
- (void)_drawRect:(struct CGRect)arg1 contentsOnly:(BOOL)arg2;
- (BOOL)_shouldFlattenCompositingLayers:(struct CGContext *)arg1;
- (id)_stringForRange:(id)arg1;
- (id)_selectedString;
- (id)_markupStringFromRange:(id)arg1 nodes:(id *)arg2;
- (id)_nodesFromList:(Vector_52b24800 *)arg1;
- (id)_stringWithDocumentTypeStringAndMarkupString:(id)arg1;
- (void)_setIsCommitting:(BOOL)arg1;
- (BOOL)_isCommitting;
- (id)_dataSource;
- (void)_clearSelectionInOtherFrames;
- (id)_findFrameWithSelection;
- (void)_clearSelection;
- (BOOL)_hasSelection;
- (void)_unmarkAllMisspellings;
- (void)_unmarkAllBadGrammar;
- (id)_internalLoadDelegate;
- (void)_setInternalLoadDelegate:(id)arg1;
- (void)_updateBackgroundAndUpdatesWhileOffscreen;
- (void)_clearCoreFrame;
- (id)_initWithWebFrameView:(id)arg1 webView:(id)arg2;
- (void)_detachScriptDebugger;
- (void)_attachScriptDebugger;
- (BOOL)_isIncludedInWebKitStatistics;
- (void)_dispatchDidReceiveTitle:(id)arg1;
- (BOOL)focusedNodeHasContent;
- (id)_documentFragmentForImageData:(id)arg1 withRelativeURLPart:(id)arg2 andMIMEType:(id)arg3;
- (id)_documentFragmentForWebArchive:(id)arg1;
- (id)_documentFragmentForText:(id)arg1;
- (id)_computePageRectsWithPrintScaleFactor:(float)arg1 pageSize:(struct CGSize)arg2;
- (void)_clearOpener;
- (id)accessibilityRoot;
- (id)_layerTreeAsText;
- (void)setAccessibleName:(id)arg1;
- (struct OpaqueJSContext *)_globalContextForScriptWorld:(id)arg1;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1 withGlobalObject:(struct OpaqueJSValue *)arg2 inScriptWorld:(id)arg3;
- (BOOL)_allowsFollowingLink:(id)arg1;
- (id)_cacheabilityDictionary;
- (void)_replaceSelectionWithMarkupString:(id)arg1 baseURLString:(id)arg2 selectReplacement:(BOOL)arg3 smartReplace:(BOOL)arg4;
- (void)_replaceSelectionWithText:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3;
- (BOOL)hasRichlyEditableSelection;
- (void)removeUnchangeableStyles;
- (void)_replaceSelectionWithFragment:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4;
- (void)_resumeAnimations;
- (void)_suspendAnimations;
- (void)_replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3;
- (void)_replaceSelectionWithText:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4;
- (id)stringForRange:(id)arg1;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(BOOL)arg2;
- (void)_userScrolled;
- (void)sendScrollEvent;
- (struct __GSFont *)fontForSelection:(char *)arg1;
- (struct CGRect)firstRectForDOMRange:(id)arg1;
- (id)convertNSRangeToDOMRange:(struct _NSRange)arg1;
- (struct _NSRange)convertDOMRangeToNSRange:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectAtNode:(id)arg1 offset:(int)arg2 affinity:(int)arg3;
- (void)clearPPTStats;
- (void)getPPTStatsWithParseCount:(unsigned int *)arg1 withLayoutCount:(unsigned int *)arg2 withForcedLayoutCount:(unsigned int *)arg3 withParseDuration:(double *)arg4 withLayoutDuration:(double *)arg5;
- (void)recursiveSetUpdateAppearanceEnabled:(BOOL)arg1;
- (id)dictationResultMetadataForRange:(id)arg1;
- (void)getDictationResultRanges:(id *)arg1 andMetadatas:(id *)arg2;
- (id)interpretationsForCurrentRoot;
- (void)setDictationPhrases:(id)arg1 metadata:(id)arg2 asChildOfElement:(id)arg3;
- (void)setText:(id)arg1 asChildOfElement:(id)arg2;
- (void)confirmMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 forCandidates:(BOOL)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)markedTextDOMRange;
- (void)selectNSRange:(struct _NSRange)arg1 onElement:(id)arg2;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (BOOL)selectionAtWordStart;
- (BOOL)selectionAtSentenceStart;
- (BOOL)selectionAtDocumentStart;
- (id)wordsInCurrentParagraph;
- (BOOL)spaceFollowsWordInRange:(id)arg1;
- (int)wordOffsetInRange:(id)arg1;
- (id)wordInRange:(id)arg1;
- (id)wordRangeContainingCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (void)expandSelectionToWordContainingCaretSelection;
- (id)elementRangeContainingCaretSelection;
- (void)expandSelectionToElementContainingCaretSelection;
- (int)selectionAffinity;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 closeTyping:(BOOL)arg3;
- (id)selectedDOMRange;
- (void)setMediaDataLoadsAutomatically:(BOOL)arg1;
- (BOOL)mediaDataLoadsAutomatically;
- (BOOL)isTelephoneNumberParsingEnabled;
- (BOOL)isTelephoneNumberParsingAllowed;
- (int)layoutCount;
- (id)documentView;
- (void)setCaretColor:(struct CGColor *)arg1;
- (void)createDefaultFieldEditorDocumentStructure;
- (struct CGRect)rectForScrollToVisible;
- (struct CGRect)caretRect;
- (void)setSelectionChangeCallbacksDisabled:(BOOL)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)updateLayout;
- (int)innerLineHeight:(id)arg1;
- (int)preferredHeight;
- (BOOL)hasEditableSelection;
- (void)resetSelection;
- (void)revealSelectionAtExtent:(BOOL)arg1;
- (void)_setProhibitsScrolling:(BOOL)arg1;
- (void)_setTextAutosizingWidth:(float)arg1;
- (void)_setVisibleSize:(struct CGSize)arg1;
- (struct CGRect)renderRectForPoint:(struct CGPoint)arg1 isReplaced:(char *)arg2 fontSize:(float *)arg3;
- (id)approximateNodeAtViewportLocation:(struct CGPoint *)arg1;
- (id)scrollableNodeAtViewportLocation:(struct CGPoint)arg1;
- (id)deepestNodeAtViewportLocation:(struct CGPoint)arg1;
- (struct CGSize)renderedSizeOfNode:(id)arg1 constrainedToWidth:(float)arg2;
- (void)setNeedsLayout;
- (void)sendOrientationChangeEvent:(int)arg1;
- (void)resetTextAutosizingBeforeLayout;
- (void)_saveViewState;
- (void)_restoreViewState;
- (void)_setSelectionFromNone;
- (void)_selectAll;
- (void)_handleKeyEvent:(id)arg1;
- (void)forceLayoutAdjustingViewSize:(BOOL)arg1;
- (struct _NSRange)selectedNSRange;
- (void)selectWithoutClosingTypingNSRange:(struct _NSRange)arg1;
- (void)selectNSRange:(struct _NSRange)arg1;
- (void)resumeFromPause;
- (void)prepareForPause;
- (void)setPluginsPaused:(BOOL)arg1;
- (void)setTimeoutsPaused:(BOOL)arg1;
- (unsigned int)formElementsCharacterCount;
- (unsigned int)_numberOfActiveAnimations;
- (BOOL)_pauseTransitionOfProperty:(id)arg1 onNode:(id)arg2 atTime:(double)arg3;
- (BOOL)_pauseAnimation:(id)arg1 onNode:(id)arg2 atTime:(double)arg3;
- (void)_setExcludeFromTextSearch:(_Bool)arg1;
- (void)_setIsDisconnected:(_Bool)arg1;
- (unsigned int)_pendingFrameUnloadEventCount;
- (BOOL)_isDisplayingStandaloneImage;
- (void)_selectNSRange:(struct _NSRange)arg1;
- (struct _NSRange)_selectedNSRange;
- (id)_selectionRangeForPoint:(struct CGPoint)arg1;
- (id)_selectionRangeForFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (id)_rectsForRange:(id)arg1;
- (BOOL)_loadsSynchronously;
- (void)_setLoadsSynchronously:(BOOL)arg1;
- (BOOL)needsLayout;
- (int)_loadType;
- (BOOL)_isVisuallyNonEmpty;
- (BOOL)_firstLayoutDone;
- (BOOL)_isFrameSet;
- (struct CGColor *)_bodyBackgroundColor;
- (void)_setShouldCreateRenderers:(BOOL)arg1;
- (BOOL)_isDescendantOfFrame:(id)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (struct CGImage *)imageForNode:(id)arg1 allowDownsampling:(BOOL)arg2 drawContentBehindTransparentNodes:(BOOL)arg3;
- (BOOL)renderedCharactersExceed:(unsigned int)arg1;
- (id)endPosition;
- (id)startPosition;
- (void)smartExtendRangedSelection:(int)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (void)moveSelectionToPoint:(struct CGPoint)arg1;
- (void)moveSelectionToEnd;
- (void)moveSelectionToStart;
- (void)setBaseWritingDirection:(int)arg1;
- (void)toggleBaseWritingDirection;
- (int)selectionBaseWritingDirection;
- (void)expandSelectionToSentence;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)ensureRangedSelectionContainsInitialStartPoint:(struct CGPoint)arg1 initialEndPoint:(struct CGPoint)arg2;
- (void)setSelectionWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (BOOL)setSelectionWithBasePoint:(struct CGPoint)arg1 extentPoint:(struct CGPoint)arg2 baseIsStart:(BOOL)arg3;
- (BOOL)setSelectionWithBasePoint:(struct CGPoint)arg1 extentPoint:(struct CGPoint)arg2 baseIsStart:(BOOL)arg3 allowFlipping:(BOOL)arg4;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg1;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)setRangedSelectionBaseToCurrentSelection;
- (id)webVisiblePositionForPoint:(struct CGPoint)arg1;
- (id)wordAtPoint:(struct CGPoint)arg1;
- (id)selectionRects;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionRectsForCoreRange:(struct Range *)arg1;
- (void)extendSelection:(BOOL)arg1;
- (void)collapseSelection;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (BOOL)hasSelection;
- (int)selectionState;
- (void)clearSelection;
- (void)setIsSingleLine:(BOOL)arg1;
- (BOOL)isSingleLine;
- (struct VisiblePosition)closestWordBoundary:(struct VisiblePosition)arg1;
- (struct VisiblePosition)visiblePositionForPoint:(struct CGPoint)arg1;
- (struct Frame *)coreFrame;

@end

