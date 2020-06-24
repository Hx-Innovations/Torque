//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/ImmutableSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableSetMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap || defined(INCLUDE_ComGoogleCommonCollectImmutableSetMultimap))
#define ComGoogleCommonCollectImmutableSetMultimap_

#define RESTRICT_ComGoogleCommonCollectImmutableMultimap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultimap 1
#include "com/google/common/collect/ImmutableMultimap.h"

#define RESTRICT_ComGoogleCommonCollectSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectSetMultimap 1
#include "com/google/common/collect/SetMultimap.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMultiset;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSetMultimap_Builder;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilStreamCollector;

/*!
 @brief A <code>SetMultimap</code> whose contents will never change, with many other important properties
  detailed at <code>ImmutableCollection</code>.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/ImmutableCollectionsExplained">
  immutable collections</a>.
 @author Mike Ward
 @since 2.0
 */
@interface ComGoogleCommonCollectImmutableSetMultimap : ComGoogleCommonCollectImmutableMultimap < ComGoogleCommonCollectSetMultimap >

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)asMap;

/*!
 @brief Returns a new <code>Builder</code>.
 */
+ (ComGoogleCommonCollectImmutableSetMultimap_Builder *)builder;

/*!
 @brief Returns an immutable multimap containing the specified entries.The returned multimap iterates
  over keys in the order they were first encountered in the input, and the values for each key
  are iterated in the order they were encountered.
 If two values for the same key are equal
 , the first value encountered is used.
 @throw NullPointerExceptionif any key, value, or entry is null
 @since 19.0
 */
+ (ComGoogleCommonCollectImmutableSetMultimap *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)entries OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable set multimap containing the same mappings as <code>multimap</code>.The
  generated multimap's key and value orderings correspond to the iteration ordering of the <code>multimap.asMap()</code>
  view.
 Repeated occurrences of an entry in the multimap after the first are
  ignored. 
 <p>Despite the method name, this method attempts to avoid actually copying the data when it is
  safe to do so. The exact circumstances under which a copy will or will not be performed are
  undocumented and subject to change.
 @throw NullPointerExceptionif any key or value in <code>multimap</code> is null
 */
+ (ComGoogleCommonCollectImmutableSetMultimap *)copyOfWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable collection of all key-value pairs in the multimap.Its iterator traverses
  the values for the first key, the values for the second key, and so on.
 */
- (ComGoogleCommonCollectImmutableSet *)entries;

/*!
 @brief Returns a <code>Collector</code> accumulating entries into an <code>ImmutableSetMultimap</code>.Each
  input element is mapped to a key and a stream of values, each of which are put into the
  resulting <code>Multimap</code>, in the encounter order of the stream and the encounter order of the
  streams of values.
 <p>Example:
  
 @code
 static final ImmutableSetMultimap<Character, Character> FIRST_LETTER_MULTIMAP =
      Stream.of("banana", "apple", "carrot", "asparagus", "cherry")
          .collect(
              flatteningToImmutableSetMultimap(
                   str -> str.charAt(0),
                   str -> str.substring(1).chars().mapToObj(c -> (char) c));
  // is equivalent to
  static final ImmutableSetMultimap<Character, Character> FIRST_LETTER_MULTIMAP =
      ImmutableSetMultimap.<Character, Character>builder()
          .putAll('b', Arrays.asList('a', 'n', 'a', 'n', 'a'))
          .putAll('a', Arrays.asList('p', 'p', 'l', 'e'))
          .putAll('c', Arrays.asList('a', 'r', 'r', 'o', 't'))
          .putAll('a', Arrays.asList('s', 'p', 'a', 'r', 'a', 'g', 'u', 's'))
          .putAll('c', Arrays.asList('h', 'e', 'r', 'r', 'y'))
          .build();
  // after deduplication, the resulting multimap is equivalent to
  static final ImmutableSetMultimap<Character, Character> FIRST_LETTER_MULTIMAP =
      ImmutableSetMultimap.<Character, Character>builder()
          .putAll('b', Arrays.asList('a', 'n'))
          .putAll('a', Arrays.asList('p', 'l', 'e', 's', 'a', 'r', 'g', 'u'))
          .putAll('c', Arrays.asList('a', 'r', 'o', 't', 'h', 'e', 'y'))
          .build(); 
  }
@endcode
 @since 21.0
 */
+ (id<JavaUtilStreamCollector>)flatteningToImmutableSetMultimapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)keyFunction
                                                               withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)valuesFunction;

/*!
 @brief Returns an immutable set of the values for the given key.If no mappings in the multimap have
  the provided key, an empty immutable set is returned.
 The values are in the same order as the
  parameters used to build this multimap.
 */
- (ComGoogleCommonCollectImmutableSet *)getWithId:(id)key;

/*!
 @brief <p>Because an inverse of a set multimap cannot contain multiple pairs with the same key and
  value, this method returns an <code>ImmutableSetMultimap</code> rather than the <code>ImmutableMultimap</code>
  specified in the <code>ImmutableMultimap</code> class.
 @since 11.0
 */
- (ComGoogleCommonCollectImmutableSetMultimap *)inverse;

- (ComGoogleCommonCollectImmutableMultiset *)keys;

- (ComGoogleCommonCollectImmutableSet *)keySet;

/*!
 @brief Returns the empty multimap.
 */
+ (ComGoogleCommonCollectImmutableSetMultimap *)of;

/*!
 @brief Returns an immutable multimap containing a single entry.
 */
+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1;

/*!
 @brief Returns an immutable multimap containing the given entries, in order.Repeated occurrences of
  an entry (according to <code>Object.equals</code>) after the first are ignored.
 */
+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2;

/*!
 @brief Returns an immutable multimap containing the given entries, in order.Repeated occurrences of
  an entry (according to <code>Object.equals</code>) after the first are ignored.
 */
+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2
                                                  withId:(id)k3
                                                  withId:(id)v3;

/*!
 @brief Returns an immutable multimap containing the given entries, in order.Repeated occurrences of
  an entry (according to <code>Object.equals</code>) after the first are ignored.
 */
+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2
                                                  withId:(id)k3
                                                  withId:(id)v3
                                                  withId:(id)k4
                                                  withId:(id)v4;

/*!
 @brief Returns an immutable multimap containing the given entries, in order.Repeated occurrences of
  an entry (according to <code>Object.equals</code>) after the first are ignored.
 */
+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2
                                                  withId:(id)k3
                                                  withId:(id)v3
                                                  withId:(id)k4
                                                  withId:(id)v4
                                                  withId:(id)k5
                                                  withId:(id)v5;

/*!
 @brief Guaranteed to throw an exception and leave the multimap unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (ComGoogleCommonCollectImmutableSet *)removeAllWithId:(id)key __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the multimap unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (ComGoogleCommonCollectImmutableSet *)replaceValuesWithId:(id)key
                                       withJavaLangIterable:(id<JavaLangIterable>)values __attribute__((deprecated));

/*!
 @brief Returns a <code>Collector</code> that accumulates elements into an <code>ImmutableSetMultimap</code>
  whose keys and values are the result of applying the provided mapping functions to the input
  elements.
 <p>For streams with encounter order, that order
  is preserved, but entries are <a href="ImmutableMultimap.html#iteration">grouped by key</a>.
  
 <p>Example:
  
 @code
 static final Multimap<Character, String> FIRST_LETTER_MULTIMAP =
      Stream.of("banana", "apple", "carrot", "asparagus", "cherry")
          .collect(toImmutableSetMultimap(str -> str.charAt(0), str -> str.substring(1)));
  // is equivalent to
  static final Multimap<Character, String> FIRST_LETTER_MULTIMAP =
      new ImmutableSetMultimap.Builder<Character, String>()
          .put('b', "anana")
          .putAll('a', "pple", "sparagus")
          .putAll('c', "arrot", "herry")
          .build(); 
 
@endcode
 @since 21.0
 */
+ (id<JavaUtilStreamCollector>)toImmutableSetMultimapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)keyFunction
                                                     withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)valueFunction;

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map
                                                             withInt:(jint)size
                                              withJavaUtilComparator:(id<JavaUtilComparator> __nullable)valueComparator;

/*!
 @brief Creates an ImmutableSetMultimap from an asMap.entrySet.
 */
+ (ComGoogleCommonCollectImmutableSetMultimap *)fromMapEntriesWithJavaUtilCollection:(id<JavaUtilCollection>)mapEntries
                                                              withJavaUtilComparator:(id<JavaUtilComparator> __nullable)valueComparator;

- (id<JavaUtilComparator> __nullable)valueComparator;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)arg0
                                                             withInt:(jint)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSetMultimap)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableSetMultimap_toImmutableSetMultimapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableSetMultimap_flatteningToImmutableSetMultimapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valuesFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap_Builder *ComGoogleCommonCollectImmutableSetMultimap_builder(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_copyOfWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_copyOfWithJavaLangIterable_(id<JavaLangIterable> entries);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_fromMapEntriesWithJavaUtilCollection_withJavaUtilComparator_(id<JavaUtilCollection> mapEntries, id<JavaUtilComparator> valueComparator);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSetMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_withJavaUtilComparator_(ComGoogleCommonCollectImmutableSetMultimap *self, ComGoogleCommonCollectImmutableMap *map, jint size, id<JavaUtilComparator> valueComparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *new_ComGoogleCommonCollectImmutableSetMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_withJavaUtilComparator_(ComGoogleCommonCollectImmutableMap *map, jint size, id<JavaUtilComparator> valueComparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *create_ComGoogleCommonCollectImmutableSetMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_withJavaUtilComparator_(ComGoogleCommonCollectImmutableMap *map, jint size, id<JavaUtilComparator> valueComparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSetMultimap)

#endif

#if !defined (ComGoogleCommonCollectImmutableSetMultimap_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap || defined(INCLUDE_ComGoogleCommonCollectImmutableSetMultimap_Builder))
#define ComGoogleCommonCollectImmutableSetMultimap_Builder_

#define RESTRICT_ComGoogleCommonCollectImmutableMultimap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultimap_Builder 1
#include "com/google/common/collect/ImmutableMultimap.h"

@class ComGoogleCommonCollectImmutableSetMultimap;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilMap_Entry;

/*!
 @brief A builder for creating immutable <code>SetMultimap</code> instances, especially <code>public static
  final</code>
  multimaps ("constant multimaps").Example:
  
 @code
 static final Multimap<String, Integer> STRING_TO_INTEGER_MULTIMAP =
      new ImmutableSetMultimap.Builder<String, Integer>()
          .put("one", 1)
          .putAll("several", 1, 2, 3)
          .putAll("many", 1, 2, 3, 4, 5)
          .build(); 
 
@endcode
  
 <p>Builder instances can be reused; it is safe to call <code>build</code> multiple times to build
  multiple multimaps in series.
 Each multimap contains the key-value mappings in the previously
  created multimaps.
 @since 2.0
 */
@interface ComGoogleCommonCollectImmutableSetMultimap_Builder : ComGoogleCommonCollectImmutableMultimap_Builder

#pragma mark Public

/*!
 @brief Creates a new builder.The returned builder is equivalent to the builder generated by <code>ImmutableSetMultimap.builder</code>
 .
 */
- (instancetype __nonnull)init;

/*!
 @brief Returns a newly-created immutable set multimap.
 */
- (ComGoogleCommonCollectImmutableSetMultimap *)build;

/*!
 @since 8.0
 */
- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)orderKeysByWithJavaUtilComparator:(id<JavaUtilComparator>)keyComparator;

/*!
 @brief Specifies the ordering of the generated multimap's values for each key.
 <p>If this method is called, the sets returned by the <code>get()</code> method of the generated
  multimap and its <code>Multimap.asMap()</code> view are <code>ImmutableSortedSet</code> instances.
  However, serialization does not preserve that property, though it does maintain the key and
  value ordering.
 @since 8.0
 */
- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)orderValuesByWithJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

/*!
 @brief Adds an entry to the built multimap if it is not already present.
 @since 11.0
 */
- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

/*!
 @brief Adds a key-value mapping to the built multimap if it is not already present.
 */
- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putWithId:(id)key
                                                           withId:(id)value;

/*!
 @since 19.0
 */
- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putAllWithJavaLangIterable:(id<JavaLangIterable>)entries;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putAllWithId:(id)key
                                                withJavaLangIterable:(id<JavaLangIterable>)values;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putAllWithId:(id)key
                                                   withNSObjectArray:(IOSObjectArray *)values;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

#pragma mark Package-Private

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)combineWithComGoogleCommonCollectImmutableMultimap_Builder:(ComGoogleCommonCollectImmutableMultimap_Builder *)other;

- (id<JavaUtilCollection>)newMutableValueCollection OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSetMultimap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSetMultimap_Builder_init(ComGoogleCommonCollectImmutableSetMultimap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap_Builder *new_ComGoogleCommonCollectImmutableSetMultimap_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap_Builder *create_ComGoogleCommonCollectImmutableSetMultimap_Builder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSetMultimap_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap")
