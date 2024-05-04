//https://leetcode.com/problems/spiral-matrix/description/

class Solution {
public:
    int m,n,val,i,j;
    // i and j are current index of the matrix's element during spiral traversal.
    // m and n are available horizontal and vertical moves respectively.
    void move(int direction, vector<vector<int>>& matrix, vector<int> &ans){
        std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
        int to_move;

        if(direction == 1){
            //right move
            to_move = n;
            while(to_move>0){
                j++;
                ans.push_back(matrix[i][j]);
                to_move--;
            }
        }
        else if(direction == 2){
            //down move
            to_move = m;
            while(to_move>0){
                i++;
                ans.push_back(matrix[i][j]);
                to_move--;
            }
        }
        else if(direction == 3){
            //left move
            to_move = n;
            cout<<"l";
            while(to_move>0){
                j--;
                ans.push_back(matrix[i][j]);
                to_move--;
            }
        }
        else{
            //up move
            to_move = m;
            while(to_move>0){
                i--;
                ans.push_back(matrix[i][j]);
                to_move--;
            }
        }
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // right = 1, down = 2, left = 3, up = 4
        int direction = 1;
        vector<int> ans;
        i = 0, j = -1;
        m = matrix.size();
        n = matrix[0].size();

        while (m!=0 && n!=0){
            if(direction==5) direction = 1;
            if(direction%2==1){//1->right and 3-> left
                m--;
            }
            else{
                n--;
            }
            move(direction,matrix,ans);
            direction++;
        }
        return ans;
    }
};