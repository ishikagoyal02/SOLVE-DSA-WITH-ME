<h2><a href="https://practice.geeksforgeeks.org/problems/subset-sum-ii/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=subset-sum-ii">Subset II</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an integer array <strong>nums</strong> that may contain duplicates. Your task is to return all possible subsets. Return only unique subsets and they can be in any order.</span></p>

<p><span style="font-size:18px"><strong>Example:</strong> </span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
nums = [1,2,2] 
<strong>Output:</strong> 
[[],[1],[1,2],[1,2,2],[2],[2,2]]
<strong>Explanation:</strong> 
We can have subsets ranging from length 0 to 3. which are listed above. Also the subset [1,2] appears twice but is printed only once as we require only unique subsets.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function vector&gt; printUniqueSubset(), which takes &nbsp;a vector nums and return a vector of vector consisting of all unique subsets.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(K2<sup>N</sup>).<br>
<strong>Expected Auxiliary Space:</strong> O(K2<sup>N</sup>).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= nums.length &lt;= 10<br>
-10 &lt;= nums[i] &lt;= 10</span></p>
</div>