<h1><a href="https://leetcode.com/problems/intersection-of-two-arrays/description/" target="_blank">Intersection of two array</a></h1>

# METHOD 1 (USING MAP, SET)
```cpp

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size() , n2 = nums2.size();
        unordered_map<int,int> map;
        unordered_set<int> set;
        vector<int> ans;

        
        for(int i=0;i<n1;i++)
            map[nums1[i]]++;

        for(int i =0 ; i<n2 ; i++)
        {
            if(map.find(nums2[i])!=map.end())
                set.insert(nums2[i]);
        }

        for(auto it: set)
            ans.push_back(it);

        return ans;
    }

```

# Method 2 (USING SET)

```cpp

 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size() , n2 = nums2.size();
        unordered_set<int> set;
        vector<int> ans;

        
        for(int i=0;i<n1;i++)
            set.insert(nums1[i]);

        for (int i = 0; i < n2; i++) {
        // If element from nums2 exists in set, push it to ans
        if (set.find(nums2[i]) != set.end()) {
            ans.push_back(nums2[i]);
            // Erasing from set can be done after processing all elements
            set.erase(nums2[i]);
        }
    }
        return ans;
    }
};

```