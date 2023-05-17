//https://practice.geeksforgeeks.org/problems/minimum-days-to-make-m-bouquets/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-days-to-make-m-bouquets

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool check(int M, int K, vector<int> &bloomDay,int days){
        int count = 0;
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i]-days <= 0){
                count++;
            }
            else{
                count = 0;
            }
            if(count==K){
                M--;
                count = 0;
            }
            if(M<=0){
                return true;
            }
        }
        return false;
    }
    int solve(int M, int K, vector<int> &bloomDay){
      // Code here
      if((long int)M*(long int)K > bloomDay.size()){
          return -1;
      }
      int start = 0, stop = 1e9,mid , ans;
      while(start<=stop){
          mid = (start+stop)>>1;
          if(check(M,K,bloomDay,mid)){
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

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends