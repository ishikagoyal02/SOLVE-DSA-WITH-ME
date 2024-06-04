<h1><a href="https://leetcode.com/problems/longest-palindrome/submissions/1277347268/" target="_blank">Longest Palindrome</a></h1>

```cpp

int longestPalindrome(string s) {
        
        unordered_map<char,int> m;

        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }

        int ans=0;
        bool hasOddFreq= false;

        for(auto i : m)
        {
            if(i.second % 2 ==0)
                ans += i.second;

            else{
                ans +=i.second -1;
                hasOddFreq = true;
            }
                
        }

        if(hasOddFreq)
            ans +=1;

        return ans;
    }

    ```