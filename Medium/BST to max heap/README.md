<h2><a href="https://practice.geeksforgeeks.org/problems/bst-to-max-heap/1">BST to max heap</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a&nbsp;Binary Search Tree. Convert a given BST into a Special Max Heap with the condition that all the values in the left subtree of a node should be less than all the values in the right subtree of the node. This condition is applied on all the nodes in the so converted Max Heap.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
                 4
               /   \
              2     6
            /  \   /  \
           1   3  5    7  

<strong>Output :</strong> 1 2 3 4 5 6 7 
<strong>Exaplanation :</strong>
               7
             /   \
            3     6
          /   \  /   \
         1    2 4     5
The given <strong>BST</strong> has been transformed into a
<strong>Max Heap </strong>and it's postorder traversal is
1 2 3 4 5 6 7.</span>

</pre>

<div><span style="font-size:18px"><strong>Your task :</strong></span></div>

<div><span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function convertToMaxHeapUtil() which takes the root of the tree as input and converts the BST to max heap. </span></div>

<div><span style="font-size:18px">Note : The driver code prints the postorder traversal of the converted BST.</span></div>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Expected Time Complexity : </strong>O(n)</span></div>

<div><span style="font-size:18px"><strong>Expected Auxiliary Space : </strong>O(n)</span></div>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Constraints :</strong></span></div>

<div><span style="font-size:18px">1 ≤ n ≤ 10<sup>5</sup></span></div>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>DE Shaw</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Heap</code>&nbsp;<code>Data Structures</code>&nbsp;