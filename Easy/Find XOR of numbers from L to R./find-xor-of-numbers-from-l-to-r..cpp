//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    int x(int n)
    {
        if(n%4==0)
            return n;
            
        else if(n%4==1) return 1;
        else if(n%4==2) return n+1;
        else if(n%4==3)
            return 0;
    }
    int findXOR(int l, int r) {
        
        return x(r)^x(l-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        // Input

        int l, r;
        cin >> l >> r;

        Solution obj;
        cout << obj.findXOR(l, r) << endl;
    }
}
// } Driver Code Ends