<h1><a href ="https://leetcode.com/problems/isomorphic-strings/description/" target="blank">Isomorphic Strings</a></h1>

```cpp

bool isIsomorphic(string s, string t) {
        
        unordered_map<int,int> m1 , m;

        if(s.size()!=t.size())
            return false;

        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]==0 && m1[t[i]]==0)
            {
                m[s[i]]=t[i];
                m1[t[i]]=s[i];
            }

            if(m[s[i]]!= t[i]  && m1[t[i]]!=s[i])
                return false;
        }
        return true;
    }
    
```