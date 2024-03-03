<h1><a href="https://www.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1">Larget Number formed from array</a></h1>

```cpp
	static bool cmp(string& a, string& b){
	    return (a+b>b+a);
	}
	
	string printLargest(int n, vector<string> &arr) {
	    sort(arr.begin(), arr.end(), cmp);
	    string ans="";
	    for(int i=0;i<n;i++)ans+=arr[i];
	    return ans;
	}

```