//https://leetcode.com/problems/binary-tree-maximum-path-sum/

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
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        maxSum(root, &ans);
        return ans;
    }
    int maxSum(TreeNode* root, int* maxi){
        if(root  == NULL) return INT_MIN;
        int left = maxSum(root->left,maxi);
        int  right = maxSum(root->right,maxi);
        int ans = INT_MIN;
        if(left<0 && right<0){
            *maxi = max(*maxi,root->val);
            return root->val;
        }
        else if(left<0){
            ans = max(ans,root->val + right);
            *maxi = max(*maxi,ans);
            return ans;
        }
        else if(right<0){
            ans = max(ans,root->val + left);
            *maxi = max(*maxi,ans);
            return ans;
        }
        else {
            ans = max(left+(root->val),right+(root->val));
            *maxi = max(*maxi, left+right+root->val);
            return ans;
        }
        
    }
};