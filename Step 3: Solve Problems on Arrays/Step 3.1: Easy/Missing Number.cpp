// https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int max_sum = (size*(size+1))/2;
        int sum = 0;
        for(auto i:nums){
            sum+= i;
        }
        return max_sum-sum;
    }
};