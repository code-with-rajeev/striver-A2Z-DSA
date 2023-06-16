//https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,map<int,multiset<int> >> mp;
        vertical(root, mp,0,0);

        for(auto column:mp){
            vector<int> temp;
            for(auto row:column.second ){
                for(auto val:row.second){
                    temp.push_back(val);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
    void vertical(TreeNode* root, map<int,map<int,multiset<int> >> &mp, int height, int index ){
        if(root == NULL) return;
        mp[index][height].insert(root->val);
        vertical(root->left,mp,height+1,index-1);
        vertical(root->right,mp,height+1,index+1);
    }
};