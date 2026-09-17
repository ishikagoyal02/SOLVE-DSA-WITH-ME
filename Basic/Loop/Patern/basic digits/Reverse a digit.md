<h1><a href ="https://www.geeksforgeeks.org/problems/reverse-digit0316/1">Reverse Digits</a></h1>


----------
## Approach 1

	def reverseDigits(self, n):
		# Code here
		s =str(n)
		return int(s[::-1])

----------
## Approach 2

def reverseDigits(self, n):
        rev = 0
        if n == 0:
            return 0
        else:
            while n != 0:
                digit = n %10
                rev = (rev*10) + digit
                n = n//10
        return rev



