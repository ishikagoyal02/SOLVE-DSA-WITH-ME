<h1><a href="https://leetcode.com/problems/crawler-log-folder/description/"> Crawler Log Folder</a></h1>

```cpp
int minOperations(vector<string>& logs) {
        
        int ans =0;

        for(int i=0;i<logs.size();i++)
        {
            if(logs[i]=="../" )
            {
                if(ans > 0)
                    ans--;
            }

            else if(logs[i]=="./")
                continue;
            
            else
                ans++;
                
        }
        return ans;
    }

```