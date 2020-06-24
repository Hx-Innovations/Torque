//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/junit/build_result/java/org/hamcrest/core/AnyOf.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreAnyOf")
#ifdef RESTRICT_OrgHamcrestCoreAnyOf
#define INCLUDE_ALL_OrgHamcrestCoreAnyOf 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreAnyOf 1
#endif
#undef RESTRICT_OrgHamcrestCoreAnyOf

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgHamcrestCoreAnyOf_) && (INCLUDE_ALL_OrgHamcrestCoreAnyOf || defined(INCLUDE_OrgHamcrestCoreAnyOf))
#define OrgHamcrestCoreAnyOf_

#define RESTRICT_OrgHamcrestCoreShortcutCombination 1
#define INCLUDE_OrgHamcrestCoreShortcutCombination 1
#include "org/hamcrest/core/ShortcutCombination.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

/*!
 @brief Calculates the logical disjunction of multiple matchers.Evaluation is shortcut, so
  subsequent matchers are not called if an earlier matcher returns <code>true</code>.
 */
@interface OrgHamcrestCoreAnyOf : OrgHamcrestCoreShortcutCombination

#pragma mark Public

- (instancetype __nonnull)initWithJavaLangIterable:(id<JavaLangIterable>)matchers;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithJavaLangIterable:(id<JavaLangIterable>)matchers;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcherArray:(IOSObjectArray *)matchers;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth;

/*!
 @brief Creates a matcher that matches if the examined object matches <b>ANY</b> of the specified matchers.
 <p>
  For example: 
 @code
assertThat("myValue", anyOf(startsWith("foo"), containsString("Val")))
@endcode
 */
+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)sixth;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)o;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreAnyOf)

FOUNDATION_EXPORT void OrgHamcrestCoreAnyOf_initWithJavaLangIterable_(OrgHamcrestCoreAnyOf *self, id<JavaLangIterable> matchers);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *new_OrgHamcrestCoreAnyOf_initWithJavaLangIterable_(id<JavaLangIterable> matchers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *create_OrgHamcrestCoreAnyOf_initWithJavaLangIterable_(id<JavaLangIterable> matchers);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithJavaLangIterable_(id<JavaLangIterable> matchers);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcherArray_(IOSObjectArray *matchers);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth, id<OrgHamcrestMatcher> sixth);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreAnyOf)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreAnyOf")
