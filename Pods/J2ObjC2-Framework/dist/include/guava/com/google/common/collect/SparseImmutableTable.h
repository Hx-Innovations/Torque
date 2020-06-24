//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/SparseImmutableTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSparseImmutableTable")
#ifdef RESTRICT_ComGoogleCommonCollectSparseImmutableTable
#define INCLUDE_ALL_ComGoogleCommonCollectSparseImmutableTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSparseImmutableTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSparseImmutableTable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSparseImmutableTable_) && (INCLUDE_ALL_ComGoogleCommonCollectSparseImmutableTable || defined(INCLUDE_ComGoogleCommonCollectSparseImmutableTable))
#define ComGoogleCommonCollectSparseImmutableTable_

#define RESTRICT_ComGoogleCommonCollectRegularImmutableTable 1
#define INCLUDE_ComGoogleCommonCollectRegularImmutableTable 1
#include "com/google/common/collect/RegularImmutableTable.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableTable;
@class ComGoogleCommonCollectImmutableTable_SerializedForm;
@protocol ComGoogleCommonCollectTable_Cell;

/*!
 @brief A <code>RegularImmutableTable</code> optimized for sparse data.
 */
@interface ComGoogleCommonCollectSparseImmutableTable : ComGoogleCommonCollectRegularImmutableTable
@property (readonly, class, strong) ComGoogleCommonCollectImmutableTable *EMPTY NS_SWIFT_NAME(EMPTY);

+ (ComGoogleCommonCollectImmutableTable *)EMPTY;

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)cellList
                               withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)rowSpace
                               withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)columnSpace;

- (ComGoogleCommonCollectImmutableTable_SerializedForm *)createSerializedForm;

- (id<ComGoogleCommonCollectTable_Cell>)getCellWithInt:(jint)index;

- (id)getValueWithInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectSparseImmutableTable)

inline ComGoogleCommonCollectImmutableTable *ComGoogleCommonCollectSparseImmutableTable_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable *ComGoogleCommonCollectSparseImmutableTable_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectSparseImmutableTable, EMPTY, ComGoogleCommonCollectImmutableTable *)

FOUNDATION_EXPORT void ComGoogleCommonCollectSparseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectSparseImmutableTable *self, ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace);

FOUNDATION_EXPORT ComGoogleCommonCollectSparseImmutableTable *new_ComGoogleCommonCollectSparseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSparseImmutableTable *create_ComGoogleCommonCollectSparseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSparseImmutableTable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSparseImmutableTable")
