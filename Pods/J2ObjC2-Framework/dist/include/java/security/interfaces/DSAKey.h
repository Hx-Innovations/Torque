//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/interfaces/DSAKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityInterfacesDSAKey")
#ifdef RESTRICT_JavaSecurityInterfacesDSAKey
#define INCLUDE_ALL_JavaSecurityInterfacesDSAKey 0
#else
#define INCLUDE_ALL_JavaSecurityInterfacesDSAKey 1
#endif
#undef RESTRICT_JavaSecurityInterfacesDSAKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityInterfacesDSAKey_) && (INCLUDE_ALL_JavaSecurityInterfacesDSAKey || defined(INCLUDE_JavaSecurityInterfacesDSAKey))
#define JavaSecurityInterfacesDSAKey_

@protocol JavaSecurityInterfacesDSAParams;

/*!
 @brief The interface to a DSA public or private key.DSA (Digital Signature
  Algorithm) is defined in NIST's FIPS-186.
 - seealso: DSAParams
 - seealso: java.security.Key
 - seealso: java.security.Signature
 @author Benjamin Renaud
 @author Josh Bloch
 */
@protocol JavaSecurityInterfacesDSAKey < JavaObject >

/*!
 @brief Returns the DSA-specific key parameters.These parameters are
  never secret.
 @return the DSA-specific key parameters.
 - seealso: DSAParams
 */
- (id<JavaSecurityInterfacesDSAParams>)getParams;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesDSAKey)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesDSAKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInterfacesDSAKey")
