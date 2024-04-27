//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int m_i = 0;
        int mx = nums[0];
        for (int i = 1 ; i < nums.size() ; i++){
            if (nums[i]> nums[m_i]){ 
                mx = nums[i];
                m_i++;
                nums[m_i] = mx;
            }

        }
        return m_i+1;
    }
};