//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/HashMultimapGwtSerializationDependencies.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectHashMultimapGwtSerializationDependencies")
#ifdef RESTRICT_ComGoogleCommonCollectHashMultimapGwtSerializationDependencies
#define INCLUDE_ALL_ComGoogleCommonCollectHashMultimapGwtSerializationDependencies 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectHashMultimapGwtSerializationDependencies 1
#endif
#undef RESTRICT_ComGoogleCommonCollectHashMultimapGwtSerializationDependencies

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectHashMultimapGwtSerializationDependencies_) && (INCLUDE_ALL_ComGoogleCommonCollectHashMultimapGwtSerializationDependencies || defined(INCLUDE_ComGoogleCommonCollectHashMultimapGwtSerializationDependencies))
#define ComGoogleCommonCollectHashMultimapGwtSerializationDependencies_

#define RESTRICT_ComGoogleCommonCollectAbstractSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractSetMultimap 1
#include "com/google/common/collect/AbstractSetMultimap.h"

@protocol JavaUtilMap;

/*!
 @brief A dummy superclass to support GWT serialization of the element types of a <code>HashMultimap</code>.
 The GWT supersource for this class contains a field for each type. 
 <p>For details about this hack, see <code>GwtSerializationDependencies</code>, which takes the same
  approach but with a subclass rather than a superclass. 
 <p>TODO(cpovirk): Consider applying this subclass approach to our other types.
 */
@interface ComGoogleCommonCollectHashMultimapGwtSerializationDependencies : ComGoogleCommonCollectAbstractSetMultimap

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)map;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashMultimapGwtSerializationDependencies)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashMultimapGwtSerializationDependencies_initWithJavaUtilMap_(ComGoogleCommonCollectHashMultimapGwtSerializationDependencies *self, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashMultimapGwtSerializationDependencies)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectHashMultimapGwtSerializationDependencies")
