//

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); 

        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        nums.insert(nums.begin(),-100001);
        int size = nums.size();
        int i = 1 , j = 2, k = size-1;
        
        while(i<size-2 && j<k){
            if(nums[i]==nums[i-1]){
                i++; j=i+1;k=size-1;// optimization
                continue;
            }
            while(i<size-2 && j<k){
                if(i!=j-1 && nums[j]==nums[j-1]){
                    j++; continue; //optimization
                }

                if(nums[j]+nums[k]+nums[i]==0){
                    
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    ans.push_back(temp);
                    j++;
                    k=size-1;
                }
                if(nums[j]+nums[k]+nums[i]>0){
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