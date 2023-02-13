#problem link:  https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array

"""
Input:
n = 5
A[] = {1, 8, 7, 56, 90}

Output:
90

"""
def largest( arr, n):
    arr.sort(reverse = True)
    return arr[0]
