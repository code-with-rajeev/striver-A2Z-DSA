#problem link:  https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
"""
Input:
153

Output:
Yes

"""
n = int(input())
ans = 0
t = n
while n!=0:
    i = n%10
    n//=10
    ans+= i**3
    if t==ans :
        print("Yes")
    else:
        print("No")