//https://leetcode.com/problems/split-array-largest-sum/

class Solution {
public:
    bool check(vector<int>& nums, int k, int max_sum){
        int sum = 0 ; 
        int partition = 1;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]>max_sum) return false;
            if( sum + nums[i] <= max_sum){
                sum+= nums[i];
            }
            else{
                sum = nums[i];
                partition ++;
            }
        }
        if(partition > k){
            return false;
        }
        else{
            return true;
        }
    }
    int splitArray(vector<int>& nums, int k) {
        int start = 0, stop = 1e9 , ans , mid; 
        while(start <= stop){
            mid = start + (stop - start)/2;
            if(check(nums,k,mid)){
                ans = mid;
                stop = mid - 1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};