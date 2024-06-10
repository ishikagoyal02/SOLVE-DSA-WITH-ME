<h1><a href="https://www.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1" target="_blank">Nuts and Bolts Problem</a></h1>

```cpp

 void matchPairs(int n, char nuts[], char bolts[]) {
       
        vector<char> expected= { '!','#','$','%','&','*','?','@','^' };
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<n;i++)
            mp[nuts[i]]++;
            
        int i=0;
            
        for(auto it: expected)
        {
            while(i<n && mp[it]>0)
            {
                nuts[i]=it;
                bolts[i]=it;
                i++;
                mp[it]--;
            }
        }
    }
```