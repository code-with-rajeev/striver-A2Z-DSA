//https://practice.geeksforgeeks.org/problems/aggressive-cows/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=aggressive-cows

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    
    bool check(int n, int k, vector<int> &stalls,int mid){
        long int sum = 0;
        int prev = stalls[0];
        for (int i = 0 ; i < stalls.size() ; i ++){
            if(stalls[i]-prev >=mid){
                k--;
                prev = stalls[i];
            }
        }
        k--;
        if(k<=0) return true;
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int start = 1, stop = 1e9 , mid, ans ;
        while(start<= stop){
            mid = (start + stop )>>1;
            if(check(n,k,stalls,mid)){
                ans = mid;
                start = mid+1;
            }
            else{
                stop = mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends