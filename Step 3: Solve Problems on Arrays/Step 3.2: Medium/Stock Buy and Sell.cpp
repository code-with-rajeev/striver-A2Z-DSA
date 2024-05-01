// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_sum = 0;
        int buy = INT_MAX, sell = INT_MIN;
        for(int i = 0 ; i < prices.size() ; i++){
            if(prices[i]<buy){
                buy = prices[i];
            }
            else{
                sell = prices[i];
                max_sum = max(max_sum,sell-buy);
            }
        }
        return max_sum;
    }
};