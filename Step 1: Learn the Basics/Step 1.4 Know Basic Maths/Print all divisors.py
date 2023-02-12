#problem link:  https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
"""
Input:
5

Output:
21

"""
N = int(input())
ans = 0
for j in range(1,N+1):
    ans += (N//j)*j
print(ans)
