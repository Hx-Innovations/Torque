//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/util/concurrent/AbstractService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAbstractService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAbstractService

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAbstractService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractService || defined(INCLUDE_ComGoogleCommonUtilConcurrentAbstractService))
#define ComGoogleCommonUtilConcurrentAbstractService_

#define RESTRICT_ComGoogleCommonUtilConcurrentService 1
#define INCLUDE_ComGoogleCommonUtilConcurrentService 1
#include "com/google/common/util/concurrent/Service.h"

@class ComGoogleCommonUtilConcurrentService_Listener;
@class ComGoogleCommonUtilConcurrentService_State;
@class JavaLangThrowable;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilConcurrentExecutor;

/*!
 @brief Base class for implementing services that can handle <code>doStart</code> and <code>doStop</code>
  requests, responding to them with <code>notifyStarted()</code> and <code>notifyStopped()</code>
  callbacks.Its subclasses must manage threads manually; consider <code>AbstractExecutionThreadService</code>
  if you need only a single execution thread.
 @author Jesse Wilson
 @author Luke Sandberg
 @since 1.0
 */
@interface ComGoogleCommonUtilConcurrentAbstractService : NSObject < ComGoogleCommonUtilConcurrentService >

#pragma mark Public

/*!
 @since 13.0
 */
- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(ComGoogleCommonUtilConcurrentService_Listener *)listener
                                      withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)awaitRunning;

- (void)awaitRunningWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)awaitTerminated;

- (void)awaitTerminatedWithLong:(jlong)timeout
 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @since 14.0
 */
- (JavaLangThrowable *)failureCause;

- (jboolean)isRunning;

- (id<ComGoogleCommonUtilConcurrentService>)startAsync;

- (ComGoogleCommonUtilConcurrentService_State *)state;

- (id<ComGoogleCommonUtilConcurrentService>)stopAsync;

- (NSString *)description;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

/*!
 @brief This method is called by <code>startAsync</code> to initiate service startup.The invocation of
  this method should cause a call to <code>notifyStarted()</code>, either during this method's run,
  or after it has returned.
 If startup fails, the invocation should cause a call to <code>notifyFailed(Throwable)</code>
  instead. 
 <p>This method should return promptly; prefer to do work on a different thread where it is
  convenient. It is invoked exactly once on service startup, even when <code>startAsync</code> is
  called multiple times.
 */
- (void)doStart;

/*!
 @brief This method should be used to initiate service shutdown.The invocation of this method should
  cause a call to <code>notifyStopped()</code>, either during this method's run, or after it has
  returned.
 If shutdown fails, the invocation should cause a call to <code>notifyFailed(Throwable)</code>
  instead. 
 <p>This method should return promptly; prefer to do work on a different thread where it is
  convenient. It is invoked exactly once on service shutdown, even when <code>stopAsync</code> is
  called multiple times.
 */
- (void)doStop;

/*!
 @brief Invoke this method to transition the service to the <code>State.FAILED</code>.The service will 
 <b>not be stopped</b> if it is running.
 Invoke this method when a service has failed critically
  or otherwise cannot be started nor stopped.
 */
- (void)notifyFailedWithJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Implementing classes should invoke this method once their service has started.It will cause
  the service to transition from <code>State.STARTING</code> to <code>State.RUNNING</code>.
 @throw IllegalStateExceptionif the service is not <code>State.STARTING</code>.
 */
- (void)notifyStarted;

/*!
 @brief Implementing classes should invoke this method once their service has stopped.It will cause
  the service to transition from <code>State.STOPPING</code> to <code>State.TERMINATED</code>.
 @throw IllegalStateExceptionif the service is neither <code>State.STOPPING</code> nor <code>State.RUNNING</code>
 .
 */
- (void)notifyStopped;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractService_init(ComGoogleCommonUtilConcurrentAbstractService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractService")
