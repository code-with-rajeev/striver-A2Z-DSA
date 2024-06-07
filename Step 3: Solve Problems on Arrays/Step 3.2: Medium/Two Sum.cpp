// https://leetcode.com/problems/two-sum/description/
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

//C++ provides an in-built function called next_permutation() which directly returns the lexicographically next greater permutation of the input.
        map<int,int> mp;
        int size = nums.size();
        mp[nums[0]] = 0;
        for(int i = 1 ; i < size; i++){
            if(mp.find(target-nums[i]) != mp.end()){
                return vector<int> {mp[target-nums[i]],i};
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return {};
    }

    
};