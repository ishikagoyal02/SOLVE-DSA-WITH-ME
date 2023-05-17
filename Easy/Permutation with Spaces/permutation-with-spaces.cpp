//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    void find(int ind,vector<string>&ans,int flag ,string st,string s)
    {
        if(ind==s.size())
        {
            ans.push_back(st);
            return;
        }
        
        if(flag!=1)
        {
            st+=" ";
            flag=1;
            find(ind,ans,flag,st,s);
            st.pop_back();
        }
        
        st.push_back(s[ind]);
        flag=0;
        find(ind+1,ans,flag,st,s);
    }

    vector<string> permutation(string s){
        vector<string> ans;
        string st;
        
        find(0,ans,1,st,s);
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends