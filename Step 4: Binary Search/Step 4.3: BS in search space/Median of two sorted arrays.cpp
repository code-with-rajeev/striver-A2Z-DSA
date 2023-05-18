//https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i = 0; i<nums1.size(); i++){
            v.push_back(nums1[i]);
        }
        for(int i = 0; i<nums2.size(); i++){
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        int size = v.size();
        if(size%2){
            return v[size/2];
        }
        else{
            return (v[size/2]+v[(size-1)/2])/(double)2;
        }
    }
};