// https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = nums.size();
        int zero_index = 0;
        int i = 0;
        while(i < s){
            if(nums[i] != 0 and zero_index>-1){
                swap(nums[i],nums[zero_index]);
                zero_index++;
            }
            i++;
        }
    }
};