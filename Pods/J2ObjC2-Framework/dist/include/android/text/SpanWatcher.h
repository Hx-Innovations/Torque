//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/SpanWatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidTextSpanWatcher")
#ifdef RESTRICT_AndroidTextSpanWatcher
#define INCLUDE_ALL_AndroidTextSpanWatcher 0
#else
#define INCLUDE_ALL_AndroidTextSpanWatcher 1
#endif
#undef RESTRICT_AndroidTextSpanWatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidTextSpanWatcher_) && (INCLUDE_ALL_AndroidTextSpanWatcher || defined(INCLUDE_AndroidTextSpanWatcher))
#define AndroidTextSpanWatcher_

#define RESTRICT_AndroidTextNoCopySpan 1
#define INCLUDE_AndroidTextNoCopySpan 1
#include "android/text/NoCopySpan.h"

@protocol AndroidTextSpannable;

/*!
 @brief When an object of this type is attached to a Spannable, its methods
  will be called to notify it that other markup objects have been
  added, changed, or removed.
 */
@protocol AndroidTextSpanWatcher < AndroidTextNoCopySpan, JavaObject >

/*!
 @brief This method is called to notify you that the specified object
  has been attached to the specified range of the text.
 */
- (void)onSpanAddedWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                     withId:(id)what
                                    withInt:(jint)start
                                    withInt:(jint)end;

/*!
 @brief This method is called to notify you that the specified object
  has been detached from the specified range of the text.
 */
- (void)onSpanRemovedWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                       withId:(id)what
                                      withInt:(jint)start
                                      withInt:(jint)end;

/*!
 @brief This method is called to notify you that the specified object
  has been relocated from the range <code>ostart&hellip;oend</code>
  to the new range <code>nstart&hellip;nend</code> of the text.
 */
- (void)onSpanChangedWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                       withId:(id)what
                                      withInt:(jint)ostart
                                      withInt:(jint)oend
                                      withInt:(jint)nstart
                                      withInt:(jint)nend;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextSpanWatcher)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSpanWatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTextSpanWatcher")
