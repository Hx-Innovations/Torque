//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/Interners.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectInterners")
#ifdef RESTRICT_ComGoogleCommonCollectInterners
#define INCLUDE_ALL_ComGoogleCommonCollectInterners 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectInterners 1
#endif
#undef RESTRICT_ComGoogleCommonCollectInterners

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectInterners_) && (INCLUDE_ALL_ComGoogleCommonCollectInterners || defined(INCLUDE_ComGoogleCommonCollectInterners))
#define ComGoogleCommonCollectInterners_

@class ComGoogleCommonCollectInterners_InternerBuilder;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonCollectInterner;

/*!
 @brief Contains static methods pertaining to instances of <code>Interner</code>.
 @author Kevin Bourrillion
 @since 3.0
 */
@interface ComGoogleCommonCollectInterners : NSObject

#pragma mark Public

/*!
 @brief Returns a function that delegates to the <code>Interner.intern</code> method of the given interner.
 @since 8.0
 */
+ (id<ComGoogleCommonBaseFunction>)asFunctionWithComGoogleCommonCollectInterner:(id<ComGoogleCommonCollectInterner>)interner;

/*!
 @brief Returns a fresh <code>InternerBuilder</code> instance.
 */
+ (ComGoogleCommonCollectInterners_InternerBuilder *)newBuilder OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new thread-safe interner which retains a strong reference to each instance it has
  interned, thus preventing these instances from being garbage-collected.If this retention is
  acceptable, this implementation may perform better than <code>newWeakInterner</code>.
 */
+ (id<ComGoogleCommonCollectInterner>)newStrongInterner OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new thread-safe interner which retains a weak reference to each instance it has
  interned, and so does not prevent these instances from being garbage-collected.This most
  likely does not perform as well as <code>newStrongInterner</code>, but is the best alternative when
  the memory usage of that implementation is unacceptable.
 */
+ (id<ComGoogleCommonCollectInterner>)newWeakInterner OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectInterners)

FOUNDATION_EXPORT ComGoogleCommonCollectInterners_InternerBuilder *ComGoogleCommonCollectInterners_newBuilder(void);

FOUNDATION_EXPORT id<ComGoogleCommonCollectInterner> ComGoogleCommonCollectInterners_newStrongInterner(void);

FOUNDATION_EXPORT id<ComGoogleCommonCollectInterner> ComGoogleCommonCollectInterners_newWeakInterner(void);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonCollectInterners_asFunctionWithComGoogleCommonCollectInterner_(id<ComGoogleCommonCollectInterner> interner);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectInterners)

#endif

#if !defined (ComGoogleCommonCollectInterners_InternerBuilder_) && (INCLUDE_ALL_ComGoogleCommonCollectInterners || defined(INCLUDE_ComGoogleCommonCollectInterners_InternerBuilder))
#define ComGoogleCommonCollectInterners_InternerBuilder_

@protocol ComGoogleCommonCollectInterner;

/*!
 @brief Builder for <code>Interner</code> instances.
 @since 21.0
 */
@interface ComGoogleCommonCollectInterners_InternerBuilder : NSObject

#pragma mark Public

- (id<ComGoogleCommonCollectInterner>)build;

/*!
 @brief Sets the concurrency level that will be used by the to-be-built <code>Interner</code>.
 - seealso: MapMaker#concurrencyLevel(int)
 */
- (ComGoogleCommonCollectInterners_InternerBuilder *)concurrencyLevelWithInt:(jint)concurrencyLevel;

/*!
 @brief Instructs the <code>InternerBuilder</code> to build a strong interner.
 - seealso: Interners#newStrongInterner()
 */
- (ComGoogleCommonCollectInterners_InternerBuilder *)strong;

/*!
 @brief Instructs the <code>InternerBuilder</code> to build a weak interner.
 - seealso: Interners#newWeakInterner()
 */
- (ComGoogleCommonCollectInterners_InternerBuilder *)weak;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectInterners_InternerBuilder)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectInterners_InternerBuilder)

#endif

#if !defined (ComGoogleCommonCollectInterners_InternerImpl_) && (INCLUDE_ALL_ComGoogleCommonCollectInterners || defined(INCLUDE_ComGoogleCommonCollectInterners_InternerImpl))
#define ComGoogleCommonCollectInterners_InternerImpl_

#define RESTRICT_ComGoogleCommonCollectInterner 1
#define INCLUDE_ComGoogleCommonCollectInterner 1
#include "com/google/common/collect/Interner.h"

@class ComGoogleCommonCollectMapMakerInternalMap;

@interface ComGoogleCommonCollectInterners_InternerImpl : NSObject < ComGoogleCommonCollectInterner > {
 @public
  ComGoogleCommonCollectMapMakerInternalMap *map_;
}

#pragma mark Public

- (id)internWithId:(id)sample;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectInterners_InternerImpl)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectInterners_InternerImpl, map_, ComGoogleCommonCollectMapMakerInternalMap *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectInterners_InternerImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectInterners")
