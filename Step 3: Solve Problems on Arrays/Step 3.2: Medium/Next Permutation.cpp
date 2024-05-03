//https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
/*
We can also use a C++ in-built function next_permutation() from <algorithm.h>
*/
        next_permutation(nums.begin(),nums.end());
        return ;
        int size = nums.size();
        int i = size-1;
        int mini = INT_MAX;
        int mini_i=-1;

        while(i>0){
            if(nums[i]>nums[i-1]){
                break;
            }
            else{
                i--;
            }
        }
        if(i==0){
            sort(nums.begin(),nums.end());
        }
        else{
            i--;
            for(int j = i+1; j<size;j++){
                if(nums[j]>nums[i] && nums[j]<mini){
                    mini=nums[j];
                    mini_i = j;
                }
            }
            if(mini_i!=-1){
            swap(nums[mini_i],nums[i]);
            sort(&(nums[i+1]),&(nums[size]));
            return;                
            }

        }
    }
};