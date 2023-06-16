//https://leetcode.com/problems/same-tree/

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p,q);
    }
    bool check(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        queue<TreeNode*> que;
        queue<TreeNode*> pue;
        que.push(q); pue.push(p);
        while(!que.empty() && !pue.empty()){
            TreeNode* temp_q = que.front();
            TreeNode* temp_p = pue.front();
            que.pop();
            pue.pop();
            if(temp_q==NULL && temp_p==NULL) continue;
            
            if( (temp_q==NULL || temp_p==NULL) && (temp_q==NULL && temp_p==NULL)==0) return false;
            if(temp_q->val != temp_p->val) {
           
                return false;
            }
            
            que.push(temp_q->left); que.push(temp_q->right);
            pue.push(temp_p->left); pue.push(temp_p->right);

        }
        if((que.empty()^pue.empty())==1){
            return false;   
            }
        return true;


    }
};