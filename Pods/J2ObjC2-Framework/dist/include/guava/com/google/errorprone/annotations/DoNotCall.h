//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/errorprone/annotations/DoNotCall.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsDoNotCall")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsDoNotCall
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsDoNotCall 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsDoNotCall 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsDoNotCall

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleErrorproneAnnotationsDoNotCall_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsDoNotCall || defined(INCLUDE_ComGoogleErrorproneAnnotationsDoNotCall))
#define ComGoogleErrorproneAnnotationsDoNotCall_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

/*!
 @brief The method to which this annotation is applied cannot be called.
 <p>The annotation is applied to methods that are required to satisfy the contract of an
  interface, but that are not supported. One example is the implementation of <code>java.util.Collection</code>
  in an immutable collection implementation. 
 <p>Marking methods annotated with <code>@@DoNotCall</code> as <code>@@Deprecated</code> is recommended, since
  it provides IDE users with more immediate feedback.
 */
@protocol ComGoogleErrorproneAnnotationsDoNotCall < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsDoNotCall)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsDoNotCall)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsDoNotCall")
