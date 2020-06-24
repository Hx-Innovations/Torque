//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/PKIXParameters.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertPKIXParameters")
#ifdef RESTRICT_JavaSecurityCertPKIXParameters
#define INCLUDE_ALL_JavaSecurityCertPKIXParameters 0
#else
#define INCLUDE_ALL_JavaSecurityCertPKIXParameters 1
#endif
#undef RESTRICT_JavaSecurityCertPKIXParameters

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertPKIXParameters_) && (INCLUDE_ALL_JavaSecurityCertPKIXParameters || defined(INCLUDE_JavaSecurityCertPKIXParameters))
#define JavaSecurityCertPKIXParameters_

#define RESTRICT_JavaSecurityCertCertPathParameters 1
#define INCLUDE_JavaSecurityCertCertPathParameters 1
#include "java/security/cert/CertPathParameters.h"

@class JavaSecurityCertCertStore;
@class JavaSecurityCertPKIXCertPathChecker;
@class JavaSecurityKeyStore;
@class JavaUtilDate;
@protocol JavaSecurityCertCertSelector;
@protocol JavaUtilList;
@protocol JavaUtilSet;

/*!
 @brief Parameters used as input for the PKIX <code>CertPathValidator</code>
  algorithm.
 <p>
  A PKIX <code>CertPathValidator</code> uses these parameters to
  validate a <code>CertPath</code> according to the PKIX certification path
  validation algorithm. 
 <p>To instantiate a <code>PKIXParameters</code> object, an
  application must specify one or more <i>most-trusted CAs</i> as defined by
  the PKIX certification path validation algorithm. The most-trusted CAs
  can be specified using one of two constructors. An application
  can call <code>PKIXParameters(Set)</code>,
  specifying a <code>Set</code> of <code>TrustAnchor</code> objects, each
  of which identify a most-trusted CA. Alternatively, an application can call 
 <code>PKIXParameters(KeyStore)</code>, specifying a 
 <code>KeyStore</code> instance containing trusted certificate entries, each
  of which will be considered as a most-trusted CA. 
 <p>
  Once a <code>PKIXParameters</code> object has been created, other parameters
  can be specified (by calling <code>setInitialPolicies</code>
  or <code>setDate</code>, for instance) and then the 
 <code>PKIXParameters</code> is passed along with the <code>CertPath</code>
  to be validated to <code>CertPathValidator.validate</code>
 .
  <p>
  Any parameter that is not set (or is set to <code>null</code>) will
  be set to the default value for that parameter. The default value for the 
 <code>date</code> parameter is <code>null</code>, which indicates
  the current time when the path is validated. The default for the
  remaining parameters is the least constrained. 
 <p>
  <b>Concurrent Access</b>
  <p>
  Unless otherwise specified, the methods defined in this class are not
  thread-safe. Multiple threads that need to access a single
  object concurrently should synchronize amongst themselves and
  provide the necessary locking. Multiple threads each manipulating
  separate objects need not synchronize.
 - seealso: CertPathValidator
 @since 1.4
 @author Sean Mullan
 @author Yassir Elley
 */
@interface JavaSecurityCertPKIXParameters : NSObject < JavaSecurityCertCertPathParameters >

#pragma mark Public

/*!
 @brief Creates an instance of <code>PKIXParameters</code> that
  populates the set of most-trusted CAs from the trusted
  certificate entries contained in the specified <code>KeyStore</code>.
 Only keystore entries that contain trusted <code>X509Certificates</code>
  are considered; all other certificate types are ignored.
 @param keystore a  <code> KeyStore </code>  from which the set of
   most-trusted CAs will be populated
 @throw KeyStoreExceptionif the keystore has not been initialized
 @throw InvalidAlgorithmParameterExceptionif the keystore does
  not contain at least one trusted certificate entry
 @throw NullPointerExceptionif the keystore is <code>null</code>
 */
- (instancetype __nonnull)initWithJavaSecurityKeyStore:(JavaSecurityKeyStore *)keystore;

/*!
 @brief Creates an instance of <code>PKIXParameters</code> with the specified 
 <code>Set</code> of most-trusted CAs.Each element of the
  set is a <code>TrustAnchor</code>.
 <p>
  Note that the <code>Set</code> is copied to protect against
  subsequent modifications.
 @param trustAnchors a  <code> Set </code>  of  <code> TrustAnchor </code>
  s
 @throw InvalidAlgorithmParameterExceptionif the specified 
 <code>Set</code> is empty <code>(trustAnchors.isEmpty() == true)</code>
 @throw NullPointerExceptionif the specified <code>Set</code> is 
 <code>null</code>
 @throw ClassCastExceptionif any of the elements in the <code>Set</code>
  are not of type <code>java.security.cert.TrustAnchor</code>
 */
- (instancetype __nonnull)initWithJavaUtilSet:(id<JavaUtilSet>)trustAnchors;

/*!
 @brief Adds a <code>PKIXCertPathChecker</code> to the list of certification
  path checkers.See the <code>setCertPathCheckers</code>
  method for more details.
 <p>
  Note that the <code>PKIXCertPathChecker</code> is cloned to protect
  against subsequent modifications.
 @param checker a  <code> PKIXCertPathChecker </code>  to add to the list of
   checks. If  <code> null </code> , the checker is ignored (not added to list).
 */
- (void)addCertPathCheckerWithJavaSecurityCertPKIXCertPathChecker:(JavaSecurityCertPKIXCertPathChecker *)checker;

/*!
 @brief Adds a <code>CertStore</code> to the end of the list of 
 <code>CertStore</code>s used in finding certificates and CRLs.
 @param store the  <code> CertStore </code>  to add. If  <code> null </code>
  ,  the store is ignored (not added to list).
 */
- (void)addCertStoreWithJavaSecurityCertCertStore:(JavaSecurityCertCertStore *)store;

/*!
 @brief Makes a copy of this <code>PKIXParameters</code> object.Changes
  to the copy will not affect the original and vice versa.
 @return a copy of this <code>PKIXParameters</code> object
 */
- (id)java_clone;

/*!
 @brief Returns the <code>List</code> of certification path checkers.
 The returned <code>List</code> is immutable, and each 
 <code>PKIXCertPathChecker</code> in the <code>List</code> is cloned
  to protect against subsequent modifications.
 @return an immutable <code>List</code> of 
 <code>PKIXCertPathChecker</code>s (may be empty, but not 
 <code>null</code>)
 - seealso: #setCertPathCheckers
 */
- (id<JavaUtilList>)getCertPathCheckers;

/*!
 @brief Returns an immutable <code>List</code> of <code>CertStore</code>s that
  are used to find certificates and CRLs.
 @return an immutable <code>List</code> of <code>CertStore</code>s
  (may be empty, but never <code>null</code>)
 - seealso: #setCertStores
 */
- (id<JavaUtilList>)getCertStores;

/*!
 @brief Returns the time for which the validity of the certification path
  should be determined.If <code>null</code>, the current time is used.
 <p>
  Note that the <code>Date</code> returned is copied to protect against
  subsequent modifications.
 @return the <code>Date</code>, or <code>null</code> if not set
 - seealso: #setDate
 */
- (JavaUtilDate *)getDate;

/*!
 @brief Returns an immutable <code>Set</code> of initial
  policy identifiers (OID strings), indicating that any one of these
  policies would be acceptable to the certificate user for the purposes of
  certification path processing.The default return value is an empty 
 <code>Set</code>, which is interpreted as meaning that any policy would
  be acceptable.
 @return an immutable <code>Set</code> of initial policy OIDs in 
 <code>String</code> format, or an empty <code>Set</code> (implying any
  policy is acceptable). Never returns <code>null</code>.
 - seealso: #setInitialPolicies
 */
- (id<JavaUtilSet>)getInitialPolicies;

/*!
 @brief Gets the PolicyQualifiersRejected flag.If this flag is true,
  certificates that include policy qualifiers in a certificate policies
  extension that is marked critical are rejected.
 If the flag is false, certificates are not rejected on this basis. 
 <p> When a <code>PKIXParameters</code> object is created, this flag is
  set to true. This setting reflects the most common (and simplest)
  strategy for processing policy qualifiers. Applications that want to use
  a more sophisticated policy must set this flag to false.
 @return the current value of the PolicyQualifiersRejected flag
 - seealso: #setPolicyQualifiersRejected
 */
- (jboolean)getPolicyQualifiersRejected;

/*!
 @brief Returns the signature provider's name, or <code>null</code>
  if not set.
 @return the signature provider's name (or <code>null</code>)
 - seealso: #setSigProvider
 */
- (NSString *)getSigProvider;

/*!
 @brief Returns the required constraints on the target certificate.
 The constraints are returned as an instance of <code>CertSelector</code>.
  If <code>null</code>, no constraints are defined. 
 <p>Note that the <code>CertSelector</code> returned is cloned
  to protect against subsequent modifications.
 @return a <code>CertSelector</code> specifying the constraints
  on the target certificate (or <code>null</code>)
 - seealso: #setTargetCertConstraints
 */
- (id<JavaSecurityCertCertSelector>)getTargetCertConstraints;

/*!
 @brief Returns an immutable <code>Set</code> of the most-trusted
  CAs.
 @return an immutable <code>Set</code> of <code>TrustAnchor</code>s
  (never <code>null</code>)
 - seealso: #setTrustAnchors
 */
- (id<JavaUtilSet>)getTrustAnchors;

/*!
 @brief Checks whether the any policy OID should be processed if it
  is included in a certificate.
 @return <code>true</code> if the any policy OID is inhibited, 
 <code>false</code> otherwise
 */
- (jboolean)isAnyPolicyInhibited;

/*!
 @brief Checks if explicit policy is required.If this flag is true, an
  acceptable policy needs to be explicitly identified in every certificate.
 By default, the ExplicitPolicyRequired flag is false.
 @return <code>true</code> if explicit policy is required, 
 <code>false</code> otherwise
 */
- (jboolean)isExplicitPolicyRequired;

/*!
 @brief Checks if policy mapping is inhibited.If this flag is true, policy
  mapping is inhibited.
 By default, policy mapping is not inhibited (the
  flag is false).
 @return true if policy mapping is inhibited, false otherwise
 */
- (jboolean)isPolicyMappingInhibited;

/*!
 @brief Checks the RevocationEnabled flag.If this flag is true, the default
  revocation checking mechanism of the underlying PKIX service provider
  will be used.
 If this flag is false, the default revocation checking
  mechanism will be disabled (not used). See the <code>setRevocationEnabled</code>
  method for more details on
  setting the value of this flag.
 @return the current value of the RevocationEnabled flag
 */
- (jboolean)isRevocationEnabled;

/*!
 @brief Sets state to determine if the any policy OID should be processed
  if it is included in a certificate.By default, the any policy OID
  is not inhibited (<code>isAnyPolicyInhibited()</code>
  returns <code>false</code>).
 @param val <code> true </code>  if the any policy OID is to be
   inhibited,  <code> false </code>  otherwise
 */
- (void)setAnyPolicyInhibitedWithBoolean:(jboolean)val;

/*!
 @brief Sets a <code>List</code> of additional certification path checkers.If
  the specified <code>List</code> contains an object that is not a 
 <code>PKIXCertPathChecker</code>, it is ignored.
 <p>
  Each <code>PKIXCertPathChecker</code> specified implements
  additional checks on a certificate. Typically, these are checks to
  process and verify private extensions contained in certificates.
  Each <code>PKIXCertPathChecker</code> should be instantiated with any
  initialization parameters needed to execute the check. 
 <p>
  This method allows sophisticated applications to extend a PKIX 
 <code>CertPathValidator</code> or <code>CertPathBuilder</code>.
  Each of the specified <code>PKIXCertPathChecker</code>s will be called,
  in turn, by a PKIX <code>CertPathValidator</code> or 
 <code>CertPathBuilder</code> for each certificate processed or
  validated. 
 <p>
  Regardless of whether these additional <code>PKIXCertPathChecker</code>s
  are set, a PKIX <code>CertPathValidator</code> or 
 <code>CertPathBuilder</code> must perform all of the required PKIX
  checks on each certificate. The one exception to this rule is if the
  RevocationEnabled flag is set to false (see the <code>setRevocationEnabled</code>
  method). 
 <p>
  Note that the <code>List</code> supplied here is copied and each 
 <code>PKIXCertPathChecker</code> in the list is cloned to protect
  against subsequent modifications.
 @param checkers a  <code> List </code>  of  <code> PKIXCertPathChecker </code>
  s.  May be  <code> null </code> , in which case no additional checkers will be
   used.
 @throw ClassCastExceptionif any of the elements in the list
  are not of type <code>java.security.cert.PKIXCertPathChecker</code>
 - seealso: #getCertPathCheckers
 */
- (void)setCertPathCheckersWithJavaUtilList:(id<JavaUtilList>)checkers;

/*!
 @brief Sets the list of <code>CertStore</code>s to be used in finding
  certificates and CRLs.May be <code>null</code>, in which case
  no <code>CertStore</code>s will be used.
 The first 
 <code>CertStore</code>s in the list may be preferred to those that
  appear later. 
 <p>
  Note that the <code>List</code> is copied to protect against
  subsequent modifications.
 @param stores a  <code> List </code>  of  <code> CertStore </code>
  s (or   <code> null </code>
  )
 @throw ClassCastExceptionif any of the elements in the list are
  not of type <code>java.security.cert.CertStore</code>
 - seealso: #getCertStores
 */
- (void)setCertStoresWithJavaUtilList:(id<JavaUtilList>)stores;

/*!
 @brief Sets the time for which the validity of the certification path
  should be determined.If <code>null</code>, the current time is used.
 <p>
  Note that the <code>Date</code> supplied here is copied to protect
  against subsequent modifications.
 @param date the  <code> Date </code> , or  <code> null </code>  for the
   current time
 - seealso: #getDate
 */
- (void)setDateWithJavaUtilDate:(JavaUtilDate *)date;

/*!
 @brief Sets the ExplicitPolicyRequired flag.If this flag is true, an
  acceptable policy needs to be explicitly identified in every certificate.
 By default, the ExplicitPolicyRequired flag is false.
 @param val <code> true </code>  if explicit policy is to be required,
    <code> false </code>  otherwise
 */
- (void)setExplicitPolicyRequiredWithBoolean:(jboolean)val;

/*!
 @brief Sets the <code>Set</code> of initial policy identifiers
  (OID strings), indicating that any one of these
  policies would be acceptable to the certificate user for the purposes of
  certification path processing.By default, any policy is acceptable
  (i.e. all policies), so a user that wants to allow any policy as
  acceptable does not need to call this method, or can call it
  with an empty <code>Set</code> (or <code>null</code>).
 <p>
  Note that the <code>Set</code> is copied to protect against
  subsequent modifications.
 @param initialPolicies a  <code> Set </code>  of initial policy
   OIDs in  <code> String </code>  format (or  <code> null </code>
  )
 @throw ClassCastExceptionif any of the elements in the set are
  not of type <code>String</code>
 - seealso: #getInitialPolicies
 */
- (void)setInitialPoliciesWithJavaUtilSet:(id<JavaUtilSet>)initialPolicies;

/*!
 @brief Sets the PolicyMappingInhibited flag.If this flag is true, policy
  mapping is inhibited.
 By default, policy mapping is not inhibited (the
  flag is false).
 @param val <code> true </code>  if policy mapping is to be inhibited,
    <code> false </code>  otherwise
 */
- (void)setPolicyMappingInhibitedWithBoolean:(jboolean)val;

/*!
 @brief Sets the PolicyQualifiersRejected flag.If this flag is true,
  certificates that include policy qualifiers in a certificate
  policies extension that is marked critical are rejected.
 If the flag is false, certificates are not rejected on this basis. 
 <p> When a <code>PKIXParameters</code> object is created, this flag is
  set to true. This setting reflects the most common (and simplest)
  strategy for processing policy qualifiers. Applications that want to use
  a more sophisticated policy must set this flag to false. 
 <p>
  Note that the PKIX certification path validation algorithm specifies
  that any policy qualifier in a certificate policies extension that is
  marked critical must be processed and validated. Otherwise the
  certification path must be rejected. If the policyQualifiersRejected flag
  is set to false, it is up to the application to validate all policy
  qualifiers in this manner in order to be PKIX compliant.
 @param qualifiersRejected the new value of the PolicyQualifiersRejected  flag
 - seealso: #getPolicyQualifiersRejected
 - seealso: PolicyQualifierInfo
 */
- (void)setPolicyQualifiersRejectedWithBoolean:(jboolean)qualifiersRejected;

/*!
 @brief Sets the RevocationEnabled flag.If this flag is true, the default
  revocation checking mechanism of the underlying PKIX service provider
  will be used.
 If this flag is false, the default revocation checking
  mechanism will be disabled (not used). 
 <p>
  When a <code>PKIXParameters</code> object is created, this flag is set
  to true. This setting reflects the most common strategy for checking
  revocation, since each service provider must support revocation
  checking to be PKIX compliant. Sophisticated applications should set
  this flag to false when it is not practical to use a PKIX service
  provider's default revocation checking mechanism or when an alternative
  revocation checking mechanism is to be substituted (by also calling the 
 <code>addCertPathChecker</code> or <code>setCertPathCheckers</code>
  methods).
 @param val the new value of the RevocationEnabled flag
 */
- (void)setRevocationEnabledWithBoolean:(jboolean)val;

/*!
 @brief Sets the signature provider's name.The specified provider will be
  preferred when creating <code>Signature</code>
  objects.
 If <code>null</code> or not set, the first provider found
  supporting the algorithm will be used.
 @param sigProvider the signature provider's name (or  <code> null </code>
  )
 - seealso: #getSigProvider
 */
- (void)setSigProviderWithNSString:(NSString *)sigProvider;

/*!
 @brief Sets the required constraints on the target certificate.
 The constraints are specified as an instance of 
 <code>CertSelector</code>. If <code>null</code>, no constraints are
  defined. 
 <p>Note that the <code>CertSelector</code> specified is cloned
  to protect against subsequent modifications.
 @param selector a  <code> CertSelector </code>  specifying the constraints
   on the target certificate (or  <code> null </code> )
 - seealso: #getTargetCertConstraints
 */
- (void)setTargetCertConstraintsWithJavaSecurityCertCertSelector:(id<JavaSecurityCertCertSelector>)selector;

/*!
 @brief Sets the <code>Set</code> of most-trusted CAs.
 <p>
  Note that the <code>Set</code> is copied to protect against
  subsequent modifications.
 @param trustAnchors a  <code> Set </code>  of  <code> TrustAnchor </code>
  s
 @throw InvalidAlgorithmParameterExceptionif the specified 
 <code>Set</code> is empty <code>(trustAnchors.isEmpty() == true)</code>
 @throw NullPointerExceptionif the specified <code>Set</code> is 
 <code>null</code>
 @throw ClassCastExceptionif any of the elements in the set
  are not of type <code>java.security.cert.TrustAnchor</code>
 - seealso: #getTrustAnchors
 */
- (void)setTrustAnchorsWithJavaUtilSet:(id<JavaUtilSet>)trustAnchors;

/*!
 @brief Returns a formatted string describing the parameters.
 @return a formatted string describing the parameters.
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertPKIXParameters)

FOUNDATION_EXPORT void JavaSecurityCertPKIXParameters_initWithJavaUtilSet_(JavaSecurityCertPKIXParameters *self, id<JavaUtilSet> trustAnchors);

FOUNDATION_EXPORT JavaSecurityCertPKIXParameters *new_JavaSecurityCertPKIXParameters_initWithJavaUtilSet_(id<JavaUtilSet> trustAnchors) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertPKIXParameters *create_JavaSecurityCertPKIXParameters_initWithJavaUtilSet_(id<JavaUtilSet> trustAnchors);

FOUNDATION_EXPORT void JavaSecurityCertPKIXParameters_initWithJavaSecurityKeyStore_(JavaSecurityCertPKIXParameters *self, JavaSecurityKeyStore *keystore);

FOUNDATION_EXPORT JavaSecurityCertPKIXParameters *new_JavaSecurityCertPKIXParameters_initWithJavaSecurityKeyStore_(JavaSecurityKeyStore *keystore) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertPKIXParameters *create_JavaSecurityCertPKIXParameters_initWithJavaSecurityKeyStore_(JavaSecurityKeyStore *keystore);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertPKIXParameters)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertPKIXParameters")
