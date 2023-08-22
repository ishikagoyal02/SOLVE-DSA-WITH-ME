//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum +=matrix[i][j];
            }
            v.push_back(sum);
        }
        
        int maxim=*max_element(v.begin(),v.end());
        
        for(int j=0;j<n;j++)
        {
            int sum=0;
            for(int i=0;i<n;i++)
            {
                sum +=matrix[i][j];
            }
            v.push_back(sum);
        }
        
        // for(auto i: v)
        //     cout<<i<<" ";
        
       // cout<<"\n"<<maxim<<"\n";
        
        int maxi=*max_element(v.begin(),v.end());
        
        int lessSum=0;
        
        if(maxim==maxi)                        //indicate that max sum is from row
        {
            for(int i=0;i<n;i++)
            {
               // if(v[i]<=maxim)
                  //  lessSum +=v[i];
                  
                  if(v[i]<maxim)
                    lessSum += (maxim-v[i]);
                
               // cout<<v[i]<<" ";
            }
            //return n*maxim - lessSum;
            return  lessSum;
        }
        
        else                            //indicate max sum is from column
        {
            for(int i=n;i<2*n;i++)
            {
                //if(v[i]<=maxi)
                    //lessSum +=v[i];
                    
                     if(v[i]<maxi)
                    lessSum += (maxi-v[i]);
            }
             //return n*maxi - lessSum;
             return lessSum;
        }
        
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
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends