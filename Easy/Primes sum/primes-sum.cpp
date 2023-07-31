//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    
    string isprime(int x)
    {
        for(int i=2;i*i<=x;i++)
            if(x%i==0)
                return "No";
        
        return "Yes";        
    }
    string isSumOfTwo(int N){
        // code here
        
        if(N<2*2)
            return "No";
        
        if(N%2==0)
            return "Yes";
        
        //if(isprime(N)=="Yes")
            return isprime(N-2);    
        
        return "No";    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends