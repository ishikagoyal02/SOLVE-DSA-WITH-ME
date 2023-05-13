//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007

// } Driver Code Ends
class Solution{
    public:
    //You need to complete this fucntion
    
    long long check(int n,int r)
    {
        //int mod=1e9+7;
        if(r==0)
            return 1;
        if(n==0)
            return 0;
            
        if(r%2==0)
            {
                long long ans=check(n,r/2);
                return (ans%mod *ans%mod)%mod;
            }
        else
        {
             long long ans=check(n,(r-1)/2);
             return(ans%mod *ans%mod *n%mod)%mod;
        }
          
    }
    
    long long power(int N,int R)
    {
           return check(N,R);
        
    }

};

//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends