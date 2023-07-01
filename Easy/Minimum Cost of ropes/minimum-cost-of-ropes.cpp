//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        
        priority_queue<long long,vector<long long>,greater<long long>>p;
        long long ans=0;
        long long sum=0;
        
        for(int i=0;i<n;i++)
            p.push(arr[i]);
        
        int i=0;    
        while(!p.empty())
        {
            i++;
            ans +=p.top();
            p.pop();
            
            if(i==2)
            {
                p.push(ans);
                sum +=ans;
                i=0;
               // cout<<"sum: "<<sum<<endl;
                ans=0;
            }    
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends