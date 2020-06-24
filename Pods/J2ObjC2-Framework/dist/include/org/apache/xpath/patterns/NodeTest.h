//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/patterns/NodeTest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathPatternsNodeTest")
#ifdef RESTRICT_OrgApacheXpathPatternsNodeTest
#define INCLUDE_ALL_OrgApacheXpathPatternsNodeTest 0
#else
#define INCLUDE_ALL_OrgApacheXpathPatternsNodeTest 1
#endif
#undef RESTRICT_OrgApacheXpathPatternsNodeTest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathPatternsNodeTest_) && (INCLUDE_ALL_OrgApacheXpathPatternsNodeTest || defined(INCLUDE_OrgApacheXpathPatternsNodeTest))
#define OrgApacheXpathPatternsNodeTest_

#define RESTRICT_OrgApacheXpathExpression 1
#define INCLUDE_OrgApacheXpathExpression 1
#include "org/apache/xpath/Expression.h"

@class JavaUtilVector;
@class OrgApacheXpathObjectsXNumber;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXmlDtmDTM;
@protocol OrgApacheXpathExpressionOwner;

/*!
 @brief This is the basic node test class for both match patterns and location path
  steps.
 */
@interface OrgApacheXpathPatternsNodeTest : OrgApacheXpathExpression {
 @public
  /*!
   @brief This attribute determines which node types are accepted.
   */
  jint m_whatToShow_;
  /*!
   @brief The namespace to be tested for, which may be null.
   */
  NSString *m_namespace_;
  /*!
   @brief The local name to be tested for.
   */
  NSString *m_name_;
  /*!
   @brief Statically calculated score for this test.One of
   <code>SCORE_NODETEST</code>,
   <code>SCORE_NONE</code>,
   <code>SCORE_NSWILD</code>,
   <code>SCORE_QNAME</code>, or
   <code>SCORE_OTHER</code>.
   */
  OrgApacheXpathObjectsXNumber *m_score_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);
@property (readonly, copy, class) NSString *WILD NS_SWIFT_NAME(WILD);
@property (readonly, copy, class) NSString *SUPPORTS_PRE_STRIPPING NS_SWIFT_NAME(SUPPORTS_PRE_STRIPPING);
@property (readonly, class) jint SHOW_BYFUNCTION NS_SWIFT_NAME(SHOW_BYFUNCTION);
@property (readonly, class, strong) OrgApacheXpathObjectsXNumber *SCORE_NODETEST NS_SWIFT_NAME(SCORE_NODETEST);
@property (readonly, class, strong) OrgApacheXpathObjectsXNumber *SCORE_NSWILD NS_SWIFT_NAME(SCORE_NSWILD);
@property (readonly, class, strong) OrgApacheXpathObjectsXNumber *SCORE_QNAME NS_SWIFT_NAME(SCORE_QNAME);
@property (readonly, class, strong) OrgApacheXpathObjectsXNumber *SCORE_OTHER NS_SWIFT_NAME(SCORE_OTHER);
@property (readonly, class, strong) OrgApacheXpathObjectsXNumber *SCORE_NONE NS_SWIFT_NAME(SCORE_NONE);

+ (jlong)serialVersionUID;

+ (NSString *)WILD;

+ (NSString *)SUPPORTS_PRE_STRIPPING;

+ (jint)SHOW_BYFUNCTION;

+ (OrgApacheXpathObjectsXNumber *)SCORE_NODETEST;

+ (OrgApacheXpathObjectsXNumber *)SCORE_NSWILD;

+ (OrgApacheXpathObjectsXNumber *)SCORE_QNAME;

+ (OrgApacheXpathObjectsXNumber *)SCORE_OTHER;

+ (OrgApacheXpathObjectsXNumber *)SCORE_NONE;

#pragma mark Public

/*!
 @brief Null argument constructor.
 */
- (instancetype __nonnull)init;

/*!
 @brief Construct an NodeTest that doesn't test for node names.
 @param whatToShow Bit set defined mainly by <code>org.w3c.dom.traversal.NodeFilter</code> .
 */
- (instancetype __nonnull)initWithInt:(jint)whatToShow;

/*!
 @brief Construct an NodeTest that tests for namespaces and node names.
 @param whatToShow Bit set defined mainly by <code>org.w3c.dom.traversal.NodeFilter</code> .
 @param namespace_ The namespace to be tested.
 @param name The local name to be tested.
 */
- (instancetype __nonnull)initWithInt:(jint)whatToShow
                         withNSString:(NSString *)namespace_
                         withNSString:(NSString *)name;

/*!
 - seealso: org.apache.xpath.XPathVisitable
 */
- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Do a diagnostics dump of a whatToShow bit set.
 @param whatToShow Bit set defined mainly by          
 <code>org.apache.xml.dtm.DTMFilter</code> .
 */
+ (void)debugWhatToShowWithInt:(jint)whatToShow;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Test the current node to see if it matches the given node test.
 @param xctxt XPath runtime context.
 @return <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>, or
          <code>org.apache.xpath.patterns.NodeTest</code>.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Tell what the test score is for the given node.
 @param xctxt XPath runtime context.
 @param context The node being tested.
 @return <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>, or
          <code>org.apache.xpath.patterns.NodeTest</code>.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                withInt:(jint)context;

/*!
 @brief Tell what the test score is for the given node.
 @param xctxt XPath runtime context.
 @param context The node being tested.
 @return <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>,
          <code>org.apache.xpath.patterns.NodeTest</code>, or
          <code>org.apache.xpath.patterns.NodeTest</code>.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                withInt:(jint)context
                                                 withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
                                                                withInt:(jint)expType;

/*!
 @brief Node tests by themselves do not need to fix up variables.
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Get the score that this test will return if a test succeeds.
 @return the score that this test will return if a test succeeds.
 */
- (jdouble)getDefaultScore;

/*!
 @brief Return the local name to be tested.
 @return the local name to be tested, or <code>WILD</code>, or an empty string.
 */
- (NSString *)getLocalName;

/*!
 @brief Return the namespace to be tested.
 @return The namespace to be tested for, or <code>WILD</code>, or null.
 */
- (NSString *)getNamespace;

/*!
 @brief Tell what node type to test, if not DTMFilter.SHOW_ALL.
 @param whatToShow Bit set defined mainly by          
 <code>org.apache.xml.dtm.DTMFilter</code> .
 @return the node type for the whatToShow.  Since whatToShow can specify 
          multiple types, it will return the first bit tested that is on, 
          so the caller of this function should take care that this is 
          the function they really want to call.  If none of the known bits
          are set, this function will return zero.
 */
+ (jint)getNodeTypeTestWithInt:(jint)whatToShow;

/*!
 @brief Get the static score for this node test.
 @return Should be one of the SCORE_XXX constants.
 */
- (OrgApacheXpathObjectsXNumber *)getStaticScore;

/*!
 @brief This attribute determines which node types are accepted.
 These constants are defined in the <code>org.w3c.dom.traversal.NodeFilter</code>
  interface.
 @return bitset mainly defined in <code>org.w3c.dom.traversal.NodeFilter</code>.
 */
- (jint)getWhatToShow;

/*!
 @brief Initialize this node test by setting the whatToShow property, and
  calculating the score that this test will return if a test succeeds.
 @param whatToShow Bit set defined mainly by <code>org.w3c.dom.traversal.NodeFilter</code> .
 */
- (void)initNodeTestWithInt:(jint)whatToShow OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initialize this node test by setting the whatToShow property and the
  namespace and local name, and
  calculating the score that this test will return if a test succeeds.
 @param whatToShow Bit set defined mainly by <code>org.w3c.dom.traversal.NodeFilter</code> .
 @param namespace_ The namespace to be tested.
 @param name The local name to be tested.
 */
- (void)initNodeTestWithInt:(jint)whatToShow
               withNSString:(NSString *)namespace_
               withNSString:(NSString *)name OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Set the local name to be tested.
 @param name the local name to be tested, or <code>WILD</code> , or an empty string.
 */
- (void)setLocalNameWithNSString:(NSString *)name;

/*!
 @brief Set the namespace to be tested.
 @param ns The namespace to be tested for, or <code>WILD</code> , or null.
 */
- (void)setNamespaceWithNSString:(NSString *)ns;

/*!
 @brief Set the static score for this node test.
 @param score Should be one of the SCORE_XXX constants.
 */
- (void)setStaticScoreWithOrgApacheXpathObjectsXNumber:(OrgApacheXpathObjectsXNumber *)score;

/*!
 @brief This attribute determines which node types are accepted.
 These constants are defined in the <code>org.w3c.dom.traversal.NodeFilter</code>
  interface.
 @param what bitset mainly defined in <code>org.w3c.dom.traversal.NodeFilter</code> .
 */
- (void)setWhatToShowWithInt:(jint)what;

#pragma mark Protected

/*!
 @brief Static calc of match score.
 */
- (void)calcScore;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathPatternsNodeTest)

J2OBJC_FIELD_SETTER(OrgApacheXpathPatternsNodeTest, m_namespace_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXpathPatternsNodeTest, m_name_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXpathPatternsNodeTest, m_score_, OrgApacheXpathObjectsXNumber *)

inline jlong OrgApacheXpathPatternsNodeTest_get_serialVersionUID(void);
#define OrgApacheXpathPatternsNodeTest_serialVersionUID -5736721866747906182LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathPatternsNodeTest, serialVersionUID, jlong)

/*!
 @brief The namespace or local name for node tests with a wildcard.
 - seealso: <a href="http://www.w3.org/TR/xpath#NT-NameTest">the XPath NameTest production.</a>
 */
inline NSString *OrgApacheXpathPatternsNodeTest_get_WILD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathPatternsNodeTest_WILD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathPatternsNodeTest, WILD, NSString *)

/*!
 @brief The URL to pass to the Node#supports method, to see if the
  DOM has already been stripped of whitespace nodes.
 */
inline NSString *OrgApacheXpathPatternsNodeTest_get_SUPPORTS_PRE_STRIPPING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathPatternsNodeTest_SUPPORTS_PRE_STRIPPING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathPatternsNodeTest, SUPPORTS_PRE_STRIPPING, NSString *)

/*!
 @brief Special bitmap for match patterns starting with a function.
 Make sure this does not conflict with <code>org.w3c.dom.traversal.NodeFilter</code>.
 */
inline jint OrgApacheXpathPatternsNodeTest_get_SHOW_BYFUNCTION(void);
#define OrgApacheXpathPatternsNodeTest_SHOW_BYFUNCTION 65536
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathPatternsNodeTest, SHOW_BYFUNCTION, jint)

/*!
 @brief The match score if the pattern consists of just a NodeTest.
 - seealso: <a href="http://www.w3.org/TR/xslt#conflict">XSLT Specification - 5.5 Conflict Resolution for Template Rules</a>
 */
inline OrgApacheXpathObjectsXNumber *OrgApacheXpathPatternsNodeTest_get_SCORE_NODETEST(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *OrgApacheXpathPatternsNodeTest_SCORE_NODETEST;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathPatternsNodeTest, SCORE_NODETEST, OrgApacheXpathObjectsXNumber *)

/*!
 @brief The match score if the pattern pattern has the form NCName:*.
 - seealso: <a href="http://www.w3.org/TR/xslt#conflict">XSLT Specification - 5.5 Conflict Resolution for Template Rules</a>
 */
inline OrgApacheXpathObjectsXNumber *OrgApacheXpathPatternsNodeTest_get_SCORE_NSWILD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *OrgApacheXpathPatternsNodeTest_SCORE_NSWILD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathPatternsNodeTest, SCORE_NSWILD, OrgApacheXpathObjectsXNumber *)

/*!
 @brief The match score if the pattern has the form
  of a QName optionally preceded by an @@ character.
 - seealso: <a href="http://www.w3.org/TR/xslt#conflict">XSLT Specification - 5.5 Conflict Resolution for Template Rules</a>
 */
inline OrgApacheXpathObjectsXNumber *OrgApacheXpathPatternsNodeTest_get_SCORE_QNAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *OrgApacheXpathPatternsNodeTest_SCORE_QNAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathPatternsNodeTest, SCORE_QNAME, OrgApacheXpathObjectsXNumber *)

/*!
 @brief The match score if the pattern consists of something
  other than just a NodeTest or just a qname.
 - seealso: <a href="http://www.w3.org/TR/xslt#conflict">XSLT Specification - 5.5 Conflict Resolution for Template Rules</a>
 */
inline OrgApacheXpathObjectsXNumber *OrgApacheXpathPatternsNodeTest_get_SCORE_OTHER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *OrgApacheXpathPatternsNodeTest_SCORE_OTHER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathPatternsNodeTest, SCORE_OTHER, OrgApacheXpathObjectsXNumber *)

/*!
 @brief The match score if no match is made.
 - seealso: <a href="http://www.w3.org/TR/xslt#conflict">XSLT Specification - 5.5 Conflict Resolution for Template Rules</a>
 */
inline OrgApacheXpathObjectsXNumber *OrgApacheXpathPatternsNodeTest_get_SCORE_NONE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsXNumber *OrgApacheXpathPatternsNodeTest_SCORE_NONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathPatternsNodeTest, SCORE_NONE, OrgApacheXpathObjectsXNumber *)

FOUNDATION_EXPORT void OrgApacheXpathPatternsNodeTest_initWithInt_withNSString_withNSString_(OrgApacheXpathPatternsNodeTest *self, jint whatToShow, NSString *namespace_, NSString *name);

FOUNDATION_EXPORT OrgApacheXpathPatternsNodeTest *new_OrgApacheXpathPatternsNodeTest_initWithInt_withNSString_withNSString_(jint whatToShow, NSString *namespace_, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathPatternsNodeTest *create_OrgApacheXpathPatternsNodeTest_initWithInt_withNSString_withNSString_(jint whatToShow, NSString *namespace_, NSString *name);

FOUNDATION_EXPORT void OrgApacheXpathPatternsNodeTest_initWithInt_(OrgApacheXpathPatternsNodeTest *self, jint whatToShow);

FOUNDATION_EXPORT OrgApacheXpathPatternsNodeTest *new_OrgApacheXpathPatternsNodeTest_initWithInt_(jint whatToShow) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathPatternsNodeTest *create_OrgApacheXpathPatternsNodeTest_initWithInt_(jint whatToShow);

FOUNDATION_EXPORT void OrgApacheXpathPatternsNodeTest_init(OrgApacheXpathPatternsNodeTest *self);

FOUNDATION_EXPORT OrgApacheXpathPatternsNodeTest *new_OrgApacheXpathPatternsNodeTest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathPatternsNodeTest *create_OrgApacheXpathPatternsNodeTest_init(void);

FOUNDATION_EXPORT jint OrgApacheXpathPatternsNodeTest_getNodeTypeTestWithInt_(jint whatToShow);

FOUNDATION_EXPORT void OrgApacheXpathPatternsNodeTest_debugWhatToShowWithInt_(jint whatToShow);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathPatternsNodeTest)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathPatternsNodeTest")
