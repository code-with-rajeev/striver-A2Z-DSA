//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        for(int i = 1 ; i <= size ; i++){
            if(nums[i%size]-nums[i-1]< 0){
                count++;
            }
        }
        if(count>1)return false;
        return true;
    }
};