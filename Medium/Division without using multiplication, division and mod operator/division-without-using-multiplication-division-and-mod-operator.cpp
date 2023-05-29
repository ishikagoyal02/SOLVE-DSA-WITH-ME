//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        
        int sign=((dividend<0) ^ (divisor<0))?-1:1;
        
        dividend=abs(dividend);
        divisor=abs(divisor);
        int quo=0;
        
        for(int i=31;i>=0;i--)
        {
            if((divisor<<i)<=dividend)
            {
                dividend-=(divisor<<i);
                quo = quo + (1<<i);
            }
        }
        
        return sign*quo;
    }
    
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}

// } Driver Code Ends