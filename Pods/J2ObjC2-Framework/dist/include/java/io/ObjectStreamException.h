//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/ObjectStreamException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoObjectStreamException")
#ifdef RESTRICT_JavaIoObjectStreamException
#define INCLUDE_ALL_JavaIoObjectStreamException 0
#else
#define INCLUDE_ALL_JavaIoObjectStreamException 1
#endif
#undef RESTRICT_JavaIoObjectStreamException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoObjectStreamException_) && (INCLUDE_ALL_JavaIoObjectStreamException || defined(INCLUDE_JavaIoObjectStreamException))
#define JavaIoObjectStreamException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

/*!
 @brief Superclass of all exceptions specific to Object Stream classes.
 @author unascribed
 @since JDK1.1
 */
@interface JavaIoObjectStreamException : JavaIoIOException

#pragma mark Protected

/*!
 @brief Create an ObjectStreamException.
 */
- (instancetype __nonnull)init;

/*!
 @brief Create an ObjectStreamException with the specified argument.
 @param classname the detailed message for the exception
 */
- (instancetype __nonnull)initWithNSString:(NSString *)classname;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectStreamException)

FOUNDATION_EXPORT void JavaIoObjectStreamException_initWithNSString_(JavaIoObjectStreamException *self, NSString *classname);

FOUNDATION_EXPORT void JavaIoObjectStreamException_init(JavaIoObjectStreamException *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectStreamException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoObjectStreamException")
