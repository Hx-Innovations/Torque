//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/internal/exceptions/stacktrace/DefaultStackTraceCleanerProvider.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider")
#ifdef RESTRICT_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider
#define INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider 0
#else
#define INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider 1
#endif
#undef RESTRICT_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider_) && (INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider || defined(INCLUDE_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider))
#define OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider_

#define RESTRICT_OrgMockitoPluginsStackTraceCleanerProvider 1
#define INCLUDE_OrgMockitoPluginsStackTraceCleanerProvider 1
#include "org/mockito/plugins/StackTraceCleanerProvider.h"

@protocol OrgMockitoExceptionsStacktraceStackTraceCleaner;

/*!
 @brief by Szczepan Faber, created at: 7/29/12
 */
@interface OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider : NSObject < OrgMockitoPluginsStackTraceCleanerProvider >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<OrgMockitoExceptionsStacktraceStackTraceCleaner>)getStackTraceCleanerWithOrgMockitoExceptionsStacktraceStackTraceCleaner:(id<OrgMockitoExceptionsStacktraceStackTraceCleaner>)defaultCleaner;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider)

FOUNDATION_EXPORT void OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider_init(OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider *self);

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider *new_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider *create_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleanerProvider")
