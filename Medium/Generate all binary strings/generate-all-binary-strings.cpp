//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
    void find(vector<int> s,int k,int nums,int flag)
    {
        if(k==nums)
        {
            for(auto it: s)
                cout<<it;
            cout<<" "    ;
            return;    
        }
        
        s.push_back(0);
        find(s,k+1,nums,0);
        //flag=0;
        
        
        s.pop_back();
        //flag=1;
        if(flag==0)
        {
            s.push_back(1);
            find(s,k+1,nums,1);
        }
        
    }
    void generateBinaryStrings(int num){
        vector<int> s;
        
        find(s,0,num,0);
        return;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends