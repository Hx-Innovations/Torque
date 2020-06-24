//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/EndpointPair.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphEndpointPair")
#ifdef RESTRICT_ComGoogleCommonGraphEndpointPair
#define INCLUDE_ALL_ComGoogleCommonGraphEndpointPair 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphEndpointPair 1
#endif
#undef RESTRICT_ComGoogleCommonGraphEndpointPair

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphEndpointPair_) && (INCLUDE_ALL_ComGoogleCommonGraphEndpointPair || defined(INCLUDE_ComGoogleCommonGraphEndpointPair))
#define ComGoogleCommonGraphEndpointPair_

#define RESTRICT_JavaLangIterable 1
#define INCLUDE_JavaLangIterable 1
#include "java/lang/Iterable.h"

@class ComGoogleCommonCollectUnmodifiableIterator;
@protocol ComGoogleCommonGraphGraph;
@protocol ComGoogleCommonGraphNetwork;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilSpliterator;

/*!
 @brief An immutable pair representing the two endpoints of an edge in a graph.The <code>EndpointPair</code>
  of a directed edge is an ordered pair of nodes (<code>source()</code> and <code>target()</code>).
 The 
 <code>EndpointPair</code> of an undirected edge is an unordered pair of nodes (<code>nodeU()</code> and 
 <code>nodeV()</code>).
  
 <p>The edge is a self-loop if, and only if, the two endpoints are equal.
 @author James Sexton
 @since 20.0
 */
@interface ComGoogleCommonGraphEndpointPair : NSObject < JavaLangIterable >

#pragma mark Public

/*!
 @brief Returns the node that is adjacent to <code>node</code> along the origin edge.
 @throw IllegalArgumentExceptionif this <code>EndpointPair</code> does not contain <code>node</code>
 */
- (id)adjacentNodeWithId:(id)node;

/*!
 @brief Two ordered <code>EndpointPair</code>s are equal if their <code>source()</code> and <code>target()</code>
  are equal.Two unordered <code>EndpointPair</code>s are equal if they contain the same nodes.
 An
  ordered <code>EndpointPair</code> is never equal to an unordered <code>EndpointPair</code>.
 */
- (jboolean)isEqual:(id __nullable)obj;

/*!
 @brief The hashcode of an ordered <code>EndpointPair</code> is equal to <code>Objects.hashCode(source(),
  target())</code>
 .The hashcode of an unordered <code>EndpointPair</code> is equal to <code>nodeU().hashCode() + nodeV().hashCode()</code>
 .
 */
- (NSUInteger)hash;

/*!
 @brief Returns <code>true</code> if this <code>EndpointPair</code> is an ordered pair (i.e.represents the
  endpoints of a directed edge).
 */
- (jboolean)isOrdered;

/*!
 @brief Iterates in the order <code>nodeU()</code>, <code>nodeV()</code>.
 */
- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

/*!
 @brief If this <code>EndpointPair</code> <code>isOrdered()</code> returns the <code>source()</code>; otherwise,
  returns an arbitrary (but consistent) endpoint of the origin edge.
 */
- (id)nodeU;

/*!
 @brief Returns the node <code>adjacent</code> to <code>nodeU()</code> along the origin
  edge.If this <code>EndpointPair</code> <code>isOrdered()</code>, this is equal to <code>target()</code>.
 */
- (id)nodeV;

/*!
 @brief Returns an <code>EndpointPair</code> representing the endpoints of a directed edge.
 */
+ (ComGoogleCommonGraphEndpointPair *)orderedWithId:(id)source
                                             withId:(id)target;

/*!
 @brief If this <code>EndpointPair</code> <code>isOrdered()</code>, returns the node which is the source.
 @throw UnsupportedOperationExceptionif this <code>EndpointPair</code> is not ordered
 */
- (id)source;

/*!
 @brief If this <code>EndpointPair</code> <code>isOrdered()</code>, returns the node which is the target.
 @throw UnsupportedOperationExceptionif this <code>EndpointPair</code> is not ordered
 */
- (id)target;

/*!
 @brief Returns an <code>EndpointPair</code> representing the endpoints of an undirected edge.
 */
+ (ComGoogleCommonGraphEndpointPair *)unorderedWithId:(id)nodeU
                                               withId:(id)nodeV;

#pragma mark Package-Private

/*!
 @brief Returns an <code>EndpointPair</code> representing the endpoints of an edge in <code>graph</code>.
 */
+ (ComGoogleCommonGraphEndpointPair *)ofWithComGoogleCommonGraphGraph:(id<ComGoogleCommonGraphGraph>)graph
                                                               withId:(id)nodeU
                                                               withId:(id)nodeV;

/*!
 @brief Returns an <code>EndpointPair</code> representing the endpoints of an edge in <code>network</code>.
 */
+ (ComGoogleCommonGraphEndpointPair *)ofWithComGoogleCommonGraphNetwork:(id<ComGoogleCommonGraphNetwork>)network
                                                                 withId:(id)nodeU
                                                                 withId:(id)nodeV;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphEndpointPair)

FOUNDATION_EXPORT ComGoogleCommonGraphEndpointPair *ComGoogleCommonGraphEndpointPair_orderedWithId_withId_(id source, id target);

FOUNDATION_EXPORT ComGoogleCommonGraphEndpointPair *ComGoogleCommonGraphEndpointPair_unorderedWithId_withId_(id nodeU, id nodeV);

FOUNDATION_EXPORT ComGoogleCommonGraphEndpointPair *ComGoogleCommonGraphEndpointPair_ofWithComGoogleCommonGraphGraph_withId_withId_(id<ComGoogleCommonGraphGraph> graph, id nodeU, id nodeV);

FOUNDATION_EXPORT ComGoogleCommonGraphEndpointPair *ComGoogleCommonGraphEndpointPair_ofWithComGoogleCommonGraphNetwork_withId_withId_(id<ComGoogleCommonGraphNetwork> network, id nodeU, id nodeV);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphEndpointPair)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphEndpointPair")
