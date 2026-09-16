<h1><a href ="https://www.geeksforgeeks.org/problems/right-angled-number-triangle/1"> Right-Angled Number Triangle Pattern
 </a></h1>


----------
## Approach 1

n = int(input())

# code here
for i in range(1,n+1):
    for j in range(1,i+1):
        print(j, end =" ")
    print()

----------
## Approach 2

for i in range(1, n + 1):
    print(" ".join(map(str, range(1, i + 1))))




