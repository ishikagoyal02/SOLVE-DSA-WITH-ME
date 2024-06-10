<h1><a href="https://leetcode.com/problems/height-checker/description/" target="_blank">Height Checker</a></h1>

```cpp

 int heightChecker(vector<int>& heights) {
        
        vector<int> so;
        so=heights;

        int ans=0;

        sort(so.begin(),so.end());

        for(int i=0;i<heights.size();i++)
            if(heights[i]!=so[i])
                ans++;

        return ans;
    }

```