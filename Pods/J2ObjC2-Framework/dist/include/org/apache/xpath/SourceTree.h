//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/SourceTree.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathSourceTree")
#ifdef RESTRICT_OrgApacheXpathSourceTree
#define INCLUDE_ALL_OrgApacheXpathSourceTree 0
#else
#define INCLUDE_ALL_OrgApacheXpathSourceTree 1
#endif
#undef RESTRICT_OrgApacheXpathSourceTree

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathSourceTree_) && (INCLUDE_ALL_OrgApacheXpathSourceTree || defined(INCLUDE_OrgApacheXpathSourceTree))
#define OrgApacheXpathSourceTree_

/*!
 @brief This object represents a Source Tree, and any associated
  information.
 */
@interface OrgApacheXpathSourceTree : NSObject {
 @public
  /*!
   @brief The URI of the source tree.
   */
  NSString *m_url_;
  /*!
   @brief The root of the source tree, which may or may not be a  
 <code>org.w3c.dom.Document</code> node.
   */
  jint m_root_;
}

#pragma mark Public

/*!
 @brief Constructor SourceTree
 @param root The root of the source tree, which may or may not be a   
 <code>org.w3c.dom.Document</code>  node.
 @param url The URI of the source tree.
 */
- (instancetype __nonnull)initWithInt:(jint)root
                         withNSString:(NSString *)url;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathSourceTree)

J2OBJC_FIELD_SETTER(OrgApacheXpathSourceTree, m_url_, NSString *)

FOUNDATION_EXPORT void OrgApacheXpathSourceTree_initWithInt_withNSString_(OrgApacheXpathSourceTree *self, jint root, NSString *url);

FOUNDATION_EXPORT OrgApacheXpathSourceTree *new_OrgApacheXpathSourceTree_initWithInt_withNSString_(jint root, NSString *url) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathSourceTree *create_OrgApacheXpathSourceTree_initWithInt_withNSString_(jint root, NSString *url);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathSourceTree)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathSourceTree")
