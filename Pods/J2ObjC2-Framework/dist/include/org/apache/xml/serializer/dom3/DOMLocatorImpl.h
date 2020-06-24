//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/dom3/DOMLocatorImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMLocatorImpl")
#ifdef RESTRICT_OrgApacheXmlSerializerDom3DOMLocatorImpl
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMLocatorImpl 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMLocatorImpl 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerDom3DOMLocatorImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerDom3DOMLocatorImpl_) && (INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMLocatorImpl || defined(INCLUDE_OrgApacheXmlSerializerDom3DOMLocatorImpl))
#define OrgApacheXmlSerializerDom3DOMLocatorImpl_

#define RESTRICT_OrgW3cDomDOMLocator 1
#define INCLUDE_OrgW3cDomDOMLocator 1
#include "org/w3c/dom/DOMLocator.h"

@protocol OrgW3cDomNode;

/*!
 @brief <code>DOMLocatorImpl</code> is an implementaion that describes a location (e.g.
 where an error occured). 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
  This class is a copy of the Xerces-2J class org.apache.xerces.dom.DOMLocatorImpl.java v 1.10
 @author Gopal Sharma, SUN Microsystems Inc.
 @version $Id:
 */
@interface OrgApacheXmlSerializerDom3DOMLocatorImpl : NSObject < OrgW3cDomDOMLocator >

#pragma mark Public

/*!
 @brief The byte offset into the input source this locator is pointing to or -1 
  if there is no byte offset available
 */
- (jint)getByteOffset;

/*!
 @brief The column number where the error occured, or -1 if there is no column 
  number available.
 */
- (jint)getColumnNumber;

/*!
 @brief The line number where the error occured, or -1 if there is no line 
  number available.
 */
- (jint)getLineNumber;

- (id<OrgW3cDomNode>)getRelatedNode;

/*!
 @brief The URI where the error occured, or null if there is no URI available.
 */
- (NSString *)getUri;

/*!
 @brief The UTF-16, as defined in [Unicode] and Amendment 1 of [ISO/IEC 10646], 
  offset into the input source this locator is pointing to or -1 if there 
  is no UTF-16 offset available.
 */
- (jint)getUtf16Offset;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)lineNumber
                              withInt:(jint)columnNumber
                              withInt:(jint)byteoffset
                    withOrgW3cDomNode:(id<OrgW3cDomNode>)relatedData
                         withNSString:(NSString *)uri;

- (instancetype __nonnull)initWithInt:(jint)lineNumber
                              withInt:(jint)columnNumber
                              withInt:(jint)byteoffset
                    withOrgW3cDomNode:(id<OrgW3cDomNode>)relatedData
                         withNSString:(NSString *)uri
                              withInt:(jint)utf16Offset;

- (instancetype __nonnull)initWithInt:(jint)lineNumber
                              withInt:(jint)columnNumber
                              withInt:(jint)utf16Offset
                         withNSString:(NSString *)uri;

- (instancetype __nonnull)initWithInt:(jint)lineNumber
                              withInt:(jint)columnNumber
                         withNSString:(NSString *)uri;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerDom3DOMLocatorImpl)

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMLocatorImpl_init(OrgApacheXmlSerializerDom3DOMLocatorImpl *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *new_OrgApacheXmlSerializerDom3DOMLocatorImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *create_OrgApacheXmlSerializerDom3DOMLocatorImpl_init(void);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withNSString_(OrgApacheXmlSerializerDom3DOMLocatorImpl *self, jint lineNumber, jint columnNumber, NSString *uri);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *new_OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withNSString_(jint lineNumber, jint columnNumber, NSString *uri) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *create_OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withNSString_(jint lineNumber, jint columnNumber, NSString *uri);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withInt_withNSString_(OrgApacheXmlSerializerDom3DOMLocatorImpl *self, jint lineNumber, jint columnNumber, jint utf16Offset, NSString *uri);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *new_OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withInt_withNSString_(jint lineNumber, jint columnNumber, jint utf16Offset, NSString *uri) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *create_OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withInt_withNSString_(jint lineNumber, jint columnNumber, jint utf16Offset, NSString *uri);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_(OrgApacheXmlSerializerDom3DOMLocatorImpl *self, jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *new_OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_(jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *create_OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_(jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_withInt_(OrgApacheXmlSerializerDom3DOMLocatorImpl *self, jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri, jint utf16Offset);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *new_OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_withInt_(jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri, jint utf16Offset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMLocatorImpl *create_OrgApacheXmlSerializerDom3DOMLocatorImpl_initWithInt_withInt_withInt_withOrgW3cDomNode_withNSString_withInt_(jint lineNumber, jint columnNumber, jint byteoffset, id<OrgW3cDomNode> relatedData, NSString *uri, jint utf16Offset);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDom3DOMLocatorImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMLocatorImpl")
