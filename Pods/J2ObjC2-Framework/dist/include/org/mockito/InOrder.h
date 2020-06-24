//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/testing/mockito/build_result/java/org/mockito/InOrder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInOrder")
#ifdef RESTRICT_OrgMockitoInOrder
#define INCLUDE_ALL_OrgMockitoInOrder 0
#else
#define INCLUDE_ALL_OrgMockitoInOrder 1
#endif
#undef RESTRICT_OrgMockitoInOrder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInOrder_) && (INCLUDE_ALL_OrgMockitoInOrder || defined(INCLUDE_OrgMockitoInOrder))
#define OrgMockitoInOrder_

@protocol OrgMockitoVerificationVerificationMode;

/*!
 @brief Allows verification in order.E.g:
   
 <pre class="code"><code class="java">
  InOrder inOrder = inOrder(firstMock, secondMock); 
  inOrder.verify(firstMock).add("was called first");
  inOrder.verify(secondMock).add("was called second"); 
 </code>
@endcode
  
  As of Mockito 1.8.4 you can verifyNoMoreInvocations() in order-sensitive way.
 Read more: <code>InOrder.verifyNoMoreInteractions()</code>
  <p>
  
  See examples in javadoc for <code>Mockito</code> class
 */
@protocol OrgMockitoInOrder < JavaObject >

/*!
 @brief Verifies interaction <b>happened once</b> in order.
 <p>
  Alias to <code>inOrder.verify(mock, times(1))</code>
  <p>
  Example: 
 <pre class="code"><code class="java">
  InOrder inOrder = inOrder(firstMock, secondMock); 
  inOrder.verify(firstMock).someMethod("was called first");
  inOrder.verify(secondMock).someMethod("was called second"); 
 </code>
@endcode
  
  See examples in javadoc for <code>Mockito</code> class
 @param mock to be verified
 @return mock object itself
 */
- (id)verifyWithId:(id)mock;

/*!
 @brief Verifies interaction in order.E.g:
   
 <pre class="code"><code class="java">
  InOrder inOrder = inOrder(firstMock, secondMock); 
  inOrder.verify(firstMock, times(2)).someMethod("was called first two times");
  inOrder.verify(secondMock, atLeastOnce()).someMethod("was called second at least once"); 
 </code>
@endcode
  
  See examples in javadoc for <code>Mockito</code> class
 @param mock to be verified
 @param mode for example times(x) or atLeastOnce()
 @return mock object itself
 */
- (id)verifyWithId:(id)mock
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

/*!
 @brief Verifies that no more interactions happened <b>in order</b>.
 Different from <code>Mockito.verifyNoMoreInteractions(Object...)</code> because the order of verification matters. 
 <p>
  Example: 
 <pre class="code"><code class="java">
  mock.foo(); //1st
  mock.bar(); //2nd
  mock.baz(); //3rd 
  InOrder inOrder = inOrder(mock); 
  inOrder.verify(mock).bar(); //2n
  inOrder.verify(mock).baz(); //3rd (last method) 
  //passes because there are no more interactions after last method:
  inOrder.verifyNoMoreInteractions(); 
  //however this fails because 1st method was not verified:
  Mockito.verifyNoMoreInteractions(mock); 
 </code>
@endcode
 */
- (void)verifyNoMoreInteractions;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInOrder)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInOrder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInOrder")
