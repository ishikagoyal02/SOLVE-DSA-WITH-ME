<h1><a href="https://leetcode.com/problems/custom-sort-string/description/" target="_blank">Custom Sort String</a></h1>

```cpp

string customSortString(string order, string s) {
        unordered_map<char, int> mp;
        string ans = "";

        // Count occurrences of each character in string s
        for (char c : s)
            mp[c]++;

        // Append characters in the custom order
        for (char c : order) {
            if (mp.find(c) != mp.end()) {
                int t = mp[c];
                while (t != 0) {
                    ans += c;
                    mp[c]--;
                    t--;
                }
                mp.erase(c);
            }
        }

        // Append remaining characters in s
        for (auto& it : mp) {
            int t = it.second;
            while (t != 0) {
                ans += it.first;
                t--;
            }
        }

        return ans;
    }

```