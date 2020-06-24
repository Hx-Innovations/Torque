//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/base/FinalizableWeakReference.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizableWeakReference")
#ifdef RESTRICT_ComGoogleCommonBaseFinalizableWeakReference
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizableWeakReference 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizableWeakReference 1
#endif
#undef RESTRICT_ComGoogleCommonBaseFinalizableWeakReference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseFinalizableWeakReference_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableWeakReference || defined(INCLUDE_ComGoogleCommonBaseFinalizableWeakReference))
#define ComGoogleCommonBaseFinalizableWeakReference_

#define RESTRICT_JavaLangRefWeakReference 1
#define INCLUDE_JavaLangRefWeakReference 1
#include "java/lang/ref/WeakReference.h"

#define RESTRICT_ComGoogleCommonBaseFinalizableReference 1
#define INCLUDE_ComGoogleCommonBaseFinalizableReference 1
#include "com/google/common/base/FinalizableReference.h"

@class ComGoogleCommonBaseFinalizableReferenceQueue;

/*!
 @brief Weak reference with a <code>finalizeReferent()</code> method which a background thread invokes after
  the garbage collector reclaims the referent.This is a simpler alternative to using a <code>ReferenceQueue</code>
 .
 @author Bob Lee
 @since 2.0
 */
@interface ComGoogleCommonBaseFinalizableWeakReference : JavaLangRefWeakReference < ComGoogleCommonBaseFinalizableReference >

#pragma mark Protected

/*!
 @brief Constructs a new finalizable weak reference.
 @param referent to weakly reference
 @param queue that should finalize the referent
 */
- (instancetype __nonnull)initWithId:(id)referent
withComGoogleCommonBaseFinalizableReferenceQueue:(ComGoogleCommonBaseFinalizableReferenceQueue *)queue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizableWeakReference)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizableWeakReference_initWithId_withComGoogleCommonBaseFinalizableReferenceQueue_(ComGoogleCommonBaseFinalizableWeakReference *self, id referent, ComGoogleCommonBaseFinalizableReferenceQueue *queue);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableWeakReference)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizableWeakReference")
