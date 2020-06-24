//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/html/HtmlEscapers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHtmlHtmlEscapers")
#ifdef RESTRICT_ComGoogleCommonHtmlHtmlEscapers
#define INCLUDE_ALL_ComGoogleCommonHtmlHtmlEscapers 0
#else
#define INCLUDE_ALL_ComGoogleCommonHtmlHtmlEscapers 1
#endif
#undef RESTRICT_ComGoogleCommonHtmlHtmlEscapers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHtmlHtmlEscapers_) && (INCLUDE_ALL_ComGoogleCommonHtmlHtmlEscapers || defined(INCLUDE_ComGoogleCommonHtmlHtmlEscapers))
#define ComGoogleCommonHtmlHtmlEscapers_

@class ComGoogleCommonEscapeEscaper;

/*!
 @brief <code>Escaper</code> instances suitable for strings to be included in HTML attribute values and 
 <em>most</em> elements' text contents.When possible, avoid manual escaping by using templating
  systems and high-level APIs that provide autoescaping.
 One Google-authored templating system available for external use is <a href="https://developers.google.com/closure/templates/">
 Closure Templates</a>.
  
 <p>HTML escaping is particularly tricky: For example, <a href="http://goo.gl/5TgZb">some
  elements' text contents must not be HTML escaped</a>. As a result, it is impossible to escape an
  HTML document correctly without domain-specific knowledge beyond what <code>HtmlEscapers</code>
  provides. We strongly encourage the use of HTML templating systems.
 @author Sven Mawson
 @author David Beaumont
 @since 15.0
 */
@interface ComGoogleCommonHtmlHtmlEscapers : NSObject

#pragma mark Public

/*!
 @brief Returns an <code>Escaper</code> instance that escapes HTML metacharacters as specified by <a href="http://www.w3.org/TR/html4/">
 HTML 4.01</a>.The resulting strings can be used both in
  attribute values and in <em>most</em> elements' text contents, provided that the HTML
  document's character encoding can encode any non-ASCII code points in the input (as UTF-8 and
  other Unicode encodings can).
 <p><b>Note:</b> This escaper only performs minimal escaping to make content structurally
  compatible with HTML. Specifically, it does not perform entity replacement (symbolic or
  numeric), so it does not replace non-ASCII code points with character references. This escaper
  escapes only the following five ASCII characters: <code>'"&<></code>.
 */
+ (ComGoogleCommonEscapeEscaper *)htmlEscaper;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHtmlHtmlEscapers)

FOUNDATION_EXPORT ComGoogleCommonEscapeEscaper *ComGoogleCommonHtmlHtmlEscapers_htmlEscaper(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHtmlHtmlEscapers)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHtmlHtmlEscapers")
