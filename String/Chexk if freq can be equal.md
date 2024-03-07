<h1><a href="https://www.geeksforgeeks.org/problems/check-frequencies4211/1">Check if frequencies can be equal</a></h1>

```cpp
bool sameFreq(string s)
	{
	    unordered_map<char,int>m;
	    
	    for(int i = 0; i<s.size();i++)
	        m[s[i]]++;
	        
	    int mini =INT_MAX;
	    for(auto it: m)
	    {
	        mini = min(mini,it.second);
	    }
	    
	    int flag=0;
	    for(auto it : m)
	    {
	        if(it.second > mini)        // freq is greater than the mini freq
	        {
	            if(flag!=0)             // already removes a character
	                return false;
	            else
	            {
	                if(it.second - mini ==1)        
	                    flag=1;
	                else
	                    return flag;        // after removing 1 char, still all freq will not equal
	            }
	        }
	            
	    }
	    
	    return true;
	}

```