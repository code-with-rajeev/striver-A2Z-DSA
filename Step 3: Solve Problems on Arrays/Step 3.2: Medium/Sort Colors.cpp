// https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int left = 0, right  = size-1;
        int i = 0;
        while(i<right && left < right){
            if(nums[i]==1){
                i++;
            }
            else if(nums[i]==0){
                if(nums[left]==0){
                    left++;
                }
                else{
                    swap(nums[left],nums[i]);
                    left++;                    
                }
                i++;
            }
            else{
                if(nums[right]==2){
                    right--;
                }
                else{
                    swap(nums[right],nums[i]);
                    right--;
                }
            }
        }
        if(nums[i]==0){
            swap(nums[i],nums[left]);
        }
        if(nums[i]==2){
            swap(nums[i], nums[right]);
        }
    }
};