<h1><a href="" target="_blank">Minimum Increment to Make Array Unique</a></h1>


## METHOD 1
```cpp

int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;

        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]==nums[i])
                {  
                    nums[i]++;
                    ans++;
                }
            }
        }

        return ans; 
    }
    
```