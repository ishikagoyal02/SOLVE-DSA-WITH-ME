<h1><a href ="https://www.geeksforgeeks.org/problems/solid-rectangle/1"> Solid Rectangle </a></h1>


----------
## Approach 1

n = int(input())
m = int(input())

# code here
for i in range(n):
    for j in range(m):
        print("*",end=" ")
    print()

----------
## Approach 2

n = int(input())
m = int(input())

# Create a single row: "* * * * * " -> strip the last space -> "* * * * *"
row = ("* " * m).rstrip()

for i in range(n):
    print(row)

----------
## Approach 3

n = int(input())
m = int(input())\

# Generates a list: ['*', '*', '*', '*', '*']
# .join() turns it into: "* * * * *"
row = " ".join(["*"] * m)

for i in range(row)
    print(i)

