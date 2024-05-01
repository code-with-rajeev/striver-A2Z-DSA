// https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = size(nums);
        int sum = 0, max_sum = INT_MIN;
        for (int i = 0  ; i < n ; i++){
            if(nums[i]>sum && sum<0){
                sum=nums[i];
            }
            else{
                sum+=nums[i];
            }
            max_sum = max(sum,max_sum);
        }
        return max_sum;
    }
};