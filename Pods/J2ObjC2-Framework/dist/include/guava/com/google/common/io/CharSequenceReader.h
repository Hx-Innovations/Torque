//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/io/CharSequenceReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoCharSequenceReader")
#ifdef RESTRICT_ComGoogleCommonIoCharSequenceReader
#define INCLUDE_ALL_ComGoogleCommonIoCharSequenceReader 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoCharSequenceReader 1
#endif
#undef RESTRICT_ComGoogleCommonIoCharSequenceReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoCharSequenceReader_) && (INCLUDE_ALL_ComGoogleCommonIoCharSequenceReader || defined(INCLUDE_ComGoogleCommonIoCharSequenceReader))
#define ComGoogleCommonIoCharSequenceReader_

#define RESTRICT_JavaIoReader 1
#define INCLUDE_JavaIoReader 1
#include "java/io/Reader.h"

@class IOSCharArray;
@class JavaNioCharBuffer;
@protocol JavaLangCharSequence;

/*!
 @brief A <code>Reader</code> that reads the characters in a <code>CharSequence</code>.Like <code>StringReader</code>,
  but works with any <code>CharSequence</code>.
 @author Colin Decker
 */
@interface ComGoogleCommonIoCharSequenceReader : JavaIoReader

#pragma mark Public

/*!
 @brief Creates a new reader wrapping the given character sequence.
 */
- (instancetype __nonnull)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)seq;

- (void)close;

- (void)markWithInt:(jint)readAheadLimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithCharArray:(IOSCharArray *)cbuf
                  withInt:(jint)off
                  withInt:(jint)len;

- (jint)readWithJavaNioCharBuffer:(JavaNioCharBuffer *)target;

- (jboolean)ready;

- (void)reset;

- (jlong)skipWithLong:(jlong)n;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCharSequenceReader)

FOUNDATION_EXPORT void ComGoogleCommonIoCharSequenceReader_initWithJavaLangCharSequence_(ComGoogleCommonIoCharSequenceReader *self, id<JavaLangCharSequence> seq);

FOUNDATION_EXPORT ComGoogleCommonIoCharSequenceReader *new_ComGoogleCommonIoCharSequenceReader_initWithJavaLangCharSequence_(id<JavaLangCharSequence> seq) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoCharSequenceReader *create_ComGoogleCommonIoCharSequenceReader_initWithJavaLangCharSequence_(id<JavaLangCharSequence> seq);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCharSequenceReader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoCharSequenceReader")
