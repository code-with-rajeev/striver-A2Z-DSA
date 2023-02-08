"""

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

"""
N = int(input())
s = []
for i in range(1,N+1):
    s+=[i]
    print(*s,end="")
    print(" "*(4*(N-i)),end = " ")
    print(*s[::-1])
    #print(f'{*s} {" "*(4*(N-1))}{*s[::-1}')