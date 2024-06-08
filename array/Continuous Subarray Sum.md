<h1><a href="https://leetcode.com/problems/continuous-subarray-sum/description/" target="_blank">Continuous Subarray Sum</a></h1>


## METHOD 1 (O(n^2)  94/99 )
```cpp

 bool checkSubarraySum(vector<int>& nums, int k) {
    
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum =nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                sum +=nums[j];
                if(sum%k==0)
                    return true;
            }

            if(sum%k==0)
                return true;
        }

        return false;
    }
```

## METHOD 2

```cpp

 bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> m;
       
        m[0]=-1;
        int culSum =0;

        for(int i=0;i<nums.size();i++)
        {
             culSum+=nums[i];
            int sum = culSum % k;

          if(m.find(sum)!=m.end())
            {

                if(i - m[sum] >= 2)
                    return true;
            }

            else
                 m[sum]=i;
                
        }
        return false;
    }
```