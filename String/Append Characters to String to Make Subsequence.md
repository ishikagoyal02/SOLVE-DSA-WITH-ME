<h1><a href="https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/">Append Characters to String to Make Subsequence</a></h1>

```cpp
     int appendCharacters(string s, string t) {
        int ns=s.size(), nt=t.size(), i=0, j=0;
        for(i=0; i<ns; i++){
            if(s[i]==t[j]) j++;
        }
        return nt-j;
    }
```