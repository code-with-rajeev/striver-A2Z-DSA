//https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
    bool check(vector<int>& piles, int k,int h){
        for(int i = 0; i < piles.size();i++){
            if(piles[i]<=k){
                h--;
            }
            else{
                h-= (piles[i]/k);
                if(piles[i]%k) h--;
            }
            if(h<0){
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int start = 1, stop = piles[piles.size()-1], mid,ans;
        while(start<= stop){
            mid = (start+stop)>>1;
            if(check(piles,mid,h)){
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