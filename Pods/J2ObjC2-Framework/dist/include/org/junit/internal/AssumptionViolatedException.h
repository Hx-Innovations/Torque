//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/junit/internal/AssumptionViolatedException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalAssumptionViolatedException")
#ifdef RESTRICT_OrgJunitInternalAssumptionViolatedException
#define INCLUDE_ALL_OrgJunitInternalAssumptionViolatedException 0
#else
#define INCLUDE_ALL_OrgJunitInternalAssumptionViolatedException 1
#endif
#undef RESTRICT_OrgJunitInternalAssumptionViolatedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalAssumptionViolatedException_) && (INCLUDE_ALL_OrgJunitInternalAssumptionViolatedException || defined(INCLUDE_OrgJunitInternalAssumptionViolatedException))
#define OrgJunitInternalAssumptionViolatedException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

#define RESTRICT_OrgHamcrestSelfDescribing 1
#define INCLUDE_OrgHamcrestSelfDescribing 1
#include "org/hamcrest/SelfDescribing.h"

@class JavaLangThrowable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

/*!
 @brief An exception class used to implement <i>assumptions</i> (state in which a given test
  is meaningful and should or should not be executed).A test for which an assumption
  fails should not generate a test case failure.
 - seealso: Assume
 */
@interface OrgJunitInternalAssumptionViolatedException : JavaLangRuntimeException < OrgHamcrestSelfDescribing >

#pragma mark Public

/*!
 @brief An assumption exception with the given <i>value</i> (String or
  Throwable) and an additional failing <code>Matcher</code>.
 */
- (instancetype __nonnull)initWithId:(id)value
              withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief An assumption exception with the given message only.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)assumption;

- (instancetype __nonnull)initWithNSString:(NSString *)assumption
                               withBoolean:(jboolean)valueMatcher
                                    withId:(id)value
                    withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief An assumption exception with the given <i>value</i> (String or
  Throwable) and an additional failing <code>Matcher</code>.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)assumption
                                    withId:(id)value
                    withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief An assumption exception with the given message and a cause.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)assumption
                     withJavaLangThrowable:(JavaLangThrowable *)t;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (NSString *)getMessage;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalAssumptionViolatedException)

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_withBoolean_withId_withOrgHamcrestMatcher_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption, jboolean valueMatcher, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_withBoolean_withId_withOrgHamcrestMatcher_(NSString *assumption, jboolean valueMatcher, id value, id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *create_OrgJunitInternalAssumptionViolatedException_initWithNSString_withBoolean_withId_withOrgHamcrestMatcher_(NSString *assumption, jboolean valueMatcher, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithId_withOrgHamcrestMatcher_(OrgJunitInternalAssumptionViolatedException *self, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithId_withOrgHamcrestMatcher_(id value, id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *create_OrgJunitInternalAssumptionViolatedException_initWithId_withOrgHamcrestMatcher_(id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_withId_withOrgHamcrestMatcher_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_withId_withOrgHamcrestMatcher_(NSString *assumption, id value, id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *create_OrgJunitInternalAssumptionViolatedException_initWithNSString_withId_withOrgHamcrestMatcher_(NSString *assumption, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_(NSString *assumption) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *create_OrgJunitInternalAssumptionViolatedException_initWithNSString_(NSString *assumption);

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_withJavaLangThrowable_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption, JavaLangThrowable *t);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_withJavaLangThrowable_(NSString *assumption, JavaLangThrowable *t) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *create_OrgJunitInternalAssumptionViolatedException_initWithNSString_withJavaLangThrowable_(NSString *assumption, JavaLangThrowable *t);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalAssumptionViolatedException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalAssumptionViolatedException")
