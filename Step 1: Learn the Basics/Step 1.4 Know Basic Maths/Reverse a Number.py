#problem link:  https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
"""
Input:
1

Output:
2147483648

"""
X = int(input())
s = ""
for i in range(32):
    if X!=0 and X%2 == 0:
        X//=2
        s+="0"
    elif (X!= 0 and X%2 != 0):
        X//=2
        s+="1"
    else:
        s+="0"
    ans = 0
    j = 0
    for i in s[::-1]:
        if i == "1":
            ans+= 2**(j)
        j+=1
print(ans)