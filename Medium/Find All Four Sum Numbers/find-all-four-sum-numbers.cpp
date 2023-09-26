//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        
        vector<vector<int> > ans;
       
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int lo=j+1,hi=n-1;
                
                while(lo<hi)
                {
                    sum = arr[i] + arr[j] + arr[lo] +arr[hi];
                    if(sum<k)
                        lo++;
                        
                     else if(sum>k)
                        hi--;
                    
                    else
                    {
                         vector<int> v;
        
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[lo]);
                        v.push_back(arr[hi]);
                        
                        lo++;
                        hi--;
                       // if(find(ans.begin(),ans.end(),v)==ans.end())
                             ans.push_back(v);
                    }
                    
                }
            }
        }
        
        set<vector<int>>s;
        for(auto &vec :ans)
            s.insert(vec);
            
        vector<vector<int>>ans1;
        for(auto vec:s)
            ans1.push_back(vec);
        
        return ans1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends