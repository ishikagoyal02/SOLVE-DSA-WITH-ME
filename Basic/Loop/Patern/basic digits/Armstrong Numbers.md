<h1><a href ="https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1>Armstrong Numbers</a></h1>


----------
## Approach 1 (time out)

class Solution:
    def armstrongNumber (self, n):
        # code here
        stri = str(abs(n))
        lent = len(stri)
        sum = 0
        
        for  i in range(lent):
            sum = sum + ((int(stri[i]))**lent)
            
        return sum == n

----------
## Approach 2

class Solution:
    def armstrongNumber (self, n):
        # code here 
        num = n
        rev = 0
#       Count digits 
        # dig = len(str(n))
        temp = n
        count = 0
        while temp > 0:
            temp = temp //10
            count+=1
        
        
        while num > 0:
            rem = num % 10
            rev += rem **count
            num //=10
        return n == rev
    
## Approach 3 (recomaanded)

def is_armstrong(num):
        k = len(str(num))  # Number of digits
        sum = 0
        n = num

        while n > 0:
            ld = n % 10             # Last digit
            sum += ld ** k          # Add ld^k
            n = n // 10             # Remove digit

        return sum == num


