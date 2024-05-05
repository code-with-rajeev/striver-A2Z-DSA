//https://leetcode.com/problems/subarray-sum-equals-k/description/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); 
        int size = nums.size();
        int pre = 0;
        int ans = 0 ;
        map<int,int> mp;
        //prefix sum algo is used.
        mp[pre]=1;
        for(int i = 0 ; i < size; i++){
            pre+=nums[i];
            if(mp[pre-k]>0){
                ans+=mp[pre-k];
            }
            mp[pre]++;
        }
        return ans;
    }
};