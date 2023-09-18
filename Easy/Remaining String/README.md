<h2><a href="https://practice.geeksforgeeks.org/problems/remaining-string3515/1">Remaining String</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string&nbsp;<strong>S</strong> without spaces, a character <strong>ch</strong>, and an integer&nbsp;<strong>count</strong>, the task is to find the string after the specified character has occurred count number of times. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>  S = "Thisisdemostring", ch = 'i', 
count = 3
<strong>Output:</strong> ng
<strong>Explanation:</strong> Substring of S after the 3rd
occurrence of 'i' is "ng"</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>  S = "Thisisdemostri", ch = 'i', 
count = 3
<strong>Output:</strong> Empty string
<strong>Explanation:</strong> 'i' occurce 3rd time at 
last index
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Your task is to complete the function&nbsp;<strong><code>printString</code>()&nbsp;</strong>which takes a single, a character, and a count as inputs and returns the string. You need not take any input or print anything.</span></p>

<p><span style="font-size:18px"><strong>Note:&nbsp;</strong>&nbsp;“Empty string” should be returned incase of any unsatisfying conditions (Given character is not present, or present but less than given count, or given count completes on the last index). If given count is 0, then given character doesn’t matter, just return the whole string.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|s|)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |S| &lt;= 10<sup>5</sup><br>
Assume upper case and lower case<br>
alphabets as different</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Oracle</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;