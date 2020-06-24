//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/Collator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextCollator")
#ifdef RESTRICT_JavaTextCollator
#define INCLUDE_ALL_JavaTextCollator 0
#else
#define INCLUDE_ALL_JavaTextCollator 1
#endif
#undef RESTRICT_JavaTextCollator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTextCollator_) && (INCLUDE_ALL_JavaTextCollator || defined(INCLUDE_JavaTextCollator))
#define JavaTextCollator_

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "java/util/Comparator.h"

@class IOSObjectArray;
@class JavaTextCollationKey;
@class JavaUtilLocale;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;

/*!
 @brief Performs locale-sensitive string comparison.
 <p>
  Following the <a href=http://www.unicode.org>Unicode Consortium</a>'s
  specifications for the <a href="http://www.unicode.org/unicode/reports/tr10/">
  Unicode Collation
  Algorithm (UCA)</a>, there are 4 different levels of strength used in
  comparisons: 
 <ul>
  <li>PRIMARY strength: Typically, this is used to denote differences between
  base characters (for example, "a" &lt; "b"). It is the strongest difference.
  For example, dictionaries are divided into different sections by base
  character. 
 <li>SECONDARY strength: Accents in the characters are considered secondary
  differences (for example, "as" &lt; "&agrave;s" &lt; "at"). Other differences
  between letters can also be considered secondary differences, depending on
  the language. A secondary difference is ignored when there is a primary
  difference anywhere in the strings. 
 <li>TERTIARY strength: Upper and lower case differences in characters are
  distinguished at tertiary strength (for example, "ao" &lt; "Ao" &lt;
  "a&ograve;"). In addition, a variant of a letter differs from the base form
  on the tertiary strength (such as "A" and "&#9398;"). Another example is the
  difference between large and small Kana. A tertiary difference is ignored
  when there is a primary or secondary difference anywhere in the strings. 
 <li>IDENTICAL strength: When all other strengths are equal, the IDENTICAL
  strength is used as a tiebreaker. The Unicode code point values of the NFD
  form of each string are compared, just in case there is no difference. For
  example, Hebrew cantellation marks are only distinguished at this strength.
  This strength should be used sparingly, as only code point value differences
  between two strings are an extremely rare occurrence. Using this strength
  substantially decreases the performance for both comparison and collation key
  generation APIs. This strength also increases the size of the collation key. 
 </ul>
  <p>
  This <code>Collator</code> deals only with two decomposition modes, the canonical
  decomposition mode and one that does not use any decomposition. The
  compatibility decomposition mode 
 <code>java.text.Collator.FULL_DECOMPOSITION</code> is not supported here. If the
  canonical decomposition mode is set, <code>Collator</code> handles un-normalized
  text properly, producing the same results as if the text were normalized in
  NFD. If canonical decomposition is turned off, it is the user's
  responsibility to ensure that all text is already in the appropriate form
  before performing a comparison or before getting a <code>CollationKey</code>.
  <p>
  <em>Examples:</em>
  <blockquote>
  
 @code

  // Get the Collator for US English and set its strength to PRIMARY
  Collator usCollator = Collator.getInstance(Locale.US);
  usCollator.setStrength(Collator.PRIMARY);
  if (usCollator.compare(&quot;abc&quot;, &quot;ABC&quot;) == 0) {
      System.out.println(&quot;Strings are equivalent&quot;);
  } 
  
@endcode
  
 </blockquote>
  <p>
  The following example shows how to compare two strings using the collator for
  the default locale. 
 <blockquote>
  
 @code

  // Compare two strings in the default locale
  Collator myCollator = Collator.getInstance();
  myCollator.setDecomposition(Collator.NO_DECOMPOSITION);
  if (myCollator.compare(&quot;ḁ̀&quot;, &quot;ḁ̀&quot;) != 0) {
      System.out.println(&quot;ḁ̀ is not equal to ḁ̀ without decomposition&quot;);
      myCollator.setDecomposition(Collator.CANONICAL_DECOMPOSITION);
      if (myCollator.compare(&quot;ḁ̀&quot;, &quot;ḁ̀&quot;) != 0) {
          System.out.println(&quot;Error: ḁ̀ should be equal to ḁ̀ with decomposition&quot;);
      } else {
          System.out.println(&quot;ḁ̀ is equal to ḁ̀ with decomposition&quot;);
      }
  } else {
      System.out.println(&quot;Error: ḁ̀ should be not equal to ḁ̀ without decomposition&quot;);
  } 
  
@endcode
  
 </blockquote>
 - seealso: CollationKey
 */
@interface JavaTextCollator : NSObject < JavaUtilComparator, NSCopying >
@property (readonly, class) jint NO_DECOMPOSITION NS_SWIFT_NAME(NO_DECOMPOSITION);
@property (readonly, class) jint CANONICAL_DECOMPOSITION NS_SWIFT_NAME(CANONICAL_DECOMPOSITION);
@property (readonly, class) jint FULL_DECOMPOSITION NS_SWIFT_NAME(FULL_DECOMPOSITION);
@property (readonly, class) jint PRIMARY NS_SWIFT_NAME(PRIMARY);
@property (readonly, class) jint SECONDARY NS_SWIFT_NAME(SECONDARY);
@property (readonly, class) jint TERTIARY NS_SWIFT_NAME(TERTIARY);
@property (readonly, class) jint IDENTICAL NS_SWIFT_NAME(IDENTICAL);

+ (jint)NO_DECOMPOSITION;

+ (jint)CANONICAL_DECOMPOSITION;

+ (jint)FULL_DECOMPOSITION;

+ (jint)PRIMARY;

+ (jint)SECONDARY;

+ (jint)TERTIARY;

+ (jint)IDENTICAL;

#pragma mark Public

- (instancetype __nonnull)init;

- (id)java_clone;

/*!
 @brief Compares two objects to determine their relative order.The objects must
  be strings.
 @param object1 the first string to compare.
 @param object2 the second string to compare.
 @return a negative value if <code>object1</code> is less than <code>object2</code>,
          0 if they are equal, and a positive value if <code>object1</code> is
          greater than <code>object2</code>.
 @throw ClassCastException
 if <code>object1</code> or <code>object2</code> is not a <code>String</code>.
 */
- (jint)compareWithId:(id)object1
               withId:(id)object2;

/*!
 @brief Compares two strings to determine their relative order.
 @param string1 the first string to compare.
 @param string2 the second string to compare.
 @return a negative value if <code>string1</code> is less than <code>string2</code>,
          0 if they are equal and a positive value if <code>string1</code> is
          greater than <code>string2</code>.
 */
- (jint)compareWithNSString:(NSString *)string1
               withNSString:(NSString *)string2;

/*!
 @brief Compares two strings using the collation rules to determine if they are
  equal.
 @param string1 the first string to compare.
 @param string2 the second string to compare.
 @return <code>true</code> if <code>string1</code> and <code>string2</code> are equal
          using the collation rules, false otherwise.
 */
- (jboolean)equalsWithNSString:(NSString *)string1
                  withNSString:(NSString *)string2;

/*!
 @brief Returns an array of locales for which custom <code>Collator</code> instances
  are available.
 <p>Note that Android does not support user-supplied locale service providers.
 */
+ (IOSObjectArray *)getAvailableLocales;

/*!
 @brief Returns a <code>CollationKey</code> for the specified string for this collator
  with the current decomposition rule and strength value.
 @param string the source string that is converted into a collation key.
 @return the collation key for <code>string</code>.
 */
- (JavaTextCollationKey *)getCollationKeyWithNSString:(NSString *)string;

/*!
 @brief Returns the decomposition rule for this collator.
 @return the decomposition rule, either <code>NO_DECOMPOSITION</code> or
          <code>CANONICAL_DECOMPOSITION</code>. <code>FULL_DECOMPOSITION</code> is
          not supported.
 */
- (jint)getDecomposition;

/*!
 @brief Returns a <code>Collator</code> instance which is appropriate for the user's default 
 <code>Locale</code>.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 */
+ (JavaTextCollator *)getInstance;

/*!
 @brief Returns a <code>Collator</code> instance which is appropriate for <code>locale</code>.
 */
+ (JavaTextCollator *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the strength value for this collator.
 @return the strength value, either PRIMARY, SECONDARY, TERTIARY or
          IDENTICAL.
 */
- (jint)getStrength;

/*!
 @brief Sets the decomposition rule for this collator.
 @param value the decomposition rule, either 
 <code>NO_DECOMPOSITION</code>  or             <code>CANONICAL_DECOMPOSITION</code>
  . <code>FULL_DECOMPOSITION</code>             is not supported.
 @throw IllegalArgumentException
 if the provided decomposition rule is not valid. This includes
             <code>FULL_DECOMPOSITION</code>.
 */
- (void)setDecompositionWithInt:(jint)value;

/*!
 @brief Sets the strength value for this collator.
 @param value the strength value, either PRIMARY, SECONDARY, TERTIARY, or
              IDENTICAL.
 @throw IllegalArgumentException
 if the provided strength value is not valid.
 */
- (void)setStrengthWithInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextCollator)

/*!
 @brief Constant used to specify the decomposition rule.
 */
inline jint JavaTextCollator_get_NO_DECOMPOSITION(void);
#define JavaTextCollator_NO_DECOMPOSITION 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, NO_DECOMPOSITION, jint)

/*!
 @brief Constant used to specify the decomposition rule.
 */
inline jint JavaTextCollator_get_CANONICAL_DECOMPOSITION(void);
#define JavaTextCollator_CANONICAL_DECOMPOSITION 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, CANONICAL_DECOMPOSITION, jint)

/*!
 @brief Constant used to specify the decomposition rule.This value for
  decomposition is not supported.
 */
inline jint JavaTextCollator_get_FULL_DECOMPOSITION(void);
#define JavaTextCollator_FULL_DECOMPOSITION 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, FULL_DECOMPOSITION, jint)

/*!
 @brief Constant used to specify the collation strength.
 */
inline jint JavaTextCollator_get_PRIMARY(void);
#define JavaTextCollator_PRIMARY 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, PRIMARY, jint)

/*!
 @brief Constant used to specify the collation strength.
 */
inline jint JavaTextCollator_get_SECONDARY(void);
#define JavaTextCollator_SECONDARY 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, SECONDARY, jint)

/*!
 @brief Constant used to specify the collation strength.
 */
inline jint JavaTextCollator_get_TERTIARY(void);
#define JavaTextCollator_TERTIARY 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, TERTIARY, jint)

/*!
 @brief Constant used to specify the collation strength.
 */
inline jint JavaTextCollator_get_IDENTICAL(void);
#define JavaTextCollator_IDENTICAL 3
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, IDENTICAL, jint)

FOUNDATION_EXPORT void JavaTextCollator_init(JavaTextCollator *self);

FOUNDATION_EXPORT IOSObjectArray *JavaTextCollator_getAvailableLocales(void);

FOUNDATION_EXPORT JavaTextCollator *JavaTextCollator_getInstance(void);

FOUNDATION_EXPORT JavaTextCollator *JavaTextCollator_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextCollator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextCollator")
