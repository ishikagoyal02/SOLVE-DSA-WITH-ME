<h1><a href="https://leetcode.com/problems/subarray-sums-divisible-by-k/" target="_blank">Subarray Sums Divisible by K</a></h1>


```cpp
 int subarraysDivByK(vector<int>& nums, int k) {
        
        int current_Sum =0;
        int CountK=0;
        unordered_map<int,int>m;
        m[0]=1;

        int ans=0;

        for(int i=0;i<nums.size();i++)
        {
            current_Sum +=nums[i];

            int rem = current_Sum%k;

             if (rem < 0) rem += k;

            if(m.find(rem)!=m.end())
            {
                ans+=m[rem];
            }

            m[rem]++;

        }

        return ans;
    }
```

```cpp

 int subarraysDivByK(vector<int>& nums, int k) {
        int  ans=0;
        for(auto &x:nums){
            if(x<0){
                x=-x;
                x=k-(x%k);
            }
        }
        unordered_map<int,int> mpp;
        int x=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            x+=nums[i];
            ans+=mpp[x%k];
            mpp[x%k]++;
        }
        return ans;
        
    }

```