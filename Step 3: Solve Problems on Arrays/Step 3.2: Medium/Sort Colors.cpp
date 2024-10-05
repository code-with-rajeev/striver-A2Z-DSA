// https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int left = 0, right  = size-1;
        int i = 0;

        // left is the track of upcoming 0 to be placed
        // right is the track of upcoming 2 to be placed
        // i is the iterator
        
        while(i<=right){
            if(nums[i]==0){
                swap(nums[i],nums[left]);
                i++;left++;
            }
            else if(nums[i]==2){
                swap(nums[i],nums[right]);
                    right--;                    
                }
            else{
                i++;
            }
        }
    }
};