//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/CompactHashMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCompactHashMap")
#ifdef RESTRICT_ComGoogleCommonCollectCompactHashMap
#define INCLUDE_ALL_ComGoogleCommonCollectCompactHashMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCompactHashMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCompactHashMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectCompactHashMap_) && (INCLUDE_ALL_ComGoogleCommonCollectCompactHashMap || defined(INCLUDE_ComGoogleCommonCollectCompactHashMap))
#define ComGoogleCommonCollectCompactHashMap_

#define RESTRICT_JavaUtilAbstractMap 1
#define INCLUDE_JavaUtilAbstractMap 1
#include "java/util/AbstractMap.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSLongArray;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

/*!
 @brief CompactHashMap is an implementation of a Map.All optional operations (put and remove) are
  supported.
 Null keys and values are supported. 
 <p><code>containsKey(k)</code>, <code>put(k, v)</code> and <code>remove(k)</code> are all (expected and
  amortized) constant time operations. Expected in the hashtable sense (depends on the hash
  function doing a good job of distributing the elements to the buckets to a distribution not far
  from uniform), and amortized since some operations can trigger a hash table resize. 
 <p>Unlike <code>java.util.HashMap</code>, iteration is only proportional to the actual <code>size()</code>,
  which is optimal, and <i>not</i> the size of the internal hashtable, which could be much larger
  than <code>size()</code>. Furthermore, this structure places significantly reduced load on the garbage
  collector by only using a constant number of internal objects. 
 <p>If there are no removals, then iteration order for the <code>entrySet</code>, <code>keySet</code>, and 
 <code>values</code> views is the same as insertion order. Any removal invalidates any ordering
  guarantees. 
 <p>This class should not be assumed to be universally superior to <code>java.util.HashMap</code>.
  Generally speaking, this class reduces object allocation and memory consumption at the price of
  moderately increased constant factors of CPU.  Only use this class when there is a specific
  reason to prioritize memory over CPU.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectCompactHashMap : JavaUtilAbstractMap < JavaIoSerializable > {
 @public
  /*!
   @brief Contains the logical entries, in the range of [0, size()).The high 32 bits of each long is the
  smeared hash of the element, whereas the low 32 bits is the "next" pointer (pointing to the
  next entry in the bucket chain).
   The pointers in [size(), entries.length) are all "null"
  (UNSET).
   */
  IOSLongArray *entries_;
  /*!
   @brief The keys of the entries in the map, in the range of [0, size()).The keys in [size(),
  keys.length) are all <code>null</code>.
   */
  IOSObjectArray *keys_;
  /*!
   @brief The values of the entries in the map, in the range of [0, size()).The values in [size(),
  values.length) are all <code>null</code>.
   */
  IOSObjectArray *values_CompactHashMap_;
  /*!
   @brief The load factor.
   */
  jfloat loadFactor_;
  /*!
   @brief Keeps track of modifications of this set, to make it possible to throw
  ConcurrentModificationException in the iterator.Note that we choose not to make this volatile,
  so we do less of a "best effort" to track such errors, for better performance.
   */
  jint modCount_;
}
@property (readonly, class) jfloat DEFAULT_LOAD_FACTOR NS_SWIFT_NAME(DEFAULT_LOAD_FACTOR);
@property (readonly, class) jint DEFAULT_SIZE NS_SWIFT_NAME(DEFAULT_SIZE);
@property (readonly, class) jint UNSET NS_SWIFT_NAME(UNSET);

+ (jfloat)DEFAULT_LOAD_FACTOR;

+ (jint)DEFAULT_SIZE;

+ (jint)UNSET;

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id __nullable)key;

- (jboolean)containsValueWithId:(id __nullable)value;

/*!
 @brief Creates an empty <code>CompactHashMap</code> instance.
 */
+ (ComGoogleCommonCollectCompactHashMap *)create;

/*!
 @brief Creates a <code>CompactHashMap</code> instance, with a high enough "initial capacity" that it 
 <i>should</i> hold <code>expectedSize</code> elements without growth.
 @param expectedSize the number of elements you expect to add to the returned set
 @return a new, empty <code>CompactHashMap</code> with enough capacity to hold <code>expectedSize</code>
      elements without resizing
 @throw IllegalArgumentExceptionif <code>expectedSize</code> is negative
 */
+ (ComGoogleCommonCollectCompactHashMap *)createWithExpectedSizeWithInt:(jint)expectedSize;

- (id<JavaUtilSet>)entrySet;

- (void)forEachWithJavaUtilFunctionBiConsumer:(id<JavaUtilFunctionBiConsumer>)action;

- (id)getWithId:(id __nullable)key;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id __nullable)key;

- (void)replaceAllWithJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)function;

- (jint)size;

/*!
 @brief Ensures that this <code>CompactHashMap</code> has the smallest representation in memory, given its
  current size.
 */
- (void)trimToSize;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

/*!
 @brief Constructs a new empty instance of <code>CompactHashMap</code>.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a new instance of <code>CompactHashMap</code> with the specified capacity.
 @param capacity the initial capacity of this <code>CompactHashMap</code> .
 */
- (instancetype __nonnull)initWithInt:(jint)capacity;

- (instancetype __nonnull)initWithInt:(jint)expectedSize
                            withFloat:(jfloat)loadFactor;

/*!
 @brief Mark an access of the specified entry.Used only in <code>CompactLinkedHashMap</code> for LRU
  ordering.
 */
- (void)accessEntryWithInt:(jint)index;

/*!
 @brief Updates the index an iterator is pointing to after a call to remove: returns the index of the
  entry that should be looked at after a removal on indexRemoved, with indexBeforeRemove as the
  index that *was* the next entry that would be looked at.
 */
- (jint)adjustAfterRemoveWithInt:(jint)indexBeforeRemove
                         withInt:(jint)indexRemoved;

- (id<JavaUtilSet>)createEntrySet;

- (id<JavaUtilSet>)createKeySet;

- (id<JavaUtilCollection>)createValues;

- (id<JavaUtilIterator>)entrySetIterator;

- (jint)firstEntryIndex;

- (jint)getSuccessorWithInt:(jint)entryIndex;

/*!
 @brief Pseudoconstructor for serialization support.
 */
- (void)init__WithInt:(jint)expectedSize
            withFloat:(jfloat)loadFactor OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a fresh entry with the specified object at the specified position in the entry arrays.
 */
- (void)insertEntryWithInt:(jint)entryIndex
                    withId:(id)key
                    withId:(id)value
                   withInt:(jint)hash_;

- (id<JavaUtilIterator>)keySetIterator;

/*!
 @brief Moves the last entry in the entry array into <code>dstIndex</code>, and nulls out its old position.
 */
- (void)moveLastEntryWithInt:(jint)dstIndex;

/*!
 @brief Resizes the internal entries array to the specified capacity, which may be greater or less than
  the current capacity.
 */
- (void)resizeEntriesWithInt:(jint)newCapacity;

- (id<JavaUtilIterator>)valuesIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCompactHashMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCompactHashMap, entries_, IOSLongArray *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCompactHashMap, keys_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCompactHashMap, values_CompactHashMap_, IOSObjectArray *)

inline jfloat ComGoogleCommonCollectCompactHashMap_get_DEFAULT_LOAD_FACTOR(void);
#define ComGoogleCommonCollectCompactHashMap_DEFAULT_LOAD_FACTOR 1.0f
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectCompactHashMap, DEFAULT_LOAD_FACTOR, jfloat)

inline jint ComGoogleCommonCollectCompactHashMap_get_DEFAULT_SIZE(void);
#define ComGoogleCommonCollectCompactHashMap_DEFAULT_SIZE 3
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectCompactHashMap, DEFAULT_SIZE, jint)

inline jint ComGoogleCommonCollectCompactHashMap_get_UNSET(void);
#define ComGoogleCommonCollectCompactHashMap_UNSET -1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectCompactHashMap, UNSET, jint)

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap *ComGoogleCommonCollectCompactHashMap_create(void);

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap *ComGoogleCommonCollectCompactHashMap_createWithExpectedSizeWithInt_(jint expectedSize);

FOUNDATION_EXPORT void ComGoogleCommonCollectCompactHashMap_init(ComGoogleCommonCollectCompactHashMap *self);

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap *new_ComGoogleCommonCollectCompactHashMap_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap *create_ComGoogleCommonCollectCompactHashMap_init(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectCompactHashMap_initWithInt_(ComGoogleCommonCollectCompactHashMap *self, jint capacity);

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap *new_ComGoogleCommonCollectCompactHashMap_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap *create_ComGoogleCommonCollectCompactHashMap_initWithInt_(jint capacity);

FOUNDATION_EXPORT void ComGoogleCommonCollectCompactHashMap_initWithInt_withFloat_(ComGoogleCommonCollectCompactHashMap *self, jint expectedSize, jfloat loadFactor);

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap *new_ComGoogleCommonCollectCompactHashMap_initWithInt_withFloat_(jint expectedSize, jfloat loadFactor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap *create_ComGoogleCommonCollectCompactHashMap_initWithInt_withFloat_(jint expectedSize, jfloat loadFactor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCompactHashMap)

#endif

#if !defined (ComGoogleCommonCollectCompactHashMap_KeySetView_) && (INCLUDE_ALL_ComGoogleCommonCollectCompactHashMap || defined(INCLUDE_ComGoogleCommonCollectCompactHashMap_KeySetView))
#define ComGoogleCommonCollectCompactHashMap_KeySetView_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_KeySet 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectCompactHashMap;
@class IOSObjectArray;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectCompactHashMap_KeySetView : ComGoogleCommonCollectMaps_KeySet

#pragma mark Public

- (void)forEachWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id __nullable)o;

- (id<JavaUtilSpliterator>)spliterator;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectCompactHashMap:(ComGoogleCommonCollectCompactHashMap *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCompactHashMap_KeySetView)

FOUNDATION_EXPORT void ComGoogleCommonCollectCompactHashMap_KeySetView_initWithComGoogleCommonCollectCompactHashMap_(ComGoogleCommonCollectCompactHashMap_KeySetView *self, ComGoogleCommonCollectCompactHashMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap_KeySetView *new_ComGoogleCommonCollectCompactHashMap_KeySetView_initWithComGoogleCommonCollectCompactHashMap_(ComGoogleCommonCollectCompactHashMap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap_KeySetView *create_ComGoogleCommonCollectCompactHashMap_KeySetView_initWithComGoogleCommonCollectCompactHashMap_(ComGoogleCommonCollectCompactHashMap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCompactHashMap_KeySetView)

#endif

#if !defined (ComGoogleCommonCollectCompactHashMap_EntrySetView_) && (INCLUDE_ALL_ComGoogleCommonCollectCompactHashMap || defined(INCLUDE_ComGoogleCommonCollectCompactHashMap_EntrySetView))
#define ComGoogleCommonCollectCompactHashMap_EntrySetView_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_EntrySet 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectCompactHashMap;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectCompactHashMap_EntrySetView : ComGoogleCommonCollectMaps_EntrySet

#pragma mark Public

- (jboolean)containsWithId:(id __nullable)o;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id __nullable)o;

- (id<JavaUtilSpliterator>)spliterator;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectCompactHashMap:(ComGoogleCommonCollectCompactHashMap *)outer$;

- (id<JavaUtilMap>)map;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCompactHashMap_EntrySetView)

FOUNDATION_EXPORT void ComGoogleCommonCollectCompactHashMap_EntrySetView_initWithComGoogleCommonCollectCompactHashMap_(ComGoogleCommonCollectCompactHashMap_EntrySetView *self, ComGoogleCommonCollectCompactHashMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap_EntrySetView *new_ComGoogleCommonCollectCompactHashMap_EntrySetView_initWithComGoogleCommonCollectCompactHashMap_(ComGoogleCommonCollectCompactHashMap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap_EntrySetView *create_ComGoogleCommonCollectCompactHashMap_EntrySetView_initWithComGoogleCommonCollectCompactHashMap_(ComGoogleCommonCollectCompactHashMap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCompactHashMap_EntrySetView)

#endif

#if !defined (ComGoogleCommonCollectCompactHashMap_MapEntry_) && (INCLUDE_ALL_ComGoogleCommonCollectCompactHashMap || defined(INCLUDE_ComGoogleCommonCollectCompactHashMap_MapEntry))
#define ComGoogleCommonCollectCompactHashMap_MapEntry_

#define RESTRICT_ComGoogleCommonCollectAbstractMapEntry 1
#define INCLUDE_ComGoogleCommonCollectAbstractMapEntry 1
#include "com/google/common/collect/AbstractMapEntry.h"

@class ComGoogleCommonCollectCompactHashMap;

@interface ComGoogleCommonCollectCompactHashMap_MapEntry : ComGoogleCommonCollectAbstractMapEntry

#pragma mark Public

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectCompactHashMap:(ComGoogleCommonCollectCompactHashMap *)outer$
                                                               withInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCompactHashMap_MapEntry)

FOUNDATION_EXPORT void ComGoogleCommonCollectCompactHashMap_MapEntry_initWithComGoogleCommonCollectCompactHashMap_withInt_(ComGoogleCommonCollectCompactHashMap_MapEntry *self, ComGoogleCommonCollectCompactHashMap *outer$, jint index);

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap_MapEntry *new_ComGoogleCommonCollectCompactHashMap_MapEntry_initWithComGoogleCommonCollectCompactHashMap_withInt_(ComGoogleCommonCollectCompactHashMap *outer$, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap_MapEntry *create_ComGoogleCommonCollectCompactHashMap_MapEntry_initWithComGoogleCommonCollectCompactHashMap_withInt_(ComGoogleCommonCollectCompactHashMap *outer$, jint index);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCompactHashMap_MapEntry)

#endif

#if !defined (ComGoogleCommonCollectCompactHashMap_ValuesView_) && (INCLUDE_ALL_ComGoogleCommonCollectCompactHashMap || defined(INCLUDE_ComGoogleCommonCollectCompactHashMap_ValuesView))
#define ComGoogleCommonCollectCompactHashMap_ValuesView_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_Values 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectCompactHashMap;
@class IOSObjectArray;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectCompactHashMap_ValuesView : ComGoogleCommonCollectMaps_Values

#pragma mark Public

- (void)forEachWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (id<JavaUtilIterator>)iterator;

- (id<JavaUtilSpliterator>)spliterator;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectCompactHashMap:(ComGoogleCommonCollectCompactHashMap *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCompactHashMap_ValuesView)

FOUNDATION_EXPORT void ComGoogleCommonCollectCompactHashMap_ValuesView_initWithComGoogleCommonCollectCompactHashMap_(ComGoogleCommonCollectCompactHashMap_ValuesView *self, ComGoogleCommonCollectCompactHashMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap_ValuesView *new_ComGoogleCommonCollectCompactHashMap_ValuesView_initWithComGoogleCommonCollectCompactHashMap_(ComGoogleCommonCollectCompactHashMap *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCompactHashMap_ValuesView *create_ComGoogleCommonCollectCompactHashMap_ValuesView_initWithComGoogleCommonCollectCompactHashMap_(ComGoogleCommonCollectCompactHashMap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCompactHashMap_ValuesView)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCompactHashMap")
