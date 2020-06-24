//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/eventbus/AllowConcurrentEvents.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusAllowConcurrentEvents")
#ifdef RESTRICT_ComGoogleCommonEventbusAllowConcurrentEvents
#define INCLUDE_ALL_ComGoogleCommonEventbusAllowConcurrentEvents 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusAllowConcurrentEvents 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusAllowConcurrentEvents

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEventbusAllowConcurrentEvents_) && (INCLUDE_ALL_ComGoogleCommonEventbusAllowConcurrentEvents || defined(INCLUDE_ComGoogleCommonEventbusAllowConcurrentEvents))
#define ComGoogleCommonEventbusAllowConcurrentEvents_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Marks an event subscriber method as being thread-safe.This annotation indicates that EventBus
  may invoke the event subscriber simultaneously from multiple threads.
 <p>This does not mark the method, and so should be used in combination with <code>Subscribe</code>.
 @author Cliff Biffle
 @since 10.0
 */
@protocol ComGoogleCommonEventbusAllowConcurrentEvents < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleCommonEventbusAllowConcurrentEvents : NSObject < ComGoogleCommonEventbusAllowConcurrentEvents >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusAllowConcurrentEvents)

FOUNDATION_EXPORT id<ComGoogleCommonEventbusAllowConcurrentEvents> create_ComGoogleCommonEventbusAllowConcurrentEvents(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusAllowConcurrentEvents)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusAllowConcurrentEvents")
