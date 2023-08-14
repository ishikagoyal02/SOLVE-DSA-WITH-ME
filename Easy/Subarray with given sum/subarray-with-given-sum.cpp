//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
    int i = 0, j = 0, sum = 0;
    vector<int> v;
    
    while (j < n) {
        sum += arr[j];
        
        while (sum > s && i < j) {
            sum -= arr[i];
            i++;
        }
        
        if (sum == s) {
            v.push_back(i + 1); // Converting 0-based indexing to 1-based indexing
            v.push_back(j + 1); // Converting 0-based indexing to 1-based indexing
            return v;
        }
        
        j++;
    }
    
    v.push_back(-1); // If no subarray found
    return v;
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends