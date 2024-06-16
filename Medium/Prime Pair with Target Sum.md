<h1><a href="https://www.geeksforgeeks.org/problems/sum-of-prime4751/1" target="_blank">Prime Pair with Target Sum</a></h1>

## METHOD 1  (20/1115)

```cpp

 bool isPrime(int i)
   {
       for(int j=2;j<i-1;j++)
            if(i%j==0)
                return false;
                
        return true;
   }

    vector<int> getPrimes(int n) {
        vector<int>a(2,-1);
        
        for(int i=2;i<n;i++)
        {
            if(isPrime(i))
            {
                for(int j=i;j<n;j++)
                    if(isPrime(j) && i+j==n)
                    {
                        a[0]=i;
                        a[1]=j;
                        
                        return a;
                    }
            }
        }
        
        return a;
    }

```

## METHOD 2  (1014/1115)

```cpp
  bool isPrime(int i)
   {
       for(int j=2;j<i-1;j++)
            if(i%j==0)
                return false;
                
        return true;
   }
    vector<int> getPrimes(int n) {
        // code here
        vector<int>a(2,-1);
        
        for(int i=2;i<n;i++)
        {
            if(isPrime(i) && isPrime(n-i))
            {
                a[0]=i;
                a[1]=n-i;
                return a;
            }
        }
        
        return a;
    }

```

## METHOD 3

```cpp

bool isPrime(int i) {
    if (i <= 1) return false;
    if (i <= 3) return true; // 2 and 3 are prime
    if (i % 2 == 0 || i % 3 == 0) return false; // handle multiples of 2 and 3
    for (int j = 5; j * j <= i; j ++) {
        if (i % j == 0 ) return false;
    }
    return true;
}
    vector<int> getPrimes(int n) {
        // code here
        vector<int>a(2,-1);
        
        for(int i=2;i<=n/2;i++)
        {
            if(isPrime(i) && isPrime(n-i))
            {
                a[0]=i;
                a[1]=n-i;
                return a;
            }
        }
        
        return a;
    }

```