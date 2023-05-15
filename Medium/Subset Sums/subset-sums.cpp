//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void funct(int ind,int sum,vector<int> arr, vector<int>&ans,int n)
    {
        if(ind==n)
        {
            ans.push_back(sum);
            return;
        }
        
        sum+=arr[ind];
        funct(ind+1,sum,arr,ans,n);
        
        sum-=arr[ind];
        funct(ind+1,sum,arr,ans,n);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        vector<int> ans;
        funct(0,0,arr,ans,n);
        //ans.push_back(0);
        sort(ans.begin(),ans.end());
        //ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends