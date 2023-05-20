//https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=allocate-minimum-number-of-pages

#include<bits/stdc++.h>
using namespace std;

#define ll long int
class Solution 
{
    bool check(int A[], int N, int M, ll max){
        ll sum = 0;
        int i = 0,j =1;
        while(i<N){
            if(A[i]+sum <= max){
                sum+= A[i]; 
                i++;
            }
        else{
                sum = 0;
                j++;
            }
        }
        
        if(j<=M) return true;
        else return false;
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        ll start = -1;
        if(N<M){
            return -1;
        }
        for(int i = 0 ; i < N ; i++){
            start = max((ll)A[i],start);
        }
        ll stop = 1e11 ,mid , ans = -1;
        while(start <= stop ){
            mid = (start  + stop )>>1;
            if(check(A,N,M,mid)){
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
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends