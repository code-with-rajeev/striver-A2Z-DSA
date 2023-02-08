"""

A
AB
ABC
ABCD
ABCDE

"""
N = int(input())
c = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for i in range(1,1+N):
    print(c[:i:])