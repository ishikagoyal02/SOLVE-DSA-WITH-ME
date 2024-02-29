<h1><a href="https://www.geeksforgeeks.org/problems/sum-of-bit-differences2937/1" target="_blank">Sum of Bit difference</a></h1>

```cpp
	
	long long sumBitDifferences(int arr[], int n) {
	    long count = 0;

        for (int i = 0; i < 32; i++) { 

            int countSet = 0;

            for (int j=0;j<n;j++) {

                if ((arr[j] >> i & 1) == 1) {

                    countSet++;

                }

            }

            count += (countSet * (long) (n - countSet)) * 2; 

        }

        return count;

   
	}
```