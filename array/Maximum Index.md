<h1><a href ="https://www.geeksforgeeks.org/problems/maximum-index-1587115620/1" target="_blank">Maximum Index</a></h1>


# METHOD 1( TLE)
```cpp

int maxIndexDiff(int a[], int n) 
    { 
        int large = INT_MIN;
        
        for(int i=0;i<n-1;i++) 
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]<= a[j])
                    large = max(large,j-i);
            }
        }
        
        if(large==INT_MIN)
            return 0;
        return large;
    }

```

# METHOD 2 (1 TESTCASE FAILED)

```cpp

int maxIndexDiff(int a[], int n) 
    { 
        int i=0,j=n-1;
        
        int ans= INT_MIN;
        
        while(j>=i)
        {
            if(a[i]<=a[j])
            {
                ans = max(ans,j-i);
                i++;
                j=n-1;;
            }
            else
                j--;
        }
        
        if(ans==INT_MIN)
            return 0;
        return ans;
    }
    
```