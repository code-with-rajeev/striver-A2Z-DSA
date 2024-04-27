//https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s = nums.size();
        int a[s];

        for(int i = 0 ; i < s ; i ++){
            a[i] = nums[i];
        }
        for(int i = 0 ; i < s ; i ++){
            nums[(i+k) % s] = a[i];
        }

    }
};