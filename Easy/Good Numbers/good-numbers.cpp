//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    bool isgood(int i,int d,int sum)
    {
        if(i==0)
            return true;
        int digit=i%10;
        
        if(digit==d)
            return false;
            
        if(sum==-1)
            return isgood(i/10,d,digit);
        
        if(digit>sum)
            return isgood(i/10,d,digit+sum);
            
        return false;    
    }
    vector<int> goodNumbers(int L, int R, int D) {
      
      vector<int> v;
      for(int i=L;i<=R;i++)
      {
          if(isgood(i,D,-1))
          {
              v.push_back(i);
          }
      }
      return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, D;
        cin >> L >> R >> D;
        Solution ob;
        vector<int> ans = ob.goodNumbers(L, R, D);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends