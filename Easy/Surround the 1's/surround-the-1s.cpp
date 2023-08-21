//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& a) {
        // Code here
        int count=0,n=a.size();
        
        for(int i=0;i<n;i++)
        {
            int m=a[i].size();
            for(int j=0;j<m;j++)
            {
                
                if(a[i][j]==1)
                {
                    
                    int ans=0;
                    
                if(i!=0 && a[i-1][j]==0)
                    ans++;
                
                if(j!=0 && a[i][j-1]==0)
                    ans++;
                    
                if(i!=(n-1) && a[i+1][j]==0)
                    ans++;
                
                if(j!=(m-1) && a[i][j+1]==0)
                    ans++;
                    
                if(i!=0 && j!=0 && a[i-1][j-1]==0)
                    ans++;
                
                if(i!=0 && j!=(m-1) && a[i-1][j+1]==0)
                    ans++;
                    
                if(i!=(n-1) && j!=0 && a[i+1][j-1]==0)
                    ans++;
                
                if(i!=(n-1) && j!=(m-1) && a[i+1][j+1]==0)
                    ans++;
                
                if(ans!=0 && ans%2==0)
                    count++;
                }
                
                
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends