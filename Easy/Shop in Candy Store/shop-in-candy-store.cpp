//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    
    int minCost(int candies[], int N, int K)
    {
        
        
        int cost=0;
        int i=0;
        while(i!=N)
        {
            cost+=candies[i];
            i-=K;
        }
        return cost;
    }
    
    // int maxCost(int candies[], int N, int K)
    // {
        
    // }
    vector<int> candyStore(int candies[], int N, int K)
    {
        vector<int> v;
        sort(candies,candies+N);
        
        //int mincost=minCost(candies,N,K);
        int cost=0;
        int free=N-1;
        int start=0;
        
        while(start<=free)
        {
            cost +=candies[start];
            free -=K;
            start++;
        }
        
        
        v.push_back(cost);
        
        cost=0;
        free=0;
        start=N-1;
         while(start>=free)
        {
            cost +=candies[start];
            free +=K;
            start-=1;
        }
        v.push_back(cost);
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends