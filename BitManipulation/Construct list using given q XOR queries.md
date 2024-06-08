<h1><a href="https://www.geeksforgeeks.org/problems/construct-list-using-given-q-xor-queries/1">Construct list using given q XOR queries</a></h1>


## METHOD 1 (1072/1115 PASSED)
```cpp
 vector<int> constructList(int q, vector<vector<int>> &queries) {
        
        vector<int> v;
        v.push_back(0);
        
        for(int i=0;i<q;i++)
        {
            if(queries[i][0]==0)
                v.push_back(queries[i][1]);
                
            else
            {
                for(int j=0;j<v.size();j++)
                    v[j] = v[j]^queries[i][1];
            }
        }
        
        sort(v.begin(),v.end());
        return v;
    }
```

## METHOD 2

```cpp

 vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
        
        int XOR=0;
        vector<int>ans;
        
        for(int i=q-1;i>=0;i--)
        {
            if(queries[i][0]==0)
                ans.push_back(XOR^queries[i][1]);
            else
                XOR = XOR^queries[i][1];
        }
        
        ans.push_back(XOR);             // 0^ (all queries[i][1])
            
        sort(ans.begin(),ans.end());
            
        return ans;
    }

```