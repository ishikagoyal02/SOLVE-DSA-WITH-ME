<h1><a href="https://www.geeksforgeeks.org/problems/maximum-occured-integer4602/1">Maximum Common Integer</a></h1>

```cpp

int maxOccured(int n, int l[], int r[], int maxx) {

        // Your code here
        vector<int> v(maxx + 2, 0);
        
        for(int i=0;i<n;i++)
        {
            v[l[i]]++;
            v[r[i]+1]--;
        }
        
        int ans = -1;
        int maxi=-1;
        int prefixSum =0;
        int i=0;
        
        for(i;i<v.size();i++)
        {
            prefixSum +=v[i];
            
            if(prefixSum>maxi)
            {
                maxi = prefixSum;
                ans =i;
            }
        }
        
        return ans;
    }
```