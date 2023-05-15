//https://practice.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    long long int start = 1 , stop = m, mid, root = 1;
	    while (start<= stop){
	        mid = (start+stop)>>1;
	        //cout<<"mid "<<start <<" " <<stop<<endl;
	        root = 1;
	        for(int i = 0; i < n ; i++){
	            if(root>m){
	                stop = mid-1;
	                break;
	            }
	            root *= mid;
	        }
	        //cout<<"root "<<root<<endl;
	        if(root == m){
	            return mid;
	        }
	        else if(root<m){
	            start= mid+1;
	        }
	        else{
	            stop = mid-1;
	        }
	    }
	    return -1;
	    // Code here.
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends