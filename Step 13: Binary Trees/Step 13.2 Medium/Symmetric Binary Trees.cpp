//https://leetcode.com/problems/symmetric-tree/

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
    bool isSymmetric(TreeNode* root) {
        return check(root);
    }
    bool check(TreeNode* root){
        if (root == NULL || (root->left==NULL && root->right==NULL)) return true;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i = 0 ; i < size; i ++){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left) {
                q.push(temp->left);
                level.push_back(temp->left->val);
            }
            else{
                 level.push_back(-101);
            }
            if(temp->right) {
                q.push(temp->right);
                level.push_back(temp->right->val);
            }
            else{
                 level.push_back(-101);
            }
        }    
        size = level.size();
        for(int i = 0; i < size/2 ; i++){
            if(level[i]!= level[size-i-1]) return false;
        }
        cout<<endl;
        
        }
        return true;
    }
};