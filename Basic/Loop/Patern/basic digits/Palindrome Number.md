<h1><a href ="https://www.geeksforgeeks.org/problems/palindrome0746/1">Palindrome Number</a></h1>


----------
## Approach 1

def isPalindrome(self, n):
		# code here
		s = str(abs(n))
		t = s[::-1]
		return s == t

----------
## Approach 2

def isPalindrome(self, n):
		# code here
		
		if -9<=n<=9:
		    return True
		n=abs(n)
		r=n
		rev=0
		
		
		while n!=0:
		    rev = (rev*10)+(n%10)
		    n//=10
		    
		return rev == r



