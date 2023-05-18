//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

class Solution {
public:
    bool check(vector<int>& weights, int days, int min_weight){
        int sum = 0;
        int i = 0,size = weights.size();
        while(i < size){
            if(sum+weights[i]<=min_weight){
                sum+= weights[i];
                i++;
            }
            else{
                if(weights[i]>min_weight){
                    return false;
                }
                sum =  0;
                days--;
            }
        }
        days--;
        if(days>=0){
            return true;
        }
        else{
            return false;
        }

    }
    int shipWithinDays(vector<int>& weights, int days) {
            int start = 1, stop = 1e8, mid, ans;
            while(start<= stop){
            mid = (start + stop)>>1;
            if(check(weights,days,mid)){
                ans = mid;
                stop = mid-1;
            }
            else{
                start = mid+1;
            }
        }
     return ans;   
    }
};