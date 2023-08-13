//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        if(a.size()!=b.size())
            return false; 
            
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        
        for(int i=0;i<a.size();i++)
        {
            m1[a[i]]++;
            m2[b[i]]++;
        }
        
        if(m1!=m2)
            return false;
        return true;    
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends