# Good Numbers
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two positive integers L, R<strong> </strong>and a digit D, find&nbsp;out all the good numbers in the range [L, R], which do not contain the digit<strong> </strong>D.<br>
A number is a good number if it's every digit is larger than the sum of digits which&nbsp;are on the right side of that digit.&nbsp;<br>
9620 &nbsp;is good as (2 &gt; 0, 6 &gt; 2+0, 9 &gt; 6+2+0)</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
L=200
R=700
D=4
<strong>Output:</strong>
{210, 310, 320, 510, 520, 521, 530, 531,
610, 620, 621, 630, 631, 632, 650}
<strong>Explanation:</strong>
These are the only good numbers in the range
[200,700]</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
L=100
R=500
D=5
<strong>Output:</strong>
{210, 310, 320, 410, 420, 421, 430}
<strong>Explanation:</strong>
These are the only good numbers in the range
[100,500]</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function goodNumbers() which takes 3 integers L, R, and D as input parameters and returns all the good numbers in the range [L, R]. (Returns empty if there are no good numbers in that range)</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(N)<br>
<strong>Expected Auxillary Space:</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=L&lt;=R&lt;=10<sup>6</sup><br>
0&lt;=D&lt;10&nbsp;</span></p>
</div>