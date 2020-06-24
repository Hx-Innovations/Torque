//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/JdkBackedImmutableSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableSet")
#ifdef RESTRICT_ComGoogleCommonCollectJdkBackedImmutableSet
#define INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectJdkBackedImmutableSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectJdkBackedImmutableSet_) && (INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableSet || defined(INCLUDE_ComGoogleCommonCollectJdkBackedImmutableSet))
#define ComGoogleCommonCollectJdkBackedImmutableSet_

#define RESTRICT_ComGoogleCommonCollectIndexedImmutableSet 1
#define INCLUDE_ComGoogleCommonCollectIndexedImmutableSet 1
#include "com/google/common/collect/IndexedImmutableSet.h"

@class ComGoogleCommonCollectImmutableList;
@protocol JavaUtilSet;

/*!
 @brief ImmutableSet implementation backed by a JDK HashSet, used to defend against apparent hash
  flooding.This implementation is never used on the GWT client side, but it must be present there
  for serialization to work.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectJdkBackedImmutableSet : ComGoogleCommonCollectIndexedImmutableSet

#pragma mark Public

- (jboolean)containsWithId:(id __nullable)object;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilSet:(id<JavaUtilSet>)delegate
      withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)delegateList;

- (id)getWithInt:(jint)index;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectJdkBackedImmutableSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectJdkBackedImmutableSet_initWithJavaUtilSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectJdkBackedImmutableSet *self, id<JavaUtilSet> delegate, ComGoogleCommonCollectImmutableList *delegateList);

FOUNDATION_EXPORT ComGoogleCommonCollectJdkBackedImmutableSet *new_ComGoogleCommonCollectJdkBackedImmutableSet_initWithJavaUtilSet_withComGoogleCommonCollectImmutableList_(id<JavaUtilSet> delegate, ComGoogleCommonCollectImmutableList *delegateList) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectJdkBackedImmutableSet *create_ComGoogleCommonCollectJdkBackedImmutableSet_initWithJavaUtilSet_withComGoogleCommonCollectImmutableList_(id<JavaUtilSet> delegate, ComGoogleCommonCollectImmutableList *delegateList);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectJdkBackedImmutableSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableSet")
