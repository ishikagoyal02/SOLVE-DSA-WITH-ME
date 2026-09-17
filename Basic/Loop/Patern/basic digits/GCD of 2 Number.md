<h1><a href ="https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1">GCD OF 2 NUMBEER</a></h1>


----------
## Approach 1 (time out)

class Solution:
    def gcd(self, a, b):
        # code here
        
        n=a
        ans=1
        
        if a>=b:
            n=b
            
        for i in range(1,n+1):
            if((a%i)==0 and (b%i)==0):
                ans=i
                
        return ans

----------
## Approach 2

    def gcd(self, a, b):
        # code here
        
        ans=1
        
        for i in range(min(a,b),1,-1):
            if((a%i)==0 and (b%i)==0):
                return i
                
        return ans
    
## Approach 3

def gcd(self, a, b):
        # code here
        
        if a==b:
            return a
        elif a>b:
            a%=b
        else:
            b%=a
            
        if a == 0:
            return b
        if b == 0:
            return a
            
        return self.gcd(a,b)
    
##Approach 4

class Solution:
    def gcd(self, a, b):
        # code here
            
        if b == 0:
            return a
            
        return self.gcd(b,a % b)



