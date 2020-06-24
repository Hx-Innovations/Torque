//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ClassNotFoundException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangClassNotFoundException")
#ifdef RESTRICT_JavaLangClassNotFoundException
#define INCLUDE_ALL_JavaLangClassNotFoundException 0
#else
#define INCLUDE_ALL_JavaLangClassNotFoundException 1
#endif
#undef RESTRICT_JavaLangClassNotFoundException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangClassNotFoundException_) && (INCLUDE_ALL_JavaLangClassNotFoundException || defined(INCLUDE_JavaLangClassNotFoundException))
#define JavaLangClassNotFoundException_

#define RESTRICT_JavaLangReflectiveOperationException 1
#define INCLUDE_JavaLangReflectiveOperationException 1
#include "java/lang/ReflectiveOperationException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when an application tries to load in a class through its
  string name using: 
 <ul>
  <li>The <code>forName</code> method in class <code>Class</code>.
 <li>The <code>findSystemClass</code> method in class
      <code>ClassLoader</code> . 
 <li>The <code>loadClass</code> method in class <code>ClassLoader</code>.
  </ul>
  <p>
  but no definition for the class with the specified name could be found. 
 <p>As of release 1.4, this exception has been retrofitted to conform to
  the general purpose exception-chaining mechanism.  The "optional exception
  that was raised while loading the class" that may be provided at
  construction time and accessed via the <code>getException()</code> method is
  now known as the <i>cause</i>, and may be accessed via the <code>Throwable.getCause()</code>
  method, as well as the aforementioned "legacy method."
 @author unascribed
 - seealso: java.lang.Class
 - seealso: java.lang.ClassLoader
 - seealso: java.lang.ClassLoader
 @since JDK1.0
 */
@interface JavaLangClassNotFoundException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructs a <code>ClassNotFoundException</code> with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>ClassNotFoundException</code> with the
  specified detail message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

/*!
 @brief Constructs a <code>ClassNotFoundException</code> with the
  specified detail message and optional exception that was
  raised while loading the class.
 @param s the detail message
 @param ex the exception that was raised while loading the class
 @since 1.2
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s
                     withJavaLangThrowable:(JavaLangThrowable *)ex;

/*!
 @brief Returns the cause of this exception (the exception that was raised
  if an error occurred while attempting to load the class; otherwise 
 <tt>null</tt>).
 @return the cause of this exception.
 @since 1.4
 */
- (JavaLangThrowable *)getCause;

/*!
 @brief Returns the exception that was raised if an error occurred while
  attempting to load the class.Otherwise, returns <tt>null</tt>.
 <p>This method predates the general-purpose exception chaining facility.
  The <code>Throwable.getCause()</code> method is now the preferred means of
  obtaining this information.
 @return the <code>Exception</code> that was raised while loading a class
 @since 1.2
 */
- (JavaLangThrowable *)getException;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangClassNotFoundException)

FOUNDATION_EXPORT void JavaLangClassNotFoundException_init(JavaLangClassNotFoundException *self);

FOUNDATION_EXPORT JavaLangClassNotFoundException *new_JavaLangClassNotFoundException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangClassNotFoundException *create_JavaLangClassNotFoundException_init(void);

FOUNDATION_EXPORT void JavaLangClassNotFoundException_initWithNSString_(JavaLangClassNotFoundException *self, NSString *s);

FOUNDATION_EXPORT JavaLangClassNotFoundException *new_JavaLangClassNotFoundException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangClassNotFoundException *create_JavaLangClassNotFoundException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaLangClassNotFoundException_initWithNSString_withJavaLangThrowable_(JavaLangClassNotFoundException *self, NSString *s, JavaLangThrowable *ex);

FOUNDATION_EXPORT JavaLangClassNotFoundException *new_JavaLangClassNotFoundException_initWithNSString_withJavaLangThrowable_(NSString *s, JavaLangThrowable *ex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangClassNotFoundException *create_JavaLangClassNotFoundException_initWithNSString_withJavaLangThrowable_(NSString *s, JavaLangThrowable *ex);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangClassNotFoundException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangClassNotFoundException")
