//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/RecursiveTask.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentRecursiveTask")
#ifdef RESTRICT_JavaUtilConcurrentRecursiveTask
#define INCLUDE_ALL_JavaUtilConcurrentRecursiveTask 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentRecursiveTask 1
#endif
#undef RESTRICT_JavaUtilConcurrentRecursiveTask

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentRecursiveTask_) && (INCLUDE_ALL_JavaUtilConcurrentRecursiveTask || defined(INCLUDE_JavaUtilConcurrentRecursiveTask))
#define JavaUtilConcurrentRecursiveTask_

#define RESTRICT_JavaUtilConcurrentForkJoinTask 1
#define INCLUDE_JavaUtilConcurrentForkJoinTask 1
#include "java/util/concurrent/ForkJoinTask.h"

/*!
 @brief A recursive result-bearing <code>ForkJoinTask</code>.
 <p>For a classic example, here is a task computing Fibonacci numbers: 
 @code
  class Fibonacci extends RecursiveTask<Integer> {
    final int n;
    Fibonacci(int n) { this.n = n; }
    protected Integer compute() {
      if (n <= 1)
        return n;
      Fibonacci f1 = new Fibonacci(n - 1);
      f1.fork();
      Fibonacci f2 = new Fibonacci(n - 2);
      return f2.compute() + f1.join();
    }  }
 
@endcode
  However, besides being a dumb way to compute Fibonacci functions
  (there is a simple fast linear algorithm that you'd use in
  practice), this is likely to perform poorly because the smallest
  subtasks are too small to be worthwhile splitting up. Instead, as
  is the case for nearly all fork/join applications, you'd pick some
  minimum granularity size (for example 10 here) for which you always
  sequentially solve rather than subdividing.
 @since 1.7
 @author Doug Lea
 */
@interface JavaUtilConcurrentRecursiveTask : JavaUtilConcurrentForkJoinTask {
 @public
  /*!
   @brief The result of the computation.
   */
  id result_;
}

#pragma mark Public

- (instancetype __nonnull)init;

- (id)getRawResult;

#pragma mark Protected

/*!
 @brief The main computation performed by this task.
 @return the result of the computation
 */
- (id)compute;

/*!
 @brief Implements execution conventions for RecursiveTask.
 */
- (jboolean)exec;

- (void)setRawResultWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentRecursiveTask)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentRecursiveTask, result_, id)

FOUNDATION_EXPORT void JavaUtilConcurrentRecursiveTask_init(JavaUtilConcurrentRecursiveTask *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentRecursiveTask)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentRecursiveTask")
