<h1><a href="https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/description/">Minimum Length of string after deleting similar ends</a></h1>

```cpp

int minimumLength(string s) {
        
        int n= s.size();
        int i=0,j=n-1;

        while(i<j)
        {
            if(s[i]==s[j])
            {
                while(s[i]==s[i+1] && i<j) i++;
                while(s[j]==s[j-1] && i<j) j--;

                i++;
                j--;
            }
            else
                break;
        }

        int ans = j - i+1;
        if(ans<0)return 0;
        return ans;
    }
    
```