//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/AbstractSequentialIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSequentialIterator")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractSequentialIterator
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSequentialIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSequentialIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractSequentialIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractSequentialIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractSequentialIterator || defined(INCLUDE_ComGoogleCommonCollectAbstractSequentialIterator))
#define ComGoogleCommonCollectAbstractSequentialIterator_

#define RESTRICT_ComGoogleCommonCollectUnmodifiableIterator 1
#define INCLUDE_ComGoogleCommonCollectUnmodifiableIterator 1
#include "com/google/common/collect/UnmodifiableIterator.h"

/*!
 @brief This class provides a skeletal implementation of the <code>Iterator</code> interface for sequences
  whose next element can always be derived from the previous element.Null elements are not
  supported, nor is the <code>remove()</code> method.
 <p>Example:
  
 @code
 Iterator<Integer> powersOfTwo =
      new AbstractSequentialIterator<Integer>(1) {
        protected Integer computeNext(Integer previous) {
          return (previous == 1 << 30) ? null : previous * 2;
        }
      }; 
 
@endcode
 @author Chris Povirk
 @since 12.0 (in Guava as <code>AbstractLinkedIterator</code> since 8.0)
 */
@interface ComGoogleCommonCollectAbstractSequentialIterator : ComGoogleCommonCollectUnmodifiableIterator

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

#pragma mark Protected

/*!
 @brief Creates a new iterator with the given first element, or, if <code>firstOrNull</code> is null,
  creates a new empty iterator.
 */
- (instancetype __nonnull)initWithId:(id)firstOrNull;

/*!
 @brief Returns the element that follows <code>previous</code>, or returns <code>null</code> if no elements
  remain.This method is invoked during each call to <code>next()</code> in order to compute the
  result of a <i>future</i> call to <code>next()</code>.
 */
- (id)computeNextWithId:(id)previous;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractSequentialIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSequentialIterator_initWithId_(ComGoogleCommonCollectAbstractSequentialIterator *self, id firstOrNull);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractSequentialIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSequentialIterator")
