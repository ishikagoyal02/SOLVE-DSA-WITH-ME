<h1><a href="https://leetcode.com/problems/find-the-pivot-integer/description/" target="_blank">Find The Pivot Integer</a></h1>

```cpp

int pivotInteger(int n) {

        int sum = 0;

        for(int i=1;i<=n;i++)
            sum += i;

        int t = 0;
        for(int i=0;i<=n;i++)
        {
             t +=i;
            if(t == sum-t+i)
                return i;
        }
        return -1;
    }
    
```