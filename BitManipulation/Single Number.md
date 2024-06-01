<h1><a href="https://leetcode.com/problems/single-number-iii/description/">Single Number 3</a></h1>

## METHOD 1(USING MAP)

```cpp

vector<int> singleNumber(vector<int>& nums) {
        
        if(nums.size()==2)
            return nums;
        
        vector<int> ans;

        unordered_map<int,int> m;

        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;

        for(auto el:m)
        {
            if(el.second==1)
                ans.push_back(el.first);
        }

        return ans;
    }

    ```