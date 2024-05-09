//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&nums, int n)
    {   
        int maxLength = 0;
        int sum = 0;
        unordered_map<int, int> sumMap; // Map to store prefix sums and their corresponding indices
        sumMap[0] = -1; // Initialize map with sum 0 at index -1

        for (int i = 0; i < n; ++i) {
            sum += nums[i];

            // If sum is already present in map, update the maxLength
            if (sumMap.find(sum) != sumMap.end())
                maxLength = max(maxLength, i - sumMap[sum]);

            // If sum is not present in map, store it along with its index
            else
                sumMap[sum] = i;
        }
        return maxLength;
    }

};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends