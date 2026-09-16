<h1><a href ="https://www.geeksforgeeks.org/problems/right-angle-triangle-1605685807/1"> Right Angle Triangle Pattern </a></h1>


----------
## Approach 1

n = int(input())

# code here
for i in range(1,n+1):
    for j in range(i):
        print("*", end=" ")
    print()

----------
## Approach 2

for i in range(N):
            # Print stars in each row
            print("* " * (i + 1))



