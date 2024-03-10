<h1><a href="https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1" target="_blank">Remove all duplicates from a given string
</a></h1>

```cpp

string removeDuplicates(string str) {
	    // code here
	    unordered_map<char,bool>m;
	    int i=0;
	    
	    while(i<str.size())
	    {
	        if(m[str[i]]==false)
	        {
	            m[str[i]]=true;
	            i++;
	        }
	            
	       else
	        str.erase(i,1);
	    }
	    
	    return str;
	    
	}

```

# METHOD 2

```cpp

string removeDuplicates(string str) {
    unordered_set<char> seen;
    string result = "";
    for (char c : str) {
        if (!seen.count(c)) {
            seen.insert(c);
            result += c;
        }
    }
    return result;
}

```