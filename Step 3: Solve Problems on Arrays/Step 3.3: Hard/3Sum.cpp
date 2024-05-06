class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); 

        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int i = 0 , j = 1, k = size-1;

        while(i<size-2){
            if(i!=0 && nums[i]==nums[i-1]){
                i++;// optimization
                continue;
            }
            j=i+1;k=size-1;
            while(j<k){
                if(i!=j-1 && nums[j]==nums[j-1]){
                    j++; continue; //optimization
                }
                int sum = nums[j]+nums[k]+nums[i];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{ 
                    j++;
                }
            }
            i++;j=i+1;k=size-1;
        }
        
        return ans;
    }
};