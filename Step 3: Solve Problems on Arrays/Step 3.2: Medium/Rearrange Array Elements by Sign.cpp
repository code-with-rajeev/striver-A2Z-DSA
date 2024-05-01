// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
        int size = nums.size();
        int pos = 0, neg = 1;
        vector<int> ans(size,0);
        for(int i = 0 ; i < size ; i++){
            if(nums[i]<0){
                ans[neg]=nums[i];
                neg+=2;
            }
            else{
                ans[pos]=nums[i];
                pos+=2;
            }
        }
        return ans;
    }
};