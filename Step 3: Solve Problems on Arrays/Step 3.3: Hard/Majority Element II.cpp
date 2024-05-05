//https://leetcode.com/problems/majority-element-ii/description/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); 
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i = n/3; i < n;){
            if(nums[i]==nums[i-(n/3)]){
                if(ans.size()==0 || *(ans.end()-1)!=nums[i]){
                    ans.push_back(nums[i]);   
                }
                i+= (n/3)+1;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};