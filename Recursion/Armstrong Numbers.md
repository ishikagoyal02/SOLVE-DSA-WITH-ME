<h1><a href="https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1" target="_blank">Armstrong Numbers</a></h1>

## METHOD 1

```cpp
 string armstrongNumber(int n) {
       
        int t=0,p=n;
        while(n!=0)
        {
            int f = n%10;
            t +=pow(f,3);
            n=n/10;
        }
        
        if(p==t)
            return "true";
            
        return "false";
    }
```

## METHOD 2

```cpp

int sumOfCubes(int n) {
    if (n == 0) return 0;
    int lastDigit = n % 10;
    return pow(lastDigit, 3) + sumOfCubes(n / 10);
}

string armstrongNumber(int n) {
    if (n == sumOfCubes(n)) return "true";
    return "false";
}

```