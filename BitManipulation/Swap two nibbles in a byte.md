<h1><a href="https://www.geeksforgeeks.org/problems/swap-two-nibbles-in-a-byte0446/1" target="blank">Swap two nibbles in a byte</a></h1>

## METHOD 1
<h2>  on bitwise and of 15 with number -> number will have only last 4 bits
      on bitwise and of 240 with number -> number will have only first 4 bits
        
      for shifting last 4 bit into first 4 bit-> <<4  (right shift)
      for shifting first 4 bit into last 4 bit-> >>4  (left shift)

      then bitwise or
</h2>

```cpp

    int swap(int n)
    {
         return ((n&15)<<4) | ((n&240)>>4);
    }
```


## METHOD 2

```cpp
int swapNibbles(int n) {
        int ans = 0;
        for(int i = 0; i < 8; i++) {
            if((n&1) == 1) {
                if(i < 4)
                    ans = ans + (1 << (4 + i));
                else 
                    ans = ans + (1 << (i - 4));
            }
            n = n >> 1;
        }
        return ans;
    }
```