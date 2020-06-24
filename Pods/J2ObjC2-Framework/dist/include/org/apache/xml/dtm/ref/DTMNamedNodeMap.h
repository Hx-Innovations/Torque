//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMNamedNodeMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMNamedNodeMap")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMNamedNodeMap
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMNamedNodeMap 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMNamedNodeMap 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMNamedNodeMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlDtmRefDTMNamedNodeMap_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMNamedNodeMap || defined(INCLUDE_OrgApacheXmlDtmRefDTMNamedNodeMap))
#define OrgApacheXmlDtmRefDTMNamedNodeMap_

#define RESTRICT_OrgW3cDomNamedNodeMap 1
#define INCLUDE_OrgW3cDomNamedNodeMap 1
#include "org/w3c/dom/NamedNodeMap.h"

@protocol OrgApacheXmlDtmDTM;
@protocol OrgW3cDomNode;

/*!
 @brief DTMNamedNodeMap is a quickie (as opposed to quick) implementation of the DOM's
  NamedNodeMap interface, intended to support DTMProxy's getAttributes()
  call.
 <p>
  ***** Note: this does _not_ current attempt to cache any of the data;
  if you ask for attribute 27 and then 28, you'll have to rescan the first
  27. It should probably at least keep track of the last one retrieved,
  and possibly buffer the whole array. 
 <p>
  ***** Also note that there's no fastpath for the by-name query; we search
  linearly until we find it or fail to find it. Again, that could be
  optimized at some cost in object creation/storage.
 */
@interface OrgApacheXmlDtmRefDTMNamedNodeMap : NSObject < OrgW3cDomNamedNodeMap > {
 @public
  /*!
   @brief The DTM for this node.
   */
  id<OrgApacheXmlDtmDTM> dtm_;
  /*!
   @brief The DTM element handle.
   */
  jint element_;
  /*!
   @brief The number of nodes in this map.
   */
  jshort m_count_;
}

#pragma mark Public

/*!
 @brief Create a getAttributes NamedNodeMap for a given DTM element node
 @param dtm The DTM Reference, must be non-null.
 @param element The DTM element handle.
 */
- (instancetype __nonnull)initWithOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
                                             withInt:(jint)element;

/*!
 @brief Return the number of Attributes on this Element
 @return The number of nodes in this map.
 */
- (jint)getLength;

/*!
 @brief Retrieves a node specified by name.
 @param name The  <code> nodeName </code>  of a node to retrieve.
 @return A <code>Node</code> (of any type) with the specified
    <code>nodeName</code>, or <code>null</code> if it does not identify
    any node in this map.
 */
- (id<OrgW3cDomNode>)getNamedItemWithNSString:(NSString *)name;

/*!
 @brief Retrieves a node specified by local name and namespace URI.HTML-only
  DOM implementations do not need to implement this method.
 @param namespaceURI The namespace URI of the node to retrieve.
 @param localName The local name of the node to retrieve.
 @return A <code>Node</code> (of any type) with the specified local
    name and namespace URI, or <code>null</code> if they do not
    identify any node in this map.
 @since DOM Level 2
 */
- (id<OrgW3cDomNode>)getNamedItemNSWithNSString:(NSString *)namespaceURI
                                   withNSString:(NSString *)localName;

/*!
 @brief Returns the <code>index</code>th item in the map.If <code>index</code>
  is greater than or equal to the number of nodes in this map, this
  returns <code>null</code>.
 @param i The index of the requested item.
 @return The node at the <code>index</code>th position in the map, or
    <code>null</code> if that is not a valid index.
 */
- (id<OrgW3cDomNode>)itemWithInt:(jint)i;

/*!
 @brief Removes a node specified by name.When this map contains the attributes
  attached to an element, if the removed attribute is known to have a
  default value, an attribute immediately appears containing the
  default value as well as the corresponding namespace URI, local name,
  and prefix when applicable.
 @param name The  <code> nodeName </code>  of the node to remove.
 @return The node removed from this map if a node with such a name
    exists.
 @throw DOMException
 NOT_FOUND_ERR: Raised if there is no node named <code>name</code> in
    this map.   
 <br>NO_MODIFICATION_ALLOWED_ERR: Raised if this map is readonly.
 */
- (id<OrgW3cDomNode>)removeNamedItemWithNSString:(NSString *)name;

/*!
 @brief Removes a node specified by local name and namespace URI.A removed
  attribute may be known to have a default value when this map contains
  the attributes attached to an element, as returned by the attributes
  attribute of the <code>Node</code> interface.
 If so, an attribute
  immediately appears containing the default value as well as the
  corresponding namespace URI, local name, and prefix when applicable. 
 <br>HTML-only DOM implementations do not need to implement this method.
 @param namespaceURI The namespace URI of the node to remove.
 @param localName The local name of the node to remove.
 @return The node removed from this map if a node with such a local
    name and namespace URI exists.
 @throw DOMException
 NOT_FOUND_ERR: Raised if there is no node with the specified
    <code>namespaceURI</code> and <code>localName</code> in this map.
    <br>NO_MODIFICATION_ALLOWED_ERR: Raised if this map is readonly.
 @since DOM Level 2
 */
- (id<OrgW3cDomNode>)removeNamedItemNSWithNSString:(NSString *)namespaceURI
                                      withNSString:(NSString *)localName;

/*!
 @brief Adds a node using its <code>nodeName</code> attribute.If a node with
  that name is already present in this map, it is replaced by the new
  one.
 <br>As the <code>nodeName</code> attribute is used to derive the name
  which the node must be stored under, multiple nodes of certain types
  (those that have a "special" string value) cannot be stored as the
  names would clash. This is seen as preferable to allowing nodes to be
  aliased.
 @param newNode node to store in this map. The node will later be    accessible using the value of its 
  <code> nodeName </code>  attribute.
 @return If the new <code>Node</code> replaces an existing node the
    replaced <code>Node</code> is returned, otherwise <code>null</code>
    is returned.
 @throw DOMException
 WRONG_DOCUMENT_ERR: Raised if <code>arg</code> was created from a
    different document than the one that created this map.   
 <br>NO_MODIFICATION_ALLOWED_ERR: Raised if this map is readonly.
    <br>INUSE_ATTRIBUTE_ERR: Raised if <code>arg</code> is an
    <code>Attr</code> that is already an attribute of another
    <code>Element</code> object. The DOM user must explicitly clone
    <code>Attr</code> nodes to re-use them in other elements.
 */
- (id<OrgW3cDomNode>)setNamedItemWithOrgW3cDomNode:(id<OrgW3cDomNode>)newNode;

/*!
 @brief Adds a node using its <code>namespaceURI</code> and 
 <code>localName</code>.If a node with that namespace URI and that
  local name is already present in this map, it is replaced by the new
  one.
 <br>HTML-only DOM implementations do not need to implement this method.
 @param arg A node to store in this map. The node will later be    accessible using the value of its 
  <code> namespaceURI </code>  and    
  <code> localName </code>  attributes.
 @return If the new <code>Node</code> replaces an existing node the
    replaced <code>Node</code> is returned, otherwise <code>null</code>
    is returned.
 @throw DOMException
 WRONG_DOCUMENT_ERR: Raised if <code>arg</code> was created from a
    different document than the one that created this map.   
 <br>NO_MODIFICATION_ALLOWED_ERR: Raised if this map is readonly.
    <br>INUSE_ATTRIBUTE_ERR: Raised if <code>arg</code> is an
    <code>Attr</code> that is already an attribute of another
    <code>Element</code> object. The DOM user must explicitly clone
    <code>Attr</code> nodes to re-use them in other elements.
 @since DOM Level 2
 */
- (id<OrgW3cDomNode>)setNamedItemNSWithOrgW3cDomNode:(id<OrgW3cDomNode>)arg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMNamedNodeMap)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDTMNamedNodeMap, dtm_, id<OrgApacheXmlDtmDTM>)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMNamedNodeMap_initWithOrgApacheXmlDtmDTM_withInt_(OrgApacheXmlDtmRefDTMNamedNodeMap *self, id<OrgApacheXmlDtmDTM> dtm, jint element);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNamedNodeMap *new_OrgApacheXmlDtmRefDTMNamedNodeMap_initWithOrgApacheXmlDtmDTM_withInt_(id<OrgApacheXmlDtmDTM> dtm, jint element) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNamedNodeMap *create_OrgApacheXmlDtmRefDTMNamedNodeMap_initWithOrgApacheXmlDtmDTM_withInt_(id<OrgApacheXmlDtmDTM> dtm, jint element);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMNamedNodeMap)

#endif

#if !defined (OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMNamedNodeMap || defined(INCLUDE_OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException))
#define OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException_

#define RESTRICT_OrgW3cDomDOMException 1
#define INCLUDE_OrgW3cDomDOMException 1
#include "org/w3c/dom/DOMException.h"

@class OrgApacheXmlDtmRefDTMNamedNodeMap;

/*!
 @brief Simple implementation of DOMException.
 */
@interface OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException : OrgW3cDomDOMException
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructor DTMException
 @param code
 */
- (instancetype __nonnull)initWithOrgApacheXmlDtmRefDTMNamedNodeMap:(OrgApacheXmlDtmRefDTMNamedNodeMap *)outer$
                                                          withShort:(jshort)code;

/*!
 @brief Constructs a DOM/DTM exception.
 @param code
 @param message
 */
- (instancetype __nonnull)initWithOrgApacheXmlDtmRefDTMNamedNodeMap:(OrgApacheXmlDtmRefDTMNamedNodeMap *)outer$
                                                          withShort:(jshort)code
                                                       withNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithShort:(jshort)arg0
                           withNSString:(NSString *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException)

inline jlong OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException_get_serialVersionUID(void);
#define OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException_serialVersionUID -8290238117162437678LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException_initWithOrgApacheXmlDtmRefDTMNamedNodeMap_withShort_withNSString_(OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException *self, OrgApacheXmlDtmRefDTMNamedNodeMap *outer$, jshort code, NSString *message);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException *new_OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException_initWithOrgApacheXmlDtmRefDTMNamedNodeMap_withShort_withNSString_(OrgApacheXmlDtmRefDTMNamedNodeMap *outer$, jshort code, NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException *create_OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException_initWithOrgApacheXmlDtmRefDTMNamedNodeMap_withShort_withNSString_(OrgApacheXmlDtmRefDTMNamedNodeMap *outer$, jshort code, NSString *message);

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException_initWithOrgApacheXmlDtmRefDTMNamedNodeMap_withShort_(OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException *self, OrgApacheXmlDtmRefDTMNamedNodeMap *outer$, jshort code);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException *new_OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException_initWithOrgApacheXmlDtmRefDTMNamedNodeMap_withShort_(OrgApacheXmlDtmRefDTMNamedNodeMap *outer$, jshort code) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException *create_OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException_initWithOrgApacheXmlDtmRefDTMNamedNodeMap_withShort_(OrgApacheXmlDtmRefDTMNamedNodeMap *outer$, jshort code);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMNamedNodeMap_DTMException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMNamedNodeMap")
