<h1><a href="https://leetcode.com/problems/minimum-common-value/description/" target="_blank"> Minimum Common Value</a></h1>

# METHOD 1 (TLE)
```cpp

int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        for(int i=0;i<nums1.size();i++)
        {
            if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end())
                return nums1[i];
        }
        return -1;
    }

```

# METHOD 2 ( USING 2 LOOPS)

```cpp

int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]<nums2[j])
                    break;

                else if(nums1[i]==nums2[j])
                    return nums1[i];
            }
                
        }

        return -1;
    }

```

# METHOD 3 (USING SLIDING WINDOW)

```cpp
 int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int i=0,j=0;

        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
                return nums1[i];

            if(nums1[i]<nums2[j])
                i++;

            else if(nums1[i]> nums2[j])
                j++;
        }

        return -1;
    }

```