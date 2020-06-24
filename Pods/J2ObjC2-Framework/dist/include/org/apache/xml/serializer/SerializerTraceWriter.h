//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/SerializerTraceWriter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerSerializerTraceWriter")
#ifdef RESTRICT_OrgApacheXmlSerializerSerializerTraceWriter
#define INCLUDE_ALL_OrgApacheXmlSerializerSerializerTraceWriter 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerSerializerTraceWriter 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerSerializerTraceWriter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerSerializerTraceWriter_) && (INCLUDE_ALL_OrgApacheXmlSerializerSerializerTraceWriter || defined(INCLUDE_OrgApacheXmlSerializerSerializerTraceWriter))
#define OrgApacheXmlSerializerSerializerTraceWriter_

#define RESTRICT_JavaIoWriter 1
#define INCLUDE_JavaIoWriter 1
#include "java/io/Writer.h"

#define RESTRICT_OrgApacheXmlSerializerWriterChain 1
#define INCLUDE_OrgApacheXmlSerializerWriterChain 1
#include "org/apache/xml/serializer/WriterChain.h"

@class IOSCharArray;
@class JavaIoOutputStream;
@protocol OrgApacheXmlSerializerSerializerTrace;

/*!
 @brief This class wraps the real writer, it only purpose is to send
  CHARACTERTOSTREAM events to the trace listener.
 Each method immediately sends the call to the wrapped writer unchanged, but
  in addition it collects characters to be issued to a trace listener. 
  In this way the trace
  listener knows what characters have been written to the output Writer. 
  There may still be differences in what the trace events say is going to the
  output writer and what is really going there. These differences will be due
  to the fact that this class is UTF-8 encoding before emiting the trace event
  and the underlying writer may not be UTF-8 encoding. There may also be
  encoding differences.  So the main pupose of this class is to provide a
  resonable facsimile of the true output.
 */
@interface OrgApacheXmlSerializerSerializerTraceWriter : JavaIoWriter < OrgApacheXmlSerializerWriterChain >

#pragma mark Public

/*!
 @brief Constructor.
 If the writer passed in is null, then this SerializerTraceWriter will
  only signal trace events of what would have been written to that writer.
  If the writer passed in is not null then the trace events will mirror
  what is going to that writer. In this way tools, such as a debugger, can
  gather information on what is being written out.
 @param outArg the Writer to write to (possibly null)
 @param tracer the tracer to inform that characters are being written
 */
- (instancetype __nonnull)initWithJavaIoWriter:(JavaIoWriter *)outArg
     withOrgApacheXmlSerializerSerializerTrace:(id<OrgApacheXmlSerializerSerializerTrace>)tracer;

/*!
 @brief Flush the internal buffer and close the Writer
 - seealso: java.io.Writer
 */
- (void)close;

/*!
 @brief Flush the internal buffer and flush the Writer
 - seealso: java.io.Writer
 */
- (void)flush;

/*!
 @brief Get the OutputStream that is the at the end of the
  chain of writers.
 */
- (JavaIoOutputStream *)getOutputStream;

/*!
 @brief Get the writer that this one directly wraps.
 */
- (JavaIoWriter *)getWriter;

/*!
 @brief Write a portion of an array of characters.
 @param chars Array of characters
 @param start Offset from which to start writing characters
 @param length Number of characters to write
 @throw IOExceptionIf an I/O error occurs
 @throw java.io.IOException
 */
- (void)writeWithCharArray:(IOSCharArray *)chars
                   withInt:(jint)start
                   withInt:(jint)length;

/*!
 @brief Write a single character.The character to be written is contained in
  the 16 low-order bits of the given integer value; the 16 high-order bits
  are ignored.
 <p> Subclasses that intend to support efficient single-character output
  should override this method.
 @param c int specifying a character to be written.
 @throw IOExceptionIf an I/O error occurs
 */
- (void)writeWithInt:(jint)c;

/*!
 @brief Write a string.
 @param s String to be written
 @throw IOExceptionIf an I/O error occurs
 */
- (void)writeWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerSerializerTraceWriter)

FOUNDATION_EXPORT void OrgApacheXmlSerializerSerializerTraceWriter_initWithJavaIoWriter_withOrgApacheXmlSerializerSerializerTrace_(OrgApacheXmlSerializerSerializerTraceWriter *self, JavaIoWriter *outArg, id<OrgApacheXmlSerializerSerializerTrace> tracer);

FOUNDATION_EXPORT OrgApacheXmlSerializerSerializerTraceWriter *new_OrgApacheXmlSerializerSerializerTraceWriter_initWithJavaIoWriter_withOrgApacheXmlSerializerSerializerTrace_(JavaIoWriter *outArg, id<OrgApacheXmlSerializerSerializerTrace> tracer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerSerializerTraceWriter *create_OrgApacheXmlSerializerSerializerTraceWriter_initWithJavaIoWriter_withOrgApacheXmlSerializerSerializerTrace_(JavaIoWriter *outArg, id<OrgApacheXmlSerializerSerializerTrace> tracer);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerSerializerTraceWriter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerSerializerTraceWriter")
