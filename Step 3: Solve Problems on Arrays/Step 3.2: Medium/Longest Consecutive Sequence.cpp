//https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
        int size = nums.size();
        if(size<2) return size;
        sort(nums.begin(),nums.end());
        int ans = 1,maxi  = 1;
        for(int i = 1 ; i < size ;i++){
            if(nums[i]==nums[i-1]+1){
                ans++;
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                maxi = max(ans,maxi);
                ans = 1;
            }
        }

        return max(ans,maxi);
    }
};