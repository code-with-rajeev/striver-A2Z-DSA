//https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &nums, int target) {
    int count = 0;
    int xorSum = 0;
    unordered_map<int, int> xorPrefix; // Map to store XOR prefix and their corresponding frequencies
    xorPrefix[0] = 1; // Initialize map with XOR prefix 0 with frequency 1

    for (int i = 0; i < nums.size(); ++i) {
        xorSum ^= nums[i];
        
        int complement = xorSum ^ target;
        
        // If complement is already present in map, update count
        if (xorPrefix.find(complement) != xorPrefix.end())
            count += xorPrefix[complement];

        // If xorSum is not present in map, store it along with frequency 1
        xorPrefix[xorSum]++;
    }

    return count;
}
