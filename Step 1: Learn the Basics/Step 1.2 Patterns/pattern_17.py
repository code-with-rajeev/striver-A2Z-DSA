"""

   A
  ABA
 ABCBA
ABCDCBA

"""
N = int(input())
c = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
s = ""
for i in range(1,1+N):
    s = c[:i-1:]
    print(" "*(N-i)+s+c[i-1]+s[::-1])