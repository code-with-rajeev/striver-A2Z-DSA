// https://practice.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        return search(x);
    }
    long long int search(long long int x){
        long long int start = 1, stop = x, mid, ans=0;
        while(start<=stop){
            mid = (start+stop)/2;
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid < x){
                ans = max(ans,mid);
                start = mid+1;
                
            }
            else{
                stop = mid-1;
            }
        }
        return ans;
    }
    
};