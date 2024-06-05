<h1><a href="https://leetcode.com/problems/find-common-characters/description/" target="_blank">Find Common Characters</a></h1>

```cpp

 vector<int> count(string &words)
    {
        vector<int> freq(26,0);

        for(int i=0;i<words.size();i++)
            freq[words[i]-'a']++;

        return freq;
    }

    vector<int> intersection(const vector<int> & a, const vector<int> & b)
    {
        vector<int> last(26,0);

        for(int i=0;i<26;i++)
            last[i]=min(a[i],b[i]);

        return last;
    }
    vector<string> commonChars(vector<string>& words) {

        vector<string>ans;

        vector<int> last = count(words[0]);

        for(int i=1;i<words.size();i++)
            last = intersection(last,count(words[i]));

        for(auto i=0;i<last.size();i++)
        {
            while(last[i]!=0)
            {
                ans.push_back(string(1,i+'a'));
                last[i]--;
            }
        }

        return ans;
    }

```

