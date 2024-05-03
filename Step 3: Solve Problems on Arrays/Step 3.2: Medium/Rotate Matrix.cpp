//https://leetcode.com/problems/rotate-image/

class Solution{
public:
    void rotate(vector<vector<int>>& matrix) {
        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);

        int size = matrix.size();
        for(int i=0;i<size;i++)
        {
            for(int j = i;j<size;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //Reverse the array
        for(int i=0; i<size; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};