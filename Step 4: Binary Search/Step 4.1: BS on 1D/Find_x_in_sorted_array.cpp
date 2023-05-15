//Problem link: https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-search

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int left = 0, right = n-1,mid;
        while(left<=right){
            mid = (left+right)/2;
            if(arr[mid] == k){
                return mid;
            }
            else if(arr[mid] < k){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        if(arr[mid]!= k){
            return -1;
        }
        else{
            return mid;
        }
        
    }
};