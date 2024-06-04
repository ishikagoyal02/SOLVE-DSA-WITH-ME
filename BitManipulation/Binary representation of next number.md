<h1><a href="https://www.geeksforgeeks.org/problems/binary-representation-of-next-number3648/1">Binary representation of next number</a></h1>

## METHOD 1 (TLE)

```cpp

  string binaryNextNumber(string s) {
        // code here.
        
        int n=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
               n += (1 << (s.size() - i - 1));
        }
        
        n++;
        
        string ans="";
        while(n!=1)
        {
            ans+=to_string(n%2);
            n=n/2;
        }
        
        ans+='1';
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }

```

## METHOD 2

```cpp

string binaryNextNumber(string s) {
        // code here.
        int i=s.size()-1;
        
        for(i;i>=0;i--)
        {
            if(s[i]=='0')
            {
                s[i]='1';
                break;
            }
            else
                s[i]='0';
        }
        
        if(i<0)
            s = '1' + s;
            
        i=0;                // for removing the unwanted 0 from left
        
        while(s[i]=='0')
            i++;
            
        s.erase(0,i);
            
        return s;
    }

    ```
