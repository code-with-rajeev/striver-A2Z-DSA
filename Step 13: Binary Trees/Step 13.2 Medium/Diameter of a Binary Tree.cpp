//https://leetcode.com/problems/diameter-of-binary-tree/

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
 int ans = 0;
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        findDiameter(root,d);
        return d;
    }
    int findDiameter(TreeNode* root, int &d){
        if(root == NULL) return 0;
        int left = findDiameter(root->left,d);
        int right = findDiameter(root->right,d);
        d = max(d,left+right);
        return max(left,right)+1;

    }
};