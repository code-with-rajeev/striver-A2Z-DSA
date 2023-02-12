#problem link:  https://practice.geeksforgeeks.org/problems/palindrome0746/1
"""
Input:
55555

Output:
Yes

"""
n = int(input())
if(str(n)==str(n)[::-1]):
	print("Yes")
else:
	print("No")
