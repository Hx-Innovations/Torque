//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/spec/RC5ParameterSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSpecRC5ParameterSpec")
#ifdef RESTRICT_JavaxCryptoSpecRC5ParameterSpec
#define INCLUDE_ALL_JavaxCryptoSpecRC5ParameterSpec 0
#else
#define INCLUDE_ALL_JavaxCryptoSpecRC5ParameterSpec 1
#endif
#undef RESTRICT_JavaxCryptoSpecRC5ParameterSpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoSpecRC5ParameterSpec_) && (INCLUDE_ALL_JavaxCryptoSpecRC5ParameterSpec || defined(INCLUDE_JavaxCryptoSpecRC5ParameterSpec))
#define JavaxCryptoSpecRC5ParameterSpec_

#define RESTRICT_JavaSecuritySpecAlgorithmParameterSpec 1
#define INCLUDE_JavaSecuritySpecAlgorithmParameterSpec 1
#include "java/security/spec/AlgorithmParameterSpec.h"

@class IOSByteArray;

/*!
 @brief This class specifies the parameters used with the 
 <a href="http://www.ietf.org/rfc/rfc2040.txt"><i>RC5</i></a>
  algorithm.
 <p> The parameters consist of a version number, a rounds count, a word
  size, and optionally an initialization vector (IV) (only in feedback mode). 
 <p> This class can be used to initialize a <code>Cipher</code> object that
  implements the <i>RC5</i> algorithm as supplied by 
 <a href="http://www.rsasecurity.com">RSA Security Inc.</a>,
  or any parties authorized by RSA Security.
 @author Jan Luehe
 @since 1.4
 */
@interface JavaxCryptoSpecRC5ParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

/*!
 @brief Constructs a parameter set for RC5 from the given version, number of
  rounds and word size (in bits).
 @param version_ the version.
 @param rounds the number of rounds.
 @param wordSize the word size in bits.
 */
- (instancetype __nonnull)initWithInt:(jint)version_
                              withInt:(jint)rounds
                              withInt:(jint)wordSize;

/*!
 @brief Constructs a parameter set for RC5 from the given version, number of
  rounds, word size (in bits), and IV.
 <p> Note that the size of the IV (block size) must be twice the word
  size. The bytes that constitute the IV are those between 
 <code>iv[0]</code> and <code>iv[2*(wordSize/8)-1]</code> inclusive.
 @param version_ the version.
 @param rounds the number of rounds.
 @param wordSize the word size in bits.
 @param iv the buffer with the IV. The first  <code> 2*(wordSize/8)
    </code>  bytes of the buffer are copied to protect against subsequent  modification.
 @throw IllegalArgumentExceptionif <code>iv</code> is 
 <code>null</code> or <code>(iv.length < 2 * (wordSize / 8))</code>
 */
- (instancetype __nonnull)initWithInt:(jint)version_
                              withInt:(jint)rounds
                              withInt:(jint)wordSize
                        withByteArray:(IOSByteArray *)iv;

/*!
 @brief Constructs a parameter set for RC5 from the given version, number of
  rounds, word size (in bits), and IV.
 <p> The IV is taken from <code>iv</code>, starting at 
 <code>offset</code> inclusive.
  Note that the size of the IV (block size), starting at 
 <code>offset</code> inclusive, must be twice the word size.
  The bytes that constitute the IV are those between 
 <code>iv[offset]</code> and <code>iv[offset+2*(wordSize/8)-1]</code>
  inclusive.
 @param version_ the version.
 @param rounds the number of rounds.
 @param wordSize the word size in bits.
 @param iv the buffer with the IV. The first  <code> 2*(wordSize/8)
    </code>  bytes of the buffer beginning at  <code> offset </code>
   inclusive are copied to protect against subsequent modification.
 @param offset the offset in  <code> iv </code>  where the IV starts.
 @throw IllegalArgumentExceptionif <code>iv</code> is 
 <code>null</code> or 
 <code>(iv.length - offset < 2 * (wordSize / 8))</code>
 */
- (instancetype __nonnull)initWithInt:(jint)version_
                              withInt:(jint)rounds
                              withInt:(jint)wordSize
                        withByteArray:(IOSByteArray *)iv
                              withInt:(jint)offset;

/*!
 @brief Tests for equality between the specified object and this
  object.Two RC5ParameterSpec objects are considered equal if their
  version numbers, number of rounds, word sizes, and IVs are equal.
 (Two IV references are considered equal if both are <tt>null</tt>.)
 @param obj the object to test for equality with this object.
 @return true if the objects are considered equal, false if 
 <code>obj</code> is null or otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the IV or null if this parameter set does not contain an IV.
 @return the IV or null if this parameter set does not contain an IV.
  Returns a new array each time this method is called.
 */
- (IOSByteArray *)getIV;

/*!
 @brief Returns the number of rounds.
 @return the number of rounds.
 */
- (jint)getRounds;

/*!
 @brief Returns the version.
 @return the version.
 */
- (jint)getVersion;

/*!
 @brief Returns the word size in bits.
 @return the word size in bits.
 */
- (jint)getWordSize;

/*!
 @brief Calculates a hash code value for the object.
 Objects that are equal will also have the same hashcode.
 */
- (NSUInteger)hash;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSpecRC5ParameterSpec)

FOUNDATION_EXPORT void JavaxCryptoSpecRC5ParameterSpec_initWithInt_withInt_withInt_(JavaxCryptoSpecRC5ParameterSpec *self, jint version_, jint rounds, jint wordSize);

FOUNDATION_EXPORT JavaxCryptoSpecRC5ParameterSpec *new_JavaxCryptoSpecRC5ParameterSpec_initWithInt_withInt_withInt_(jint version_, jint rounds, jint wordSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecRC5ParameterSpec *create_JavaxCryptoSpecRC5ParameterSpec_initWithInt_withInt_withInt_(jint version_, jint rounds, jint wordSize);

FOUNDATION_EXPORT void JavaxCryptoSpecRC5ParameterSpec_initWithInt_withInt_withInt_withByteArray_(JavaxCryptoSpecRC5ParameterSpec *self, jint version_, jint rounds, jint wordSize, IOSByteArray *iv);

FOUNDATION_EXPORT JavaxCryptoSpecRC5ParameterSpec *new_JavaxCryptoSpecRC5ParameterSpec_initWithInt_withInt_withInt_withByteArray_(jint version_, jint rounds, jint wordSize, IOSByteArray *iv) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecRC5ParameterSpec *create_JavaxCryptoSpecRC5ParameterSpec_initWithInt_withInt_withInt_withByteArray_(jint version_, jint rounds, jint wordSize, IOSByteArray *iv);

FOUNDATION_EXPORT void JavaxCryptoSpecRC5ParameterSpec_initWithInt_withInt_withInt_withByteArray_withInt_(JavaxCryptoSpecRC5ParameterSpec *self, jint version_, jint rounds, jint wordSize, IOSByteArray *iv, jint offset);

FOUNDATION_EXPORT JavaxCryptoSpecRC5ParameterSpec *new_JavaxCryptoSpecRC5ParameterSpec_initWithInt_withInt_withInt_withByteArray_withInt_(jint version_, jint rounds, jint wordSize, IOSByteArray *iv, jint offset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecRC5ParameterSpec *create_JavaxCryptoSpecRC5ParameterSpec_initWithInt_withInt_withInt_withByteArray_withInt_(jint version_, jint rounds, jint wordSize, IOSByteArray *iv, jint offset);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecRC5ParameterSpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSpecRC5ParameterSpec")
