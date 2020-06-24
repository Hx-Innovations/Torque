//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CRL.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCRL")
#ifdef RESTRICT_JavaSecurityCertCRL
#define INCLUDE_ALL_JavaSecurityCertCRL 0
#else
#define INCLUDE_ALL_JavaSecurityCertCRL 1
#endif
#undef RESTRICT_JavaSecurityCertCRL

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCRL_) && (INCLUDE_ALL_JavaSecurityCertCRL || defined(INCLUDE_JavaSecurityCertCRL))
#define JavaSecurityCertCRL_

@class JavaSecurityCertCertificate;

/*!
 @brief This class is an abstraction of certificate revocation lists (CRLs) that
  have different formats but important common uses.For example, all CRLs
  share the functionality of listing revoked certificates, and can be queried
  on whether or not they list a given certificate.
 <p>
  Specialized CRL types can be defined by subclassing off of this abstract
  class.
 @author Hemma Prafullchandra
 - seealso: X509CRL
 - seealso: CertificateFactory
 @since 1.2
 */
@interface JavaSecurityCertCRL : NSObject

#pragma mark Public

/*!
 @brief Returns the type of this CRL.
 @return the type of this CRL.
 */
- (NSString *)getType;

/*!
 @brief Checks whether the given certificate is on this CRL.
 @param cert the certificate to check for.
 @return true if the given certificate is on this CRL,
  false otherwise.
 */
- (jboolean)isRevokedWithJavaSecurityCertCertificate:(JavaSecurityCertCertificate *)cert;

/*!
 @brief Returns a string representation of this CRL.
 @return a string representation of this CRL.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Creates a CRL of the specified type.
 @param type the standard name of the CRL type.  See Appendix A in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/crypto/CryptoSpec.html#AppA">
   Java Cryptography Architecture API Specification 
  &amp;  Reference  </a>  for information about standard CRL types.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCRL)

FOUNDATION_EXPORT void JavaSecurityCertCRL_initWithNSString_(JavaSecurityCertCRL *self, NSString *type);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCRL)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCRL")
