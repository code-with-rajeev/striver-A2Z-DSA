//https://leetcode.com/problems/binary-tree-right-side-view/description/

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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        rightView(root, ans);
        return ans;
    }
    void rightView(TreeNode* root, vector<int> &ans){
        if(root==NULL) return;
        queue< TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            int left_value;
            for(int i = 0 ; i < size ; i++){
                TreeNode* temp = q.front();
                left_value = temp->val;
                q.pop();
                if(temp->left != nullptr ) q.push(temp->left);
                if(temp->right != nullptr) q.push(temp->right);
                
            }
            ans.push_back(left_value);
        }
    }
};