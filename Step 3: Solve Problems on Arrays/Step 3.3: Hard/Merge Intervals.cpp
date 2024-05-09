//https://leetcode.com/problems/merge-intervals/description/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); 

        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int end = intervals[0][1];
        int start = intervals[0][0];
        int temp_end;
        for(int i = 1 ; i < intervals.size(); i++){
            temp_end=intervals[i][1];
            if(intervals[i][0]<= end){
                if(end<temp_end) end = temp_end;

            }
            else{
                ans.push_back({start,end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        ans.push_back({start,end});
    return  ans;
    }
};