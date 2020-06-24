//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/reflect/Parameter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectParameter")
#ifdef RESTRICT_ComGoogleCommonReflectParameter
#define INCLUDE_ALL_ComGoogleCommonReflectParameter 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectParameter 1
#endif
#undef RESTRICT_ComGoogleCommonReflectParameter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectParameter_) && (INCLUDE_ALL_ComGoogleCommonReflectParameter || defined(INCLUDE_ComGoogleCommonReflectParameter))
#define ComGoogleCommonReflectParameter_

#define RESTRICT_JavaLangReflectAnnotatedElement 1
#define INCLUDE_JavaLangReflectAnnotatedElement 1
#include "java/lang/reflect/AnnotatedElement.h"

@class ComGoogleCommonReflectInvokable;
@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaLangReflectAnnotatedType;

/*!
 @brief Represents a method or constructor parameter.
 @author Ben Yu
 @since 14.0
 */
@interface ComGoogleCommonReflectParameter : NSObject < JavaLangReflectAnnotatedElement >

#pragma mark Public

- (jboolean)isEqual:(id __nullable)obj;

/*!
 @since 25.1
 */
- (id<JavaLangReflectAnnotatedType>)getAnnotatedType;

- (id<JavaLangAnnotationAnnotation>)getAnnotationWithIOSClass:(IOSClass *)annotationType;

- (IOSObjectArray *)getAnnotations;

/*!
 @since 18.0
 */
- (IOSObjectArray *)getAnnotationsByTypeWithIOSClass:(IOSClass *)annotationType;

/*!
 @since 18.0
 */
- (id<JavaLangAnnotationAnnotation>)getDeclaredAnnotationWithIOSClass:(IOSClass *)annotationType;

/*!
 @since 18.0
 */
- (IOSObjectArray *)getDeclaredAnnotations;

/*!
 @since 18.0
 */
- (IOSObjectArray *)getDeclaredAnnotationsByTypeWithIOSClass:(IOSClass *)annotationType;

/*!
 @brief Returns the <code>Invokable</code> that declares this parameter.
 */
- (ComGoogleCommonReflectInvokable *)getDeclaringInvokable;

/*!
 @brief Returns the type of the parameter.
 */
- (ComGoogleCommonReflectTypeToken *)getType;

- (NSUInteger)hash;

- (jboolean)isAnnotationPresentWithIOSClass:(IOSClass *)annotationType;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonReflectInvokable:(ComGoogleCommonReflectInvokable *)declaration
                                                          withInt:(jint)position
                              withComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type
                            withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations
                                 withJavaLangReflectAnnotatedType:(id<JavaLangReflectAnnotatedType>)annotatedType;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectParameter)

FOUNDATION_EXPORT void ComGoogleCommonReflectParameter_initWithComGoogleCommonReflectInvokable_withInt_withComGoogleCommonReflectTypeToken_withJavaLangAnnotationAnnotationArray_withJavaLangReflectAnnotatedType_(ComGoogleCommonReflectParameter *self, ComGoogleCommonReflectInvokable *declaration, jint position, ComGoogleCommonReflectTypeToken *type, IOSObjectArray *annotations, id<JavaLangReflectAnnotatedType> annotatedType);

FOUNDATION_EXPORT ComGoogleCommonReflectParameter *new_ComGoogleCommonReflectParameter_initWithComGoogleCommonReflectInvokable_withInt_withComGoogleCommonReflectTypeToken_withJavaLangAnnotationAnnotationArray_withJavaLangReflectAnnotatedType_(ComGoogleCommonReflectInvokable *declaration, jint position, ComGoogleCommonReflectTypeToken *type, IOSObjectArray *annotations, id<JavaLangReflectAnnotatedType> annotatedType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectParameter *create_ComGoogleCommonReflectParameter_initWithComGoogleCommonReflectInvokable_withInt_withComGoogleCommonReflectTypeToken_withJavaLangAnnotationAnnotationArray_withJavaLangReflectAnnotatedType_(ComGoogleCommonReflectInvokable *declaration, jint position, ComGoogleCommonReflectTypeToken *type, IOSObjectArray *annotations, id<JavaLangReflectAnnotatedType> annotatedType);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectParameter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectParameter")
