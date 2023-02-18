#source code: https://takeuforward.org/data-structure/reverse-a-given-array/

#lst = [1,2,3,4,5,6,7]
def rev(lst,start , stop):
    if (start<stop):
        t = lst[start]
        lst[start]= lst[stop]
        lst[stop] = t
        start+=1
        stop-=1
        rev(lst,start,stop)

size = int(input())
lst = list(map(int,input().split()))
print(rev(lst,0,size-1))