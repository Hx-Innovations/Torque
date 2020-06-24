//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/OutputPropertyUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerOutputPropertyUtils")
#ifdef RESTRICT_OrgApacheXmlSerializerOutputPropertyUtils
#define INCLUDE_ALL_OrgApacheXmlSerializerOutputPropertyUtils 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerOutputPropertyUtils 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerOutputPropertyUtils

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerOutputPropertyUtils_) && (INCLUDE_ALL_OrgApacheXmlSerializerOutputPropertyUtils || defined(INCLUDE_OrgApacheXmlSerializerOutputPropertyUtils))
#define OrgApacheXmlSerializerOutputPropertyUtils_

@class JavaUtilProperties;

/*!
 @brief This class contains some static methods that act as helpers when parsing a
  Java Property object.
 This class is not a public API. 
  It is only public because it is used outside of this package.
 - seealso: java.util.Properties
 */
@interface OrgApacheXmlSerializerOutputPropertyUtils : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Searches for the boolean property with the specified key in the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>false</code> if the property is not found, or if the value is other
  than "yes".
 @param key the property key.
 @param props the list of properties that will be searched.
 @return the value in this property list as a boolean value, or false
  if null or not "yes".
 */
+ (jboolean)getBooleanPropertyWithNSString:(NSString *)key
                    withJavaUtilProperties:(JavaUtilProperties *)props;

/*!
 @brief Searches for the int property with the specified key in the property list.
 If the key is not found in this property list, the default property list,
  and its defaults, recursively, are then checked. The method returns 
 <code>false</code> if the property is not found, or if the value is other
  than "yes".
 @param key the property key.
 @param props the list of properties that will be searched.
 @return the value in this property list as a int value, or 0
  if null or not a number.
 */
+ (jint)getIntPropertyWithNSString:(NSString *)key
            withJavaUtilProperties:(JavaUtilProperties *)props;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerOutputPropertyUtils)

FOUNDATION_EXPORT void OrgApacheXmlSerializerOutputPropertyUtils_init(OrgApacheXmlSerializerOutputPropertyUtils *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerOutputPropertyUtils *new_OrgApacheXmlSerializerOutputPropertyUtils_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerOutputPropertyUtils *create_OrgApacheXmlSerializerOutputPropertyUtils_init(void);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerOutputPropertyUtils_getBooleanPropertyWithNSString_withJavaUtilProperties_(NSString *key, JavaUtilProperties *props);

FOUNDATION_EXPORT jint OrgApacheXmlSerializerOutputPropertyUtils_getIntPropertyWithNSString_withJavaUtilProperties_(NSString *key, JavaUtilProperties *props);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerOutputPropertyUtils)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerOutputPropertyUtils")
