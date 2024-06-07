// https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<int,int> mp;
        int sum = 0;
        mp[0] = -1; //to handle the subarray start at index 0
        int ans = 0; // stores prefix sum
        
        for(int i = 0; i < N ; i++){
            sum+=A[i];
            
            if(mp.find(sum-K) != mp.end()){
                ans = max(ans, i- mp[sum-K]);
            }
            
            //We only update sum if it is not already present to maximize the length
            //We must store the first occurence of each sum.
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
            
        }
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends