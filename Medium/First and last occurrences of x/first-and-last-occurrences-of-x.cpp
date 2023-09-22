//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        
        int low=0;
        int upr=n-1;
        vector<int> v;
        int small=-1;
        int large=-1;
        
        while(low<=upr)
        {
            int mid =(low+upr)/2;
            
            if(arr[mid]==x)
            {
                upr=mid-1;
                small=mid;
            }
            else if(x>arr[mid])
            {
                low=mid+1;
            }
            else if(x<arr[mid])
                upr=mid-1;
            
        }
        v.push_back(small);
        
        low=0;
        upr=n-1;
        
        while(low<=upr)
        {
            int mid =(low+upr)/2;
            
            if(arr[mid]==x)
            {
                low=mid+1;
                large=mid;
            }
            else if(x>arr[mid])
            {
                low=mid+1;
            }
            else if(x<arr[mid])
                upr=mid-1;
            
        }
        v.push_back(large);
        
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
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends