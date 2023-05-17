//https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

#define ll long int
class Solution {
public:
    bool check(vector<int>& nums, int threshold,int k){
        ll sum = 0;

        for(int i = 0 ; i < nums.size(); i++){
            sum+= nums[i]/k ; 
            if(nums[i]%k){
                sum++;
            }
        }
        if(sum<=threshold){
            return true;
        }
        else {
             return false;
        }
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        ll start = 1, stop = 1e6, mid,ans ;
        while(start<= stop){
            mid = (start + stop)>>1;
            cout<<"mid is"<< mid<<endl;
            if(check(nums,threshold,mid)){
                ans = mid;
                stop = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};