// https://leetcode.com/problems/two-sum/description/

#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        int i = 0, j = 1;

        while(true){
            if(nums[i]+nums[j]==target) break;
            if(j+1 == size){
                i++;
                j = i+1;
            }
            else{
                j++;
            }
            
            
        }
    vector<int> v = {i,j};
    return v;
    }

    
};