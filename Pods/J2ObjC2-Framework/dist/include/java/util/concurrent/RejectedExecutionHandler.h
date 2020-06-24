//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/RejectedExecutionHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentRejectedExecutionHandler")
#ifdef RESTRICT_JavaUtilConcurrentRejectedExecutionHandler
#define INCLUDE_ALL_JavaUtilConcurrentRejectedExecutionHandler 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentRejectedExecutionHandler 1
#endif
#undef RESTRICT_JavaUtilConcurrentRejectedExecutionHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentRejectedExecutionHandler_) && (INCLUDE_ALL_JavaUtilConcurrentRejectedExecutionHandler || defined(INCLUDE_JavaUtilConcurrentRejectedExecutionHandler))
#define JavaUtilConcurrentRejectedExecutionHandler_

@class JavaUtilConcurrentThreadPoolExecutor;
@protocol JavaLangRunnable;

/*!
 @brief A handler for tasks that cannot be executed by a <code>ThreadPoolExecutor</code>.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentRejectedExecutionHandler < JavaObject >

/*!
 @brief Method that may be invoked by a <code>ThreadPoolExecutor</code> when 
 <code>execute</code> cannot accept a
  task.This may occur when no more threads or queue slots are
  available because their bounds would be exceeded, or upon
  shutdown of the Executor.
 <p>In the absence of other alternatives, the method may throw
  an unchecked <code>RejectedExecutionException</code>, which will be
  propagated to the caller of <code>execute</code>.
 @param r the runnable task requested to be executed
 @param executor the executor attempting to execute this task
 @throw RejectedExecutionExceptionif there is no remedy
 */
- (void)rejectedExecutionWithJavaLangRunnable:(id<JavaLangRunnable>)r
     withJavaUtilConcurrentThreadPoolExecutor:(JavaUtilConcurrentThreadPoolExecutor *)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentRejectedExecutionHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentRejectedExecutionHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentRejectedExecutionHandler")
