//https://leetcode.com/problems/4sum/description/

#define LL long long 
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); 
        
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());
        int size = nums.size();

        if(size<4) return vector<vector<int>>({}); // not possible to have 4 distinct index

        int a = 0 , b = 1 , c = 2 , d = size-1;
        while(a <  size-3){
            if(a!=0 && nums[a]==nums[a-1]){
                a++; continue;
            }
            b = a+1; c = b+1; d = size-1;
            LL sum = 0;
            while(b < size-2){
                if(a!=b-1 && nums[b]==nums[b-1]){
                    b++; continue;
                }
                c = b+1; d = size-1;
                while(c<d && c < size-1){
                    if(b!=c-1 && nums[c]==nums[c-1]){
                        c++; continue;
                    }
                    sum = static_cast<LL>(nums[a])+nums[b]+nums[c]+nums[d];
                    if(sum == target){
                        ans.push_back({nums[a],nums[b],nums[c],nums[d]});
                        c++;
                    }
                    else if(sum < target){
                        c++;
                    }
                    else{
                        d--;
                    }
                }
                b++;c=b+1;d=size-1;
            }
            a++;b=a+1;c=b+1;d=size-1;
        }
        return ans;
    }
};