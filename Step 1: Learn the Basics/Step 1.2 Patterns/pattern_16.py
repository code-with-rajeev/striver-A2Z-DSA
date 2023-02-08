"""

A
BB
CCC
DDDD
EEEEE

"""
N = int(input())
c = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for i in range(1,1+N):
    print(c[i-1]*i)