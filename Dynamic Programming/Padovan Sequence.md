<h1><a href="https://www.geeksforgeeks.org/problems/padovan-sequence2855/1" target="_blank">Padovan Sequence</a></h1>

## METHOD 1

```cpp

 int padovanSequence(int n) {
        
        if(n==0 || n==1 || n==2)
        {
            return 1;
        }
        
         return padovanSequence(n-2) + padovanSequence(n-3);
    }
```

## METHOD 2

```cpp
 int mod = 1e9 +7;
    
    int f(int n,vector<int> dp)
    {
        if(n<=2)
            return dp[n];
        
        for(int i=3;i<=n;i++)
            dp[i]=(dp[i-2] + dp[i-3])% mod;
            
        return dp[n];
    }
    int padovanSequence(int n) {
        
       vector<int> dp(n+1);
       
       dp[0]=dp[1]=dp[2]=1;
       
       return f(n,dp);
    }
    ```