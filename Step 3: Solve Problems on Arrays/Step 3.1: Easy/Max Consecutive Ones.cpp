// https://leetcode.com/problems/max-consecutive-ones/description/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int len = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if (nums[i]==1){
                len++;
            }
            else{
                len = 0;
            }
            ans = max(ans,len);

        }
        return ans;
    }
};