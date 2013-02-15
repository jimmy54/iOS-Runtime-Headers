/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface AXReaderWriterLock : NSObject {
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSString *label;
}

@property(copy) NSString * label;

+ (id)_copyQueueLabelWithString:(id)arg1 shouldAppendUUID:(BOOL)arg2;

- (void)_setLabel:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2;
- (id)label;
- (void)performAsynchronousReadingBlock:(id)arg1;
- (void)performAsynchronousWritingBlock:(id)arg1;
- (void)performReadingBlock:(id)arg1;
- (void)performWritingBlock:(id)arg1;

@end