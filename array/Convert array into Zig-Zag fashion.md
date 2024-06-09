<h1><a href ="https://www.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1" target="_blank">Convert array into Zig-Zag fashion</a></h1>

```cpp

void zigZag(int n, vector<int> &arr) {
       
        // odd position must have greater valye than neighbouring index
        
        for(int i=0;i<n-1;i++)
        {
            if(i%2==0 && arr[i]>arr[i+1])
            
                swap(arr[i],arr[i+1]);

            
            else if(i%2==1 && arr[i+1]>arr[i])
                swap(arr[i],arr[i+1]);
            
        }
        
        
    }
```