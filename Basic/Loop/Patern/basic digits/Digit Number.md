<h1><a href ="https://www.geeksforgeeks.org/problems/count-total-digits-in-a-number/1"> Count Total Digits in a Number
 </a></h1>


----------
## Approach 1

def countDigits(self, n):
        # code here
        count = 0
        while n != 0:
            n //= 10
            count+=1
        return count

----------
## Approach 2

def countDigits(self, n):
        # code here
        return len(str(abs(n)))


----------
## Approach 3

 def countDigits(self, n):
        # code here
        if n == 0:
            return 0
        return 1 + self.countDigits(n//10)

https://pynative.com/python-count-digits-of-number/

