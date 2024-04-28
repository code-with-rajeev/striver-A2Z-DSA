// https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    long long sum = 0;
    int left = 0, right = 0;
    int len = 0, max_len = 0;

    while(right<a.size() && left<a.size()){
        
        if(sum == k){
            len = right-left;
            if(right<a.size()){
                if(a[right]==0){
                    right++;
                } 
                else {
                    sum-= a[left];
                    left++;
                }
            }
            max_len = max(len,max_len);
        }

        else if(sum<k){
            sum+=a[right];
            right++;
        }

        else{
            sum-= a[left];
            left++;
        }
    }

    if(sum==k){
        len = right-left;
        max_len = max(len,max_len);
    }
    
    return max_len;
}