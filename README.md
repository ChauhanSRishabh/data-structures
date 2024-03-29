# DATA STRUCTURES
Implementing Data Structures in C/C++

## Concepts

### ADT - Abstract Data Type
When we talk about a data structure as ADT, we only talk about the features/operations available with the data structure. We do not go into the implementation details. So, basically we define the data structure as a mathematical/logical model.

### NULL
NULL is basically assigned to a pointer to specify that the pointer points to no valid memory location.

## STACKS

### Stack ADT
A list with the restriction that **insertion and deletion** can only be performed from one end, called **Top**  
Stack is also called **Last In First Out(LIFO)** structure. What goes in last, comes out first.

### Operations
1. **Push()** - Inserting an element into a stack.
2. **Pop()** - Removing the most recent element from the stack.
3. **Top()** - Returns the element at top of the stack
4. **IsEmpty()** - Checks whether the stack is empty or not. Returns *True* if empty, *False* otherwise.

All the operations mentioned above can be performed in constant time, i.e., their time-complexity is **O(1)**

### Applications of Stack
1. **Function calls/Recursion**
2. **undo operation in an editor**
3. **Balanced Parenthesis** - a compiler verifies whether the parenthesis are balanced or not, i.e., to each opening  parenthesis in a source code, there must be a closing parenthesis. Eg- {()}

### Where to use a Stack?
1. Reversal of string
2. Reversal of LL

### Stack STL

When we use **#include \<stack\>**, we have a 'stack' class available to us.  
To create an object of this class, we write **stack\<data_type\> name/identifier**  
Eg : **stack \<char\> S;** creates a stack of characters named S using STL  

#### Functions Available:
1. **S.push(num/char)** - Inserting an element into a stack.
2. **S.pop()** - Removing the most recent element from the stack.
3. **S.top()** - Returns the element at top of the stack.
4. **S.empty()** - Checks whether the stack is empty or not. Returns *True* if empty, *False* otherwise.

## QUEUES

### Queue ADT
A list with the restriction that **insertion** must be at one end, i.e., the **rear or tail** of queue and **deletion** must be performed at the other end, i.e., the **front** of the queue.  
Also called **FIFO(Fist In First Out)**. Whatever goes in fist, comes out first.

### Operations
1. **EnQueue(x) or push(x)** - Inserting an element at the rear/tail.
2. **DeQueue() or pop()** - Removing from the head.
3. **front() or peek()** - Returns the element at front, doesn't delete anything.
4. **IsEmpty()** - Checks whether the queue is empty or not. Returns *True* if empty, *False* otherwise.

All operations must take constant time, i.e., their time-complexity should be **O(1)**

*Have written the alternate names for the operations because most of the time, we do not write our own implementation of a data structure, we use in-built implementations available with language libraries. Eg : The function to insert an element in a queue in C++ is push(), while in C# it's EnQueue*

### Where to use Queues?
Queues are most often used in a scenario where there is a shared resource that's supposed to serve some requests but the resource can handle/serve only one request at a time.

### Applications of Queues
1. **Network Printer**
2. **Computer Processor** - process scheduling
3. **Simulating wait**

## TREES

Array, Linked List, Stack, Queue are all Linear Data Structures. In all of these, data is arranged in a sequential manner. The main disadvantage with linear data structures is that every node has information of next node only. Searching is sequential and is very slow, O(n).  
A tree data structure represents hierarchical relationship among its elements. Searching is very fast. 

### Concepts

<img width="1405" alt="Screenshot 2022-07-08 at 11 34 00 PM" src="https://user-images.githubusercontent.com/15028913/178207605-a2391691-809e-417d-bfc1-303789b6cf72.png">

Each arrow in the diagram is a link.  
When we are walking the tree, we can walk in only one direction. 

#### Terminology

- **Root node** : The topmost node. Only node without a parent ; Node 1  
- **Parent Node** : Node 1 is parent of nodes 2 and 3.  
- **Children** : 2 and 3 are children of 1  
Node 2 is child of 1 but parent of nodes 4, 5 and 6
- **Sibling** : Children of same parent.
2 and 3 are siblings ; 4, 5 and 6 are siblings ; 7 and 8 are siblings  
- **Leaf Node** : Any node in the tree that does not have a child is called Leaf Node ; 4, 6, 8, 9, 10, 11  
- **Grandparent** : Parent of parent.
1 is grandparent of 4 and 4 is grandchild of 1.
- **Ancestor and Descendant** : If we can go from Node A to B, then A can be called ancestor of B, and B can be called descendant of A.  
1, 2 and 5 are all ancestors of 10 and 10 is descendant of all these nodes.  
Common ancestors of 4 and 9 are 1 and 2
- **Cousins** : 6 and 7 do not have the same parent, but the same grandparent, i.e., 1. Hence 6 and 7 are cousins
- **Uncle** : We can say Node 3 is uncle of 6 as it is sibling of Node 2, the parent of Node 6.

#### Properties

##### Tree can be called a recursive data structure.  
We can define tree as a structure that consists of a distinguished node called **root** and some sub-trees and the arrangement is such that the root of the tree contains link to roots of all the sub-trees, T1, T2 and T3.  

<img width="1421" alt="Screenshot 2022-07-11 at 1 21 24 PM" src="https://user-images.githubusercontent.com/15028913/178215267-536161e3-0ce6-42fd-92a2-7bb1119bd201.png">

In the figure above, we have 2 sub-trees for root node(in red), the left subtree in brown and the right subtree in yellow. We can further split the left subtree as such that Node 2 is the root node with 3 subtrees in 3 different colors as shown below. 

<img width="656" alt="Screenshot 2022-07-11 at 3 16 04 PM" src="https://user-images.githubusercontent.com/15028913/178237238-85c6220a-3575-4b4d-8eec-697a132ecd57.png">

##### In a tree with N nodes, there will be exactly N-1 edges.  
All nodes except the root node will have exactly one incoming edge.

##### **Depth and Height**

<img width="1294" alt="Screenshot 2022-07-08 at 11 38 19 PM" src="https://user-images.githubusercontent.com/15028913/178239217-988dbd44-2438-400b-a611-7b9f109f68bd.png">

**Depth of X**(some node) = Length of the path from root to node X. Each edge in the path from root to X will contribute one unit to the length.  
*It can also be said as no. of edges in path from root to node X*.  
For root node , depth is 0
For Nodes 2 and 3, depth is 1.  
For Nodes 4, 5, 6, 7 and 8, depth is 2.  
For Nodes 9, 10 and 11, depth is 3

<img width="697" alt="Screenshot 2022-07-11 at 3 31 32 PM" src="https://user-images.githubusercontent.com/15028913/178240088-3e6b91b5-6701-4530-9b82-519555fb5f78.png">

**Height of X** = No. of edges in longest path from X to a leaf node.  
Height of Node 3 is 2. Node 8 is also a leaf node but the longest path from node 3 to leaf node is 2.  
*Height of leaf nodes will be 0*  
*Height of an Empty Tree* = -1  
*Height of a tree with 1 node* = 0

<img width="697" alt="Screenshot 2022-07-11 at 3 32 10 PM" src="https://user-images.githubusercontent.com/15028913/178240319-123ef26e-44dc-4126-9654-4286befddf10.png">

**Height of Tree** is the height of root node.

*Height and Depth of a node may or may not be same*

#### Applications

1. Storing naturally hierarchical data. eg - file system
2. Organize data for quick search, insertion, deletion. eg - Binary Search Trees
3. Trie : a special kind of tree used to store dictionary
4. Network routing algorithms

### Binary Tree

A tree in which each node can have **atmost 2 children**.  

<img width="1405" alt="Screenshot 2022-07-08 at 11 41 27 PM" src="https://user-images.githubusercontent.com/15028913/178255107-2646e3d2-6754-4663-a2de-540a1a12126d.png">

All these are binary trees.

<img width="1405" alt="Screenshot 2022-07-09 at 12 05 30 AM" src="https://user-images.githubusercontent.com/15028913/178256823-c4ad4b9f-ebd9-4167-8eae-eec5dac1a3a7.png">

#### Strict/Proper Binary Tree

Each node can have either 2 or 0 children.  

<img width="1405" alt="Screenshot 2022-07-09 at 12 05 56 AM" src="https://user-images.githubusercontent.com/15028913/178257476-cb1f9dbd-59b3-4d08-aeb3-55287adc61f4.png">

#### Complete Binary Tree

All levels except possibly the last level are completely filled and all nodes are as left as possible.  
*Maximum no. of nodes at level i = 2^i*

<img width="1405" alt="Screenshot 2022-07-09 at 12 08 26 AM" src="https://user-images.githubusercontent.com/15028913/178259757-f22c74a2-1179-4489-9949-d693a0872c37.png">

**Height of complete binary tree** = *floor of log₂ n*

<img width="704" alt="Screenshot 2022-07-12 at 11 54 37 AM" src="https://user-images.githubusercontent.com/15028913/178422880-421e8d1d-9524-4976-90e4-7ad3ff29d519.png">

#### Perfect Binary Tree

All levels are completely filled. It will have max. no of nodes for a given height *h*.  
*Perfect binary tree is also a complete binary tree*.

<img width="715" alt="Screenshot 2022-07-12 at 11 41 39 AM" src="https://user-images.githubusercontent.com/15028913/178420984-84fb1708-99cd-4260-9bad-432b6b7f7b3d.png">

**Max no. of nodes in a binary tree with height**, *h* = 2^0 + 2^1 + .............. + 2^h = *2^(h+1) - 1*  
*(h+1) is the no. of levels*  
We can also say *2^(no. of levels) - 1*

**Height of a perfect binary tree with n nodes**  
n = 2^(h+1) - 1  
2^(h+1) = n + 1  
*h = log₂(n+1) - 1*

<img width="734" alt="Screenshot 2022-07-12 at 11 52 13 AM" src="https://user-images.githubusercontent.com/15028913/178422503-6bc83297-57d3-4614-99f6-34c765e4892c.png">

#### Time Complexity

With n nodes, *Min height* possible is *floor of log₂ n* and *Max height* possible is *n-1*   
Time taken for an operation is proportional to height of the tree, i.e., **O(h)**  
- For a **Complete/Perfect binary Tree**, time complexity will be **O(log₂ n)**
- For Parse tree, worst case = **O(n)**

Quite often we want to keep the height of a binary tree, minimum possible, or we can say that we try to keep a binary tree, **Balanced**

<img width="1413" alt="Screenshot 2022-07-12 at 12 18 02 PM" src="https://user-images.githubusercontent.com/15028913/178426419-e6b5cef0-5343-4ff3-ad3c-c3ce346f7e4e.png">

#### Balanced Binary Tree

We call a binary tree balanced if for each node, the difference between height of left and right subtree is not more than *k*(mostly 1)

In the figure below, we have a balanced binary tree as max diff is 1.  
<img width="1413" alt="Screenshot 2022-07-12 at 12 30 43 PM" src="https://user-images.githubusercontent.com/15028913/178428536-22a07cad-f079-4a20-8dce-930dc90aa64b.png">

Not a balanced binary tree  
<img width="604" alt="Screenshot 2022-07-12 at 12 31 19 PM" src="https://user-images.githubusercontent.com/15028913/178429095-c22a250a-adc7-481a-aa5d-c5f174e6e3d0.png">

#### Implementation of Binary Tree

We can implement binary tree using :  
1. dynamically created nodes
2. arrays

**Using Arrays** : In a complete binary tree, for a node at index i,
- left-child index = 2i+1
- right-child index = 2i+2

### Traversal Techniques

There are 2 traversal techniques for a binary tree :
1. Breadth-first
2. Depth-first

<img width="1409" alt="Screenshot 2022-07-16 at 7 24 30 PM" src="https://user-images.githubusercontent.com/15028913/179443950-c8701bc3-3ad6-4283-9b31-985bebd1b7f1.png">

#### Breadth-first Approach
Also known as **Level Order Traversal**.  
In breadth-first approach, we would visit all the nodes at same depth/level before visiting the nodes at next level.

**Time Complexity** : **O(n)** ; For all cases, irrespective of the shape of the tree  
A visit to a node will take constant time and each node will be visited exactly once. So *time taken will be proportional to no. of nodes*.

**Space Complexity** :
- **Best Case** : **O(1)**; when each node has exactly one child.  
During each visit, one node will be taken out from the queue and one node will be inserted.
- **Avg & Worst Case** : **O(n)** ; for a perfect binary tree  
As the algorithm proceeds, at some point, for each level, all the nodes in that level will be in the queue. *In a perfect binary tree, we'll have n/2 nodes at the deepest level*. So, max no. of nodes in the queue is going to be atleast n/2. Hence space complexity will be O(n/2)->O(n)

Space complexity as we know is the *measure of rate of growth of extra memory used with input size*. We are not using constant amount of extra memory in this algorithm. We have this queue, that will grow and shrink throughout. Assuming that the queue is dynamic, maximum amount of extra memory used will depend upon maximum no. of elements in the queue at any time. 

#### Depth-first Approach
In this approach, if we go to a child, we would complete the whole subtree of the child before going to the next child.  
Take the tree in the above pic as example, if we start from F(the root node), and go left to D, then we should visit all the nodes in the left subtree, i.e., we should finish this left subtree in it's complete depth or in other words, we should visit all the grandchildren of F along this path before going to right child of F, J. Then do the same for J as done for D.

In depth-first approach, the relative order of visiting the left subtree, the right subtree and the root node can be different. Based on this relative order, there are 3 popular depth-first strategies :
1. **Preorder traversal** : \<root\> \<left\> \<right\>
2. **Inorder traversal** : \<left\> \<root\> \<right\>
3. **Postorder traversal** : \<left\> \<right\> \<root\>

In total there are 6 possible permutations for \<left\>, \<right\> and \<root\> but conventionally, the left subtree is always visited before the right subtree. Hence these are the 3 strategies that we use.

**Time Complexity** : **O(n)** ; For all 3 traversal techniques  
There was one function call for each node where we were actually visiting that node and then we were printing the data in that node. So the running time is proportional to no. of nodes.  
To see the mathematical proof of how the time complexity of these algorithms is O(n), [click here](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)

**Space Complexity** : **O(h)**, *h is the height of the tree*
- **Worst Case** : **O(n)** , h being n-1
- **Best/Avg Case** : **O(log₂ n)** , height is (log₂ n) for a balanced tree

### Binary Search Tree

A BST is a binary tree in which for each node, value of all the nodes in left subtree is lesser or equal and the value of all the nodes in right subtree is greater.  
*We can search, insert and delete in a BST in O(log₂ n) time in average case*  
*Worst case = O(n)*

<img width="620" alt="Screenshot 2022-07-12 at 5 53 14 PM" src="https://user-images.githubusercontent.com/15028913/179442390-d31e2049-fb2f-4138-99b5-d5a4e6ff5287.png">

<img width="1306" alt="Screenshot 2022-07-12 at 5 42 42 PM" src="https://user-images.githubusercontent.com/15028913/178486983-d4667cf4-d6d8-4464-b81f-3e02b9de1643.png">

#### Delete a node from BST

We know that in a BST, for each node, value of all the nodes in left subtree is lesser or equal and the value of all the nodes in right subtree is greater. This property must be conserved after the deletion operation.

**Case 1 : No child/Delete a leaf node**  
Delete the node and clear the link

**Case 2 : Delete a non-leaf node that has only 1 child**  
Delete the node and link it's parent node to it's left/right subtree.  
*Shown below is an example as to what the tree would look like if we were to delete Node with value 7*  

<img width="1409" alt="Screenshot 2022-07-19 at 8 19 20 PM" src="https://user-images.githubusercontent.com/15028913/179780189-0b67868a-d026-4d1f-ad7b-217d8addedf8.png">

**Case 3 : Delete a non-leaf node that has 2 children**  

**Approach 1** : Delete the node and then **find the node with minimum value in the right subtree** of that node which will ultimately take it's place so that the property of BST is conserved.  
It is important to understand that since we are taking the node with minimum value in the right subtree, it **won't have a left child** because if there is a left child, then there is something lesser and we would have picked that instead.  
Hence, the only **2 possible scenarios after picking the node with minimum value** are :
- it may have a right child and then this case reduces to Case 2
- it may have no child and then it reduces to Case 1

**Approach 2** : Same as Approach 1, we only need to **find the node with maximum value in the left subtree**

*Shown below is an example as to what the tree would look like if we were to delete Node with value 15. Node 14(max in left subtree) or Node 17(min in right subtree), either of them can take it's place*  

<img width="1409" alt="Screenshot 2022-07-19 at 8 49 30 PM" src="https://user-images.githubusercontent.com/15028913/179787182-b3256982-2f19-44d7-a016-e1bdec87f346.png">

#### Find Inorder Successor in a BST

We know how Inorder traversal proceeds - visit left-subtree, visit root and finally visit right-subtree. It's time complexity is O(n). Inorder traversal on a BST gives elements in a sorted order. We can figure out the successor while performing the traversal but this will be expensive as running time of inorder is **O(n)**.  
Inorder successor of a node is the node that comes immediately after it in Inorder traversal, or the next high value in the tree.

We are trying to do this in **O(h)**, *h being the height of the tree which is **log₂ n** for a BST*.

**Case 1** : **Node has right subtree**  
Go to the leftmost node in the right subtree. In other words find the minimum in the right subtree as it would be the inorder successor.  
*Given below is the procedure to be followed in order to find the inorder successor of node with value 10*.

![Screenshot 2022-07-21 at 3 32 49 PM](https://user-images.githubusercontent.com/15028913/180187891-79713b01-da21-4e47-95c2-651ff9563af9.png)

**Case 2** : **Node has no right subtree**  

1. If we go from the left, then the parent is unvisited and that will be our successor node.  
*Given below is the procedure to be followed in order to find the inorder successor of node with value 8*.  
<img width="1409" alt="Screenshot 2022-07-21 at 3 36 23 PM" src="https://user-images.githubusercontent.com/15028913/180188601-19aeace0-2600-496a-97fd-fd02115fc456.png">

2. If we go from the right, then the parent would already be visited. Recursion will roll back further to the nearest ancestor for which the node is in the left subtree.  
*Given below is the procedure to be followed in order to find the inorder successor of node with value 12*.  
<img width="1409" alt="Screenshot 2022-07-21 at 3 37 25 PM" src="https://user-images.githubusercontent.com/15028913/180188815-24b070e4-e752-4354-bea8-24331f13b474.png">

**Issue : How do we go from a node to it's parent?**  
1. We can design a tree in such a way that node can have reference to it's parent.  
```
struct Node
{
    char data;
    struct Node *left;
    struct Node *right;
    struct Node *parent;
};
```

2. What if there is no link to parent?  
 We start at root and walk the tree from root to the given node. For a BST, when we walk the tree, we will go through all the ancestors of the given node. Deepest ancestor for which the given node is in the left subtree is our desired node.

 #### Find Inorder Predecessor in a BST

We know how Inorder traversal proceeds - visit left-subtree, visit root and finally visit right-subtree. It's time complexity is O(n). Inorder traversal on a BST gives elements in a sorted order. We can figure out the successor while performing the traversal but this will be expensive as running time of inorder is **O(n)**.  
Inorder predecessor of a node is the node that comes immediately before it in Inorder traversal, or the value lesser than it in the tree.

We are trying to do this in **O(h)**, *h being the height of the tree which is **log₂ n** for a BST*.

**Case 1** : **Node has left subtree**  
Go to the rightmost node in the left subtree. In other words find the maximum in the left subtree as it would be the inorder predecessor.

**Case 2** : **Node has no left subtree**  

The predecessor is the deepest ancestor for which the node is in the right subtree.

## GRAPHS

In a tree with N nodes, we can have exactly N-1 edges. One edge for each parent-child relationship.  
All nodes must be reachable from the root and there must be exactly one possible path from root to a node.

**Tree is only a special kind of graph**.

In a graph, there are no rules dictating the connection among the nodes. A graph contains a sets of nodes and a set of edges and edges can be connecting nodes in any possible way.

*A graph G is an ordered pair of a set V of vertices and as et E of edges*.  
**G = (V, E)**  
ordered pair : (a,b) ≠ (b, a) if a ≠ b  
unordered pair : {a, b} = {b, a}

<img width="1409" alt="Screenshot 2022-07-24 at 5 36 44 PM" src="https://user-images.githubusercontent.com/15028913/180646200-768c079c-d874-4fad-9eb5-52c1b50663b6.png">


### Types of Graph

<img width="1409" alt="Screenshot 2022-07-24 at 5 37 05 PM" src="https://user-images.githubusercontent.com/15028913/180646212-abd15ee0-fb55-4f6c-aafe-3cf8baffeb9f.png">

#### Directed Graph/ Digraph
A directed graph or digraph has ordered pair of vertices (u, v) where u is the tail and v is the head of the edge.  
In this type of graph, a direction is associated with each edge, i.e., (u, v) and (v, u) represent different edges.  
*eg : World Wide Web, Intracity Road Network(will have one-ways)*  
<img width="960" alt="Screenshot 2022-07-24 at 5 50 07 PM" src="https://user-images.githubusercontent.com/15028913/180646699-f28491dd-a3e7-4785-a449-68307ef2c567.png">

#### Undirected Graph
A graph, which has unordered pair of vertices, is called undirected graph. If there is an edge between u and v then it can be represented as (u, v) or (v, u).  
*eg : a social network like facebook*  
<img width="1419" alt="Screenshot 2022-07-24 at 5 50 28 PM" src="https://user-images.githubusercontent.com/15028913/180646713-fe63c80a-6032-4cfd-b6c5-bf36de321051.png">

### Properties

#### Weighted vs Unweighted Graph

Sometimes all the connections in a graph cannot be treated as equal, so we label edges with some weight or cost, i.e., some value is associated to connections. Such a graph is called a weighted graph.  

A graph is unweighted if there is no cost distinction among edges.

#### Kind of edges

1. Self loops : If both end-points of an edge are same or if an edge only involves one vertex, then it's called a self-loop.  
We can have a self-loop in both directed and undirected graph.
*eg : clicking on a link to a page while already being on that page*

2. Multi edge or Parallel edge : If an edge occurs more than once in a graph, then it's called a multi-edge.  
We can have a multi-edge in both directed and undirected graph.  
*eg : various connecting flights between 2 cities*

<img width="1276" alt="Screenshot 2022-07-24 at 7 26 02 PM" src="https://user-images.githubusercontent.com/15028913/180650374-030cc305-8656-4cef-9e82-c5723cf588d7.png">

#### Simple Graph

If a graph contains no self-loop or multi-edge, it's called a Simple Graph

#### Number of edges

For a **directed graph** with 4 vertices, we can have 3 directed edges from each vertex. Total edges = 4*3 = 12.  
Hence for n vertices, maximum number of edges would be **n(n-1)**

For an **undirected graph**, we can only have one edge between 2 vertices as opposed to the 2 for directed.  Hence maximum number of edges would be half of maximum for directed, i.e., **n(n-1)/2**

<img width="1408" alt="Screenshot 2022-08-01 at 11 38 38 AM" src="https://user-images.githubusercontent.com/15028913/182083044-324d6cd3-ebba-46d1-bc86-7959a1a82be5.png">

*Maximum number of edges will be close to square of vertices*.

A graph is called **Dense** if number of edges is close to maximum possible number of edges.  
For a dense graph, we use **Adjacency Matrix**.

A graph is called **Sparse** if number of edges is really less, typically close to number of vertices.  
For a sparse graph, we use **Adjacency List**.

#### Walk, Cycle, Path, Length of path & Trail

**Walk** : A sequence of vertices where each adjacent pair in the sequence is connected by an edge.  
A walk is called a **closed walk** if:
- it starts and ends at the same vertex, and 
- length of the walk is grater than 0.

**Simple cycle** : A closed walk in which other than start and end vertices, no other vertex or edge is repeated.

**Simple Path** : A walk in which no vertices(and thus no edges) are repeated.  

**Length of path** is the number of edges in the path.

**Trail** : A walk in which no edges are repeated.

**Imp** : *Walk and Path are often used as synonyms but most often, when we say path, we mean simple path*.

#### Connected, Strongly connected

**Strongly connected graph** : In a directed graph, if there is a path from any vertex to any other vertex, we call it strongly connected.  
*eg : Intracity road network, we must be able to reach any street from any other street*

If it is an undirected graph, we simply call it **connected**.

If a directed graph is not strongly connected but can be turned into a connected graph by treating all edges as undirected, then such a graph is called **Weakly connected**.

<img width="1408" alt="Screenshot 2022-08-01 at 12 03 53 PM" src="https://user-images.githubusercontent.com/15028913/182086565-b7514f30-332f-43cf-883b-51becd81cc28.png">

#### Acyclic Graph

A graph with no cycle.

A tree if drawn with undirected edges will be an example of Undirected acyclic graph.

<img width="1408" alt="Screenshot 2022-08-01 at 12 19 25 PM" src="https://user-images.githubusercontent.com/15028913/182089017-439e37ea-db32-4230-a153-9e77a50cd7c1.png">

### Graph Representation Technique 1 - Edge List

**Undirected Graph**

<img width="1408" alt="Screenshot 2022-08-01 at 12 24 42 PM" src="https://user-images.githubusercontent.com/15028913/182089944-309a342a-6d07-4490-a70d-95d6fdd5f1d1.png">

**Weighted undirected Graph**

<img width="1408" alt="Screenshot 2022-08-01 at 12 29 20 PM" src="https://user-images.githubusercontent.com/15028913/182090739-5de2a1e0-2977-478a-93c7-c7f4edc9908d.png">

**Improving Memory cost**

For the edge list, we could have names with multiple characters and because strings can be of different lengths, all rows may not be consuming the same amount of memory. More characters will cost us more bytes.

Total space consumed in the Vertex List will be proportional to the number of rows consumed, i.e., the number of vertices, **O(|V|)**.

For the Edge List, we are storing strings in first 2 fields of the Edge object and so each row will not consume same amount of memory but if we are just storing the reference(pointers to the names in the Vertex List), then each row will consume same memory, **O(|E|)**
*We change the type of startVertex and endVertex from string to int*.

Overall Space complexity : **O(|V| + |E|)**

<img width="1408" alt="Screenshot 2022-08-01 at 12 33 42 PM" src="https://user-images.githubusercontent.com/15028913/182091465-f8b3738b-a0b8-4083-8f1f-bc7fe984d332.png">

**Time cost of operations**

One of the most frequently performed operations while working with graph would be finding all nodes adjacent to a given node.  
In this case, we will have to perform a linear search on the Edge List. In worst case, we will have to look at all the entries in the Edge List.  
Worst case time complexity of this operation would be **O(|E|)**

Another frequently performed operation would be finding if 2 given nodes are connected or not?  
In this case also, we will have to perform a linear search on the Edge List. In worst case, we will have to look at all the entries in the Edge List.  
Worst case time complexity of this operation would be **O(|E|)**

We know maximum number of edges is close to **v²**, *v being the number of vertices*  
So O(|E|) = (O(|v|\*O(|v|), which is costly.  
We try to keep things in O(|v|)

All in all, this Vertex List and Edge List kind of representation is **not very efficient** in terms of time-cost of operations.