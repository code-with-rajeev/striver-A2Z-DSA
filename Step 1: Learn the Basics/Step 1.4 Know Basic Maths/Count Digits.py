#problem link:  https://practice.geeksforgeeks.org/problems/count-digits5716/1

"""
Input:
23

Output:
0
"""

N = int(input())
ans = 0
for i in str(N):
    if i!='0' and N%int(i) ==0 :
        ans +=1
print(ans)