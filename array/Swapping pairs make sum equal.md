<h1><a href="https://www.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal4142/1" target="_blank">Swapping pairs make summ equal</a></h1>

## METHOD 1 (1300/1303)

```cpp

int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        
        int asum=0, bsum=0;
        
        for(int i=0;i<n;i++)
            asum+=a[i];
            
        for(int i=0;i<m;i++)
            bsum+=b[i];
            
        int diff = abs(asum - bsum);
        
        if(diff ==0)
            return 1;
            
        if(diff%2 !=0)
            return -1;
        
        for(auto i=0;i<n;i++)
            for(auto j=0;j<m;j++)
            {
                if((diff -a[i])==b[j])
                    return 1;
            }
                
        return -1;
            
    }

```

## METHOD 2 (use set)

```cpp

 int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        
        int asum=0, bsum=0;
        unordered_set<int> s;
        
        for(int i=0;i<n;i++)
            asum+=a[i];
            
        for(int i=0;i<m;i++)
        {
            bsum+=b[i];
            s.insert(b[i]);
        }
            
        int diff = abs(asum - bsum);
        
        if(diff ==0)
            return 1;
            
        if(diff%2 !=0)
            return -1;
            
        for(int i=0;i<n;i++)                // (asum -ai) +bi = (bsum - bi) +ai
        {
            int bi = (bsum-asum)/2 +a[i];
            
            if(s.find(bi)!=s.end())
                return 1;
        }
                
        return -1;
            
    }

    ```