//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/MockUtil.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilMockUtil")
#ifdef RESTRICT_OrgMockitoInternalUtilMockUtil
#define INCLUDE_ALL_OrgMockitoInternalUtilMockUtil 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilMockUtil 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilMockUtil

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalUtilMockUtil_) && (INCLUDE_ALL_OrgMockitoInternalUtilMockUtil || defined(INCLUDE_OrgMockitoInternalUtilMockUtil))
#define OrgMockitoInternalUtilMockUtil_

@protocol OrgMockitoInternalInternalMockHandler;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoMockMockName;

@interface OrgMockitoInternalUtilMockUtil : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (id)createMockWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

- (id<OrgMockitoInternalInternalMockHandler>)getMockHandlerWithId:(id)mock;

- (id<OrgMockitoMockMockName>)getMockNameWithId:(id)mock;

- (jboolean)isMockWithId:(id)mock;

- (jboolean)isSpyWithId:(id)mock;

- (void)maybeRedefineMockNameWithId:(id)mock
                       withNSString:(NSString *)newName;

- (void)resetMockWithId:(id)mock;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalUtilMockUtil)

FOUNDATION_EXPORT void OrgMockitoInternalUtilMockUtil_init(OrgMockitoInternalUtilMockUtil *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilMockUtil *new_OrgMockitoInternalUtilMockUtil_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilMockUtil *create_OrgMockitoInternalUtilMockUtil_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilMockUtil)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilMockUtil")
