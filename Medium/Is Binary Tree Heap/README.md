<h2><a href="https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article">Is Binary Tree Heap</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary tree. The task is to check whether the given tree follows the&nbsp;<strong>max heap</strong> property or not.<br>
<strong>Note:&nbsp;</strong>Properties of a tree to be a max heap - Completeness and Value of node greater than or equal to its child.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 5
 &nbsp;&nbsp;&nbsp;/  \
&nbsp;&nbsp; 2    3
<strong>Output: </strong>1
<strong>Explanation:</strong>&nbsp;The given tree follows <strong>max-heap</strong>&nbsp;property since 5,
is root and it is greater than both its children.
</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10
 &nbsp;&nbsp;&nbsp;&nbsp;/&nbsp;&nbsp; \
 &nbsp;&nbsp;&nbsp;20&nbsp;&nbsp; 30 
&nbsp;&nbsp;/&nbsp;&nbsp; \
 40&nbsp;&nbsp; 60
<strong>Output:</strong> 0</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the&nbsp;function <strong>isHeap()</strong>&nbsp;which takes the root of Binary Tree as parameter returns <strong>True</strong> if the given binary tree is a&nbsp;<strong>heap</strong>&nbsp;else&nbsp;returns <strong>False</strong>.<br>
<br>
<strong>Expected Time Complexity: </strong>O(N)<br>
<strong>Expected Space Complexity: </strong>O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ Number of nodes ≤ 100<br>
1 ≤ Data of a node ≤ 1000</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Hike</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Heap</code>&nbsp;<code>Data Structures</code>&nbsp;