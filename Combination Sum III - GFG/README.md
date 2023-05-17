# Combination Sum III
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Find all valid combinations of <strong>K</strong>&nbsp;numbers that sum upto to <strong>N</strong> such that the following conditions are true:</span></p>

<ul>
	<li><span style="font-size:18px">Only&nbsp;number <strong>1</strong> through <strong>9</strong> are used.</span></li>
	<li><span style="font-size:18px">Each number is used <strong>atmost once</strong>.</span></li>
</ul>

<p><span style="font-size:18px">Return the list of all possible valid combinations.</span></p>

<p><span style="font-size:18px">Note: The list must not contain the same combination twice, and the combinations returned in any order.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div style="--darkreader-inline-bgcolor:#222426; --darkreader-inline-bgimage:initial; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-top:#3e4446; background:#eeeeee; border:1px solid #cccccc; padding:5px 10px"><span style="font-size:18px"><strong>Input:</strong><br>
K = 3<br>
N = 7<br>
<strong>Output:&nbsp;</strong>{ {1, 2, 4} }<br>
<strong>Explanation:</strong>&nbsp;<br>
1+ 2+ 4 = 7<br>
There are no other valid combinations.</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div style="--darkreader-inline-bgcolor:#222426; --darkreader-inline-bgimage:initial; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-top:#3e4446; background:#eeeeee; border:1px solid #cccccc; padding:5px 10px"><span style="font-size:18px"><strong>Input:</strong><br>
K = 3<br>
N = 9<br>
<strong>Output:&nbsp;</strong>{ {1, 2, 6}, {1, 3, 5}, {2, 3, 4}&nbsp;}<br>
<strong>Explanation:</strong>&nbsp;<br>
1 + 2 + 6 = 9<br>
1 + 3&nbsp;+ 5&nbsp;= 9<br>
2 + 3&nbsp;+ 4&nbsp;= 9<br>
There are no other valid combinations.</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 3:</strong></span></p>

<div style="--darkreader-inline-bgcolor:#222426; --darkreader-inline-bgimage:initial; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-top:#3e4446; background:#eeeeee; border:1px solid #cccccc; padding:5px 10px"><span style="font-size:18px"><strong>Input:</strong><br>
K = 4<br>
N = 3<br>
<strong>Output:&nbsp;</strong>{ { } }<br>
<strong>Explanation:</strong>&nbsp;There are no valid combinations.<br>
Using 4 different numbers in the range {1, 9}, the smallest sum we can get is 1 + 2 + 3 + 4 = 10 and since 10 &gt; 3, there are no valid combinations.</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>combinationSum</strong><strong>()</strong>&nbsp;which takes the&nbsp;integers <strong>K&nbsp;</strong>and <strong>N&nbsp;</strong>as parameters and returns a list of all possible valid combinations.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(2<sup>K</sup>)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(K)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ K&nbsp;≤ 9<br>
<sup>1&nbsp;</sup>≤ N<sub>&nbsp;&nbsp;</sub>≤ 60</span></p>
</div>