//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/misusing/NotAMockException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingNotAMockException")
#ifdef RESTRICT_OrgMockitoExceptionsMisusingNotAMockException
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingNotAMockException 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingNotAMockException 1
#endif
#undef RESTRICT_OrgMockitoExceptionsMisusingNotAMockException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoExceptionsMisusingNotAMockException_) && (INCLUDE_ALL_OrgMockitoExceptionsMisusingNotAMockException || defined(INCLUDE_OrgMockitoExceptionsMisusingNotAMockException))
#define OrgMockitoExceptionsMisusingNotAMockException_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoException 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoException 1
#include "org/mockito/exceptions/base/MockitoException.h"

@class JavaLangThrowable;

@interface OrgMockitoExceptionsMisusingNotAMockException : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsMisusingNotAMockException)

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingNotAMockException_initWithNSString_(OrgMockitoExceptionsMisusingNotAMockException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingNotAMockException *new_OrgMockitoExceptionsMisusingNotAMockException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingNotAMockException *create_OrgMockitoExceptionsMisusingNotAMockException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsMisusingNotAMockException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingNotAMockException")
