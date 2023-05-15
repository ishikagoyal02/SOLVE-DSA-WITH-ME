//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
     void funct(int ind,int target,vector<int> st, vector<vector<int>> &v,vector<int>can)
    {
            if(target==0 )
            {
                 v.push_back(st);
                  return;    
            }
           
        for(int i=ind;i<can.size();i++)
        {
            if(i>ind && can[i]==can[i-1])
                continue;
            if(can[ind]<=target)
            {
                st.push_back(can[i]);
                funct(i+1,target-can[i],st,v,can);
                st.pop_back();
            }    
        }
        
        //funct(ind+1,target,st,v,can);
    }

    vector<vector<int>> combinationSum2(vector<int>& can, int target) {
        vector<int> st;
        vector<vector<int>> v;
        sort(can.begin(),can.end());
        funct(0,target,st,v,can);
        return v;
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends