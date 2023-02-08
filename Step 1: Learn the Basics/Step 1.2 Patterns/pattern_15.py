"""

ABCDE
ABCD
ABC
AB
A

"""
N = int(input())
c = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for i in range(N):
    print(c[:N-i:])