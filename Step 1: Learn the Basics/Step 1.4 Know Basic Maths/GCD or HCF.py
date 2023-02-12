#problem link:  https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1
"""
Input:
5 10

Output:
10 5

"""
def gcd(self, a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b)
a,b = map(int,input().split())
_gcd = gcd(a,b)
lcm = a*b // _gcd
print(lcm,_gcd)