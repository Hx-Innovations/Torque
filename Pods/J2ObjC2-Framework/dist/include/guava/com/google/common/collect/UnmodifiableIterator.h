//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/UnmodifiableIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableIterator")
#ifdef RESTRICT_ComGoogleCommonCollectUnmodifiableIterator
#define INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectUnmodifiableIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectUnmodifiableIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableIterator || defined(INCLUDE_ComGoogleCommonCollectUnmodifiableIterator))
#define ComGoogleCommonCollectUnmodifiableIterator_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "java/util/Iterator.h"

@protocol JavaUtilFunctionConsumer;

/*!
 @brief An iterator that does not support <code>remove</code>.
 <p><code>UnmodifiableIterator</code> is used primarily in conjunction with implementations of <code>ImmutableCollection</code>
 , such as <code>ImmutableList</code>. You can, however, convert an existing
  iterator to an <code>UnmodifiableIterator</code> using <code>Iterators.unmodifiableIterator</code>.
 @author Jared Levy
 @since 2.0
 */
@interface ComGoogleCommonCollectUnmodifiableIterator : NSObject < JavaUtilIterator >

#pragma mark Public

/*!
 @brief Guaranteed to throw an exception and leave the underlying data unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)remove __attribute__((deprecated));

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectUnmodifiableIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectUnmodifiableIterator_init(ComGoogleCommonCollectUnmodifiableIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectUnmodifiableIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableIterator")
