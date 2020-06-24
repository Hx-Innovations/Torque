//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/collect/TreeTraverser.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeTraverser")
#ifdef RESTRICT_ComGoogleCommonCollectTreeTraverser
#define INCLUDE_ALL_ComGoogleCommonCollectTreeTraverser 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTreeTraverser 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTreeTraverser

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTreeTraverser_) && (INCLUDE_ALL_ComGoogleCommonCollectTreeTraverser || defined(INCLUDE_ComGoogleCommonCollectTreeTraverser))
#define ComGoogleCommonCollectTreeTraverser_

@class ComGoogleCommonCollectFluentIterable;
@class ComGoogleCommonCollectUnmodifiableIterator;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaLangIterable;

/*!
 @brief Views elements of a type <code>T</code> as nodes in a tree, and provides methods to traverse the trees
  induced by this traverser.
 <p>For example, the tree 
 @code
       h
       / | \
      /  e  \
     d       g
    /|\      |
   / | \     f
  a  b  c 
 
@endcode
  
 <p>can be iterated over in preorder (hdabcegf), postorder (abcdefgh), or breadth-first order
  (hdegabcf). 
 <p>Null nodes are strictly forbidden. 
 <p><b>For Java 8 users:</b> Because this is an abstract class, not an interface, you can't use a
  lambda expression to extend it: 
 @code
 // won't work
  TreeTraverser<NodeType> traverser = node -> node.getChildNodes(); 
 
@endcode
  Instead, you can pass a lambda expression to the <code>using</code> factory method: 
 @code
 TreeTraverser<NodeType> traverser = TreeTraverser.using(node -> node.getChildNodes()); 
 
@endcode
 @author Louis Wasserman
 @since 15.0
 */
__attribute__((deprecated))
@interface ComGoogleCommonCollectTreeTraverser : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Returns an unmodifiable iterable over the nodes in a tree structure, using breadth-first
  traversal.That is, all the nodes of depth 0 are returned, then depth 1, then 2, and so on.
 <p>No guarantees are made about the behavior of the traversal when nodes change while iteration
  is in progress or when the iterators generated by <code>children</code> are advanced.
 */
- (ComGoogleCommonCollectFluentIterable *)breadthFirstTraversalWithId:(id)root __attribute__((deprecated));

/*!
 @brief Returns the children of the specified node.Must not contain null.
 */
- (id<JavaLangIterable>)childrenWithId:(id)root;

/*!
 @brief Returns an unmodifiable iterable over the nodes in a tree structure, using post-order
  traversal.That is, each node's subtrees are traversed before the node itself is returned.
 <p>No guarantees are made about the behavior of the traversal when nodes change while iteration
  is in progress or when the iterators generated by <code>children</code> are advanced.
 */
- (ComGoogleCommonCollectFluentIterable *)postOrderTraversalWithId:(id)root __attribute__((deprecated));

/*!
 @brief Returns an unmodifiable iterable over the nodes in a tree structure, using pre-order traversal.
 That is, each node's subtrees are traversed after the node itself is returned. 
 <p>No guarantees are made about the behavior of the traversal when nodes change while iteration
  is in progress or when the iterators generated by <code>children</code> are advanced.
 */
- (ComGoogleCommonCollectFluentIterable *)preOrderTraversalWithId:(id)root __attribute__((deprecated));

/*!
 @brief Returns a tree traverser that uses the given function to navigate from a node to its children.
 This is useful if the function instance already exists, or so that you can supply a lambda
  expressions. If those circumstances don't apply, you probably don't need to use this; subclass 
 <code>TreeTraverser</code> and implement its <code>children</code> method directly.
 @since 20.0
 */
+ (ComGoogleCommonCollectTreeTraverser *)using__WithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)nodeToChildrenFunction __attribute__((deprecated));

#pragma mark Package-Private

- (ComGoogleCommonCollectUnmodifiableIterator *)postOrderIteratorWithId:(id)root;

- (ComGoogleCommonCollectUnmodifiableIterator *)preOrderIteratorWithId:(id)root;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeTraverser)

FOUNDATION_EXPORT void ComGoogleCommonCollectTreeTraverser_init(ComGoogleCommonCollectTreeTraverser *self);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeTraverser *ComGoogleCommonCollectTreeTraverser_using__WithComGoogleCommonBaseFunction_(id<ComGoogleCommonBaseFunction> nodeToChildrenFunction);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeTraverser)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeTraverser")
