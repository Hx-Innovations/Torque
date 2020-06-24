//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/PeekingIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectPeekingIterator")
#ifdef RESTRICT_ComGoogleCommonCollectPeekingIterator
#define INCLUDE_ALL_ComGoogleCommonCollectPeekingIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectPeekingIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectPeekingIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectPeekingIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectPeekingIterator || defined(INCLUDE_ComGoogleCommonCollectPeekingIterator))
#define ComGoogleCommonCollectPeekingIterator_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "java/util/Iterator.h"

/*!
 @brief An iterator that supports a one-element lookahead while iterating.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/CollectionHelpersExplained#peekingiterator">
  <code>PeekingIterator</code>
 </a>.
 @author Mick Killianey
 @since 2.0
 */
@protocol ComGoogleCommonCollectPeekingIterator < JavaUtilIterator, JavaObject >

/*!
 @brief Returns the next element in the iteration, without advancing the iteration.
 <p>Calls to <code>peek()</code> should not change the state of the iteration, except that it 
 <i>may</i> prevent removal of the most recent element via <code>remove()</code>.
 @throw NoSuchElementExceptionif the iteration has no more elements according to <code>hasNext()</code>
 */
- (id)peek;

/*!
 @brief <p>The objects returned by consecutive calls to <code>peek()</code> then <code>next()</code> are
  guaranteed to be equal to each other.
 */
- (id)next;

/*!
 @brief <p>Implementations may or may not support removal when a call to <code>peek()</code> has occurred
  since the most recent call to <code>next()</code>.
 @throw IllegalStateExceptionif there has been a call to <code>peek()</code> since the most recent
      call to <code>next()</code> and this implementation does not support this sequence of calls
      (optional)
 */
- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectPeekingIterator)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectPeekingIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectPeekingIterator")
