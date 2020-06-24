//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/graph/BaseGraph.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphBaseGraph")
#ifdef RESTRICT_ComGoogleCommonGraphBaseGraph
#define INCLUDE_ALL_ComGoogleCommonGraphBaseGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphBaseGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphBaseGraph

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphBaseGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphBaseGraph || defined(INCLUDE_ComGoogleCommonGraphBaseGraph))
#define ComGoogleCommonGraphBaseGraph_

#define RESTRICT_ComGoogleCommonGraphSuccessorsFunction 1
#define INCLUDE_ComGoogleCommonGraphSuccessorsFunction 1
#include "com/google/common/graph/SuccessorsFunction.h"

#define RESTRICT_ComGoogleCommonGraphPredecessorsFunction 1
#define INCLUDE_ComGoogleCommonGraphPredecessorsFunction 1
#include "com/google/common/graph/PredecessorsFunction.h"

@class ComGoogleCommonGraphElementOrder;
@protocol JavaUtilSet;

/*!
 @brief A non-public interface for the methods shared between <code>Graph</code> and <code>ValueGraph</code>.
 @author James Sexton
 */
@protocol ComGoogleCommonGraphBaseGraph < ComGoogleCommonGraphSuccessorsFunction, ComGoogleCommonGraphPredecessorsFunction, JavaObject >

/*!
 @brief Returns all nodes in this graph, in the order specified by <code>nodeOrder()</code>.
 */
- (id<JavaUtilSet>)nodes;

/*!
 @brief Returns all edges in this graph.
 */
- (id<JavaUtilSet>)edges;

/*!
 @brief Returns true if the edges in this graph are directed.Directed edges connect a <code>node</code>
  to a <code>node</code>, while
  undirected edges connect a pair of nodes to each other.
 */
- (jboolean)isDirected;

/*!
 @brief Returns true if this graph allows self-loops (edges that connect a node to itself).Attempting
  to add a self-loop to a graph that does not allow them will throw an <code>IllegalArgumentException</code>
 .
 */
- (jboolean)allowsSelfLoops;

/*!
 @brief Returns the order of iteration for the elements of <code>nodes()</code>.
 */
- (ComGoogleCommonGraphElementOrder *)nodeOrder;

/*!
 @brief Returns the nodes which have an incident edge in common with <code>node</code> in this graph.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (id<JavaUtilSet>)adjacentNodesWithId:(id)node;

/*!
 @brief Returns all nodes in this graph adjacent to <code>node</code> which can be reached by traversing 
 <code>node</code>'s incoming edges <i>against</i> the direction (if any) of the edge.
 <p>In an undirected graph, this is equivalent to <code>adjacentNodes(Object)</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (id<JavaUtilSet>)predecessorsWithId:(id)node;

/*!
 @brief Returns all nodes in this graph adjacent to <code>node</code> which can be reached by traversing 
 <code>node</code>'s outgoing edges in the direction (if any) of the edge.
 <p>In an undirected graph, this is equivalent to <code>adjacentNodes(Object)</code>.
  
 <p>This is <i>not</i> the same as "all nodes reachable from <code>node</code> by following outgoing
  edges". For that functionality, see <code>Object)</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (id<JavaUtilSet>)successorsWithId:(id)node;

/*!
 @brief Returns the edges in this graph whose endpoints include <code>node</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 @since 24.0
 */
- (id<JavaUtilSet>)incidentEdgesWithId:(id)node;

/*!
 @brief Returns the count of <code>node</code>'s incident edges, counting self-loops twice (equivalently,
  the number of times an edge touches <code>node</code>).
 <p>For directed graphs, this is equal to <code>inDegree(node) + outDegree(node)</code>.
  
 <p>For undirected graphs, this is equal to <code>incidentEdges(node).size()</code> + (number of
  self-loops incident to <code>node</code>).
  
 <p>If the count is greater than <code>Integer.MAX_VALUE</code>, returns <code>Integer.MAX_VALUE</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (jint)degreeWithId:(id)node;

/*!
 @brief Returns the count of <code>node</code>'s incoming edges (equal to <code>predecessors(node).size()</code>)
  in a directed graph.In an undirected graph, returns the <code>degree(Object)</code>.
 <p>If the count is greater than <code>Integer.MAX_VALUE</code>, returns <code>Integer.MAX_VALUE</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (jint)inDegreeWithId:(id)node;

/*!
 @brief Returns the count of <code>node</code>'s outgoing edges (equal to <code>successors(node).size()</code>)
  in a directed graph.In an undirected graph, returns the <code>degree(Object)</code>.
 <p>If the count is greater than <code>Integer.MAX_VALUE</code>, returns <code>Integer.MAX_VALUE</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (jint)outDegreeWithId:(id)node;

/*!
 @brief Returns true if there is an edge directly connecting <code>nodeU</code> to <code>nodeV</code>.This is
  equivalent to <code>nodes().contains(nodeU) && successors(nodeU).contains(nodeV)</code>.
 <p>In an undirected graph, this is equal to <code>hasEdgeConnecting(nodeV, nodeU)</code>.
 @since 23.0
 */
- (jboolean)hasEdgeConnectingWithId:(id)nodeU
                             withId:(id)nodeV;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphBaseGraph)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphBaseGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphBaseGraph")
