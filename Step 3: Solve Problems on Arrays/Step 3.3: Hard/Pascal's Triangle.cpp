//https://leetcode.com/problems/pascals-triangle/description/

class Solution {
public:
    vector<vector<int>> generate(int n) {
        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); 
        vector<vector<int>> ans;
        vector<int> row = {1,1};
        
        ans.push_back({1});
        if(n==1) {
            return ans;
        }
        ans.push_back({1,1});
        if(n==2){
            return ans;
        }
        for(int i = 3; i<= n; i++){
            row.insert(row.begin(),0);
            for(int j = 1; j < row.size();j++){
                row[j-1]=row[j]+row[j-1];
            }
            ans.push_back(row);
        }
        return ans;
    }
};