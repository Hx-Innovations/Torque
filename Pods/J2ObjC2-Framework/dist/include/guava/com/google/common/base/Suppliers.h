//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/base/Suppliers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseSuppliers")
#ifdef RESTRICT_ComGoogleCommonBaseSuppliers
#define INCLUDE_ALL_ComGoogleCommonBaseSuppliers 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseSuppliers 1
#endif
#undef RESTRICT_ComGoogleCommonBaseSuppliers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseSuppliers_) && (INCLUDE_ALL_ComGoogleCommonBaseSuppliers || defined(INCLUDE_ComGoogleCommonBaseSuppliers))
#define ComGoogleCommonBaseSuppliers_

@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBaseSupplier;

/*!
 @brief Useful suppliers.
 <p>All methods return serializable suppliers as long as they're given serializable parameters.
 @author Laurence Gonsalves
 @author Harry Heymann
 @since 2.0
 */
@interface ComGoogleCommonBaseSuppliers : NSObject

#pragma mark Public

/*!
 @brief Returns a new supplier which is the composition of the provided function and supplier.In other
  words, the new supplier's value will be computed by retrieving the value from <code>supplier</code>,
  and then applying <code>function</code> to that value.
 Note that the resulting supplier will not
  call <code>supplier</code> or invoke <code>function</code> until it is called.
 */
+ (id<ComGoogleCommonBaseSupplier>)composeWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function
                                          withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)supplier;

/*!
 @brief Returns a supplier which caches the instance retrieved during the first call to <code>get()</code>
  and returns that value on subsequent calls to <code>get()</code>.See: <a href="http://en.wikipedia.org/wiki/Memoization">
 memoization</a>
  
 <p>The returned supplier is thread-safe.
 The delegate's <code>get()</code> method will be invoked at
  most once unless the underlying <code>get()</code> throws an exception. The supplier's serialized
  form does not contain the cached value, which will be recalculated when <code>get()</code> is called
  on the reserialized instance. 
 <p>When the underlying delegate throws an exception then this memoizing supplier will keep
  delegating calls until it returns valid data. 
 <p>If <code>delegate</code> is an instance created by an earlier call to <code>memoize</code>, it is
  returned directly.
 */
+ (id<ComGoogleCommonBaseSupplier>)memoizeWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)delegate;

/*!
 @brief Returns a supplier that caches the instance supplied by the delegate and removes the cached
  value after the specified time has passed.Subsequent calls to <code>get()</code> return the cached
  value if the expiration time has not passed.
 After the expiration time, a new value is
  retrieved, cached, and returned. See: <a href="http://en.wikipedia.org/wiki/Memoization">
 memoization</a>
  
 <p>The returned supplier is thread-safe. The supplier's serialized form does not contain the
  cached value, which will be recalculated when <code>get()</code> is called on the reserialized
  instance. The actual memoization does not happen when the underlying delegate throws an
  exception. 
 <p>When the underlying delegate throws an exception then this memoizing supplier will keep
  delegating calls until it returns valid data.
 @param duration the length of time after a value is created that it should stop being returned      by subsequent 
 <code>get()</code>  calls
 @param unit the unit that <code>duration</code>  is expressed in
 @throw IllegalArgumentExceptionif <code>duration</code> is not positive
 @since 2.0
 */
+ (id<ComGoogleCommonBaseSupplier>)memoizeWithExpirationWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)delegate
                                                                               withLong:(jlong)duration
                                                         withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Returns a supplier that always supplies <code>instance</code>.
 */
+ (id<ComGoogleCommonBaseSupplier>)ofInstanceWithId:(id)instance;

/*!
 @brief Returns a function that accepts a supplier and returns the result of invoking <code>Supplier.get</code>
  on that supplier.
 <p><b>Java 8 users:</b> use the method reference <code>Supplier::get</code> instead.
 @since 8.0
 */
+ (id<ComGoogleCommonBaseFunction>)supplierFunction;

/*!
 @brief Returns a supplier whose <code>get()</code> method synchronizes on <code>delegate</code> before calling
  it, making it thread-safe.
 */
+ (id<ComGoogleCommonBaseSupplier>)synchronizedSupplierWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseSuppliers)

FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonBaseSuppliers_composeWithComGoogleCommonBaseFunction_withComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseFunction> function, id<ComGoogleCommonBaseSupplier> supplier);

FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonBaseSuppliers_memoizeWithComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseSupplier> delegate);

FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonBaseSuppliers_memoizeWithExpirationWithComGoogleCommonBaseSupplier_withLong_withJavaUtilConcurrentTimeUnit_(id<ComGoogleCommonBaseSupplier> delegate, jlong duration, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonBaseSuppliers_ofInstanceWithId_(id instance);

FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonBaseSuppliers_synchronizedSupplierWithComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseSupplier> delegate);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseSuppliers_supplierFunction(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseSuppliers)

#endif

#if !defined (ComGoogleCommonBaseSuppliers_MemoizingSupplier_) && (INCLUDE_ALL_ComGoogleCommonBaseSuppliers || defined(INCLUDE_ComGoogleCommonBaseSuppliers_MemoizingSupplier))
#define ComGoogleCommonBaseSuppliers_MemoizingSupplier_

#define RESTRICT_ComGoogleCommonBaseSupplier 1
#define INCLUDE_ComGoogleCommonBaseSupplier 1
#include "com/google/common/base/Supplier.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonBaseSuppliers_MemoizingSupplier : NSObject < ComGoogleCommonBaseSupplier, JavaIoSerializable > {
 @public
  id<ComGoogleCommonBaseSupplier> delegate_;
  volatile_jboolean initialized_;
  id value_;
}

#pragma mark Public

- (id)get;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseSuppliers_MemoizingSupplier)

J2OBJC_FIELD_SETTER(ComGoogleCommonBaseSuppliers_MemoizingSupplier, delegate_, id<ComGoogleCommonBaseSupplier>)
J2OBJC_FIELD_SETTER(ComGoogleCommonBaseSuppliers_MemoizingSupplier, value_, id)

FOUNDATION_EXPORT void ComGoogleCommonBaseSuppliers_MemoizingSupplier_initWithComGoogleCommonBaseSupplier_(ComGoogleCommonBaseSuppliers_MemoizingSupplier *self, id<ComGoogleCommonBaseSupplier> delegate);

FOUNDATION_EXPORT ComGoogleCommonBaseSuppliers_MemoizingSupplier *new_ComGoogleCommonBaseSuppliers_MemoizingSupplier_initWithComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseSupplier> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseSuppliers_MemoizingSupplier *create_ComGoogleCommonBaseSuppliers_MemoizingSupplier_initWithComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseSupplier> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseSuppliers_MemoizingSupplier)

#endif

#if !defined (ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier_) && (INCLUDE_ALL_ComGoogleCommonBaseSuppliers || defined(INCLUDE_ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier))
#define ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier_

#define RESTRICT_ComGoogleCommonBaseSupplier 1
#define INCLUDE_ComGoogleCommonBaseSupplier 1
#include "com/google/common/base/Supplier.h"

@interface ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier : NSObject < ComGoogleCommonBaseSupplier > {
 @public
  volatile_id delegate_;
  volatile_jboolean initialized_;
  id value_;
}

#pragma mark Public

- (id)get;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier)

J2OBJC_VOLATILE_FIELD_SETTER(ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier, delegate_, id<ComGoogleCommonBaseSupplier>)
J2OBJC_FIELD_SETTER(ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier, value_, id)

FOUNDATION_EXPORT void ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier_initWithComGoogleCommonBaseSupplier_(ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier *self, id<ComGoogleCommonBaseSupplier> delegate);

FOUNDATION_EXPORT ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier *new_ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier_initWithComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseSupplier> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier *create_ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier_initWithComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseSupplier> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseSuppliers_NonSerializableMemoizingSupplier)

#endif

#if !defined (ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier_) && (INCLUDE_ALL_ComGoogleCommonBaseSuppliers || defined(INCLUDE_ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier))
#define ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier_

#define RESTRICT_ComGoogleCommonBaseSupplier 1
#define INCLUDE_ComGoogleCommonBaseSupplier 1
#include "com/google/common/base/Supplier.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaUtilConcurrentTimeUnit;

@interface ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier : NSObject < ComGoogleCommonBaseSupplier, JavaIoSerializable > {
 @public
  id<ComGoogleCommonBaseSupplier> delegate_;
  jlong durationNanos_;
  volatile_id value_;
  volatile_jlong expirationNanos_;
}

#pragma mark Public

- (id)get;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)delegate
                                                     withLong:(jlong)duration
                               withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier)

J2OBJC_FIELD_SETTER(ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier, delegate_, id<ComGoogleCommonBaseSupplier>)
J2OBJC_VOLATILE_FIELD_SETTER(ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier, value_, id)

FOUNDATION_EXPORT void ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier_initWithComGoogleCommonBaseSupplier_withLong_withJavaUtilConcurrentTimeUnit_(ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier *self, id<ComGoogleCommonBaseSupplier> delegate, jlong duration, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier *new_ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier_initWithComGoogleCommonBaseSupplier_withLong_withJavaUtilConcurrentTimeUnit_(id<ComGoogleCommonBaseSupplier> delegate, jlong duration, JavaUtilConcurrentTimeUnit *unit) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier *create_ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier_initWithComGoogleCommonBaseSupplier_withLong_withJavaUtilConcurrentTimeUnit_(id<ComGoogleCommonBaseSupplier> delegate, jlong duration, JavaUtilConcurrentTimeUnit *unit);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseSuppliers_ExpiringMemoizingSupplier)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseSuppliers")
