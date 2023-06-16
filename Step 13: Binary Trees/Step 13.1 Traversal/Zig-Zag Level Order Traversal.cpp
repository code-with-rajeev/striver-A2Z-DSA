//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        zigzag(root, ans);
        return ans;
    }
    void zigzag(TreeNode* root,vector<vector<int>> &ans) {
        if(root == NULL){
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        int height = 1;
        while(!q.empty()){
            
            int size = q.size();
            vector<int> level(size); 
            
            for(int i = 0; i < size; i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right); 
                if(height%2==0){
                    level[size-i-1] = temp->val;
                }     
                else{
                    level[i] = temp->val;
                }
            }
            ans.push_back(level);
            height++;
        }
    }

};