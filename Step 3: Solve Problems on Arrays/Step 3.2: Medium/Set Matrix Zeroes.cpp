//https://leetcode.com/problems/set-matrix-zeroes/description/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);       
        int m,n;
        m = matrix.size();
        n = matrix[0].size();
        bool first = false;
        bool fr =false;
        bool fc =false;
        if(matrix[0][0]==0){
            first = true;
        }
        vector<pair<int,int>> v;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j]==0){
                    if(i==0) fr =true;
                    if(j==0) fc =true;
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        //updating zeroes vertically
        for(int i = 1 ;i<n;i++){
            if(matrix[0][i]==0){
                for(int rows = 1 ; rows < m; rows++){
                    matrix[rows][i]=0;
                }
            }
        }
        // updating 0's horizontally
        for(int i = 1 ;i<m;i++){
            if(matrix[i][0]==0){
                for(int cols = 1 ; cols < n; cols++){
                    matrix[i][cols]=0;
                }
            }
        }
        
        // If matrix[0][0] is 0. set first row and col to 0.
        if(first || fr){
            for(int cols = 0; cols < n; cols++){
                matrix[0][cols]=0;
            }
        }
        
        if(first || fc){
            for(int rows = 0; rows < m; rows++){
                matrix[rows][0]=0;
            }
        }
        
    }
};