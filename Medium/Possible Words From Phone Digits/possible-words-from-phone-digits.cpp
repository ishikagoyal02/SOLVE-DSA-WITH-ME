//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    
    void find(int ind,int a[],vector<string> keys,vector<string> &ans,string s,int n)
    {
        if(ind==n)
        {
            ans.push_back(s);
            return;
        }
        int x=a[ind];
        string st=keys[x];
        for(int i=0;i<st.size();i++)
        {
            s+=st[i];
            find(ind+1,a,keys,ans,s,n);
            s.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> ans;
        string s;
        
        vector<string> keys={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz","",""};
        
        find(0,a,keys,ans,s,N);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends