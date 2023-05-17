//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    
        void find(int open,int close,vector<string>&ans,string s)
        {
            if(open==0 && close==0)
            {
                ans.push_back(s);
                return;
            }
            
            if(open!=0)
            {
                s+="(";
                find(open-1,close,ans,s);
                s.pop_back();
            }
            
            if(close>open)
            {
                
                s+=")";
                find(open,close-1,ans,s);
            }
        }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        string s;
        int open,close;
        open=close=n;
        
        find(open,close,ans,s);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends