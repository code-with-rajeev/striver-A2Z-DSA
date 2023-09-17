//https://leetcode.com/problems/maximum-width-of-binary-tree/description/

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
    int widthOfBinaryTree(TreeNode* root) {
        return findWidth(root,0,0);
    }
    int findWidth(TreeNode* root,int height, int max_height){
        if(root==NULL) return 0;
        queue<pair<long int,TreeNode*> > q;
        q.push({0,root});
        int size;
        int ans = -1;
        while(!q.empty()){
            vector<int> v;
            int index = q.front().first;
            size = q.size();
            while(size--){
                auto temp = q.front();
                q.pop();
                if(temp.second->left) {
                    q.push({2*(temp.first-index)+1,temp.second->left}); 
                }
                if(temp.second->right) {
                    q.push({2*(temp.first-index)+2,temp.second->right});
                }
                v.push_back(temp.first);
            }
            ans = max(ans, (v.back() - v.front()  + 1));

        }
        return ans;
    }
};