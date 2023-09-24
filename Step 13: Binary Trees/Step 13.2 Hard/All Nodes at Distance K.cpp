//https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #include <bits/stdc++.h>
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        stack  <TreeNode*> s;
        s.push(root);
        create_stack(root,  target , s);
        vector<TreeNode*> v;
        int mn = min(int(s.size()),k+1);
        for(int i = 0 ; i < mn ;i++){
            v.push_back(s.top());
            s.pop();
        }
        for (int i = v.size()-1; i>0;i--){
            if(i==k){
                ans.push_back(v[i]->val);
                continue;
            }
            if(v[i]->left){
                if(v[i]->left == v[i-1]){
                    findK(v[i]->right,k-i-1,ans);
                }
                else{
                    findK(v[i]->left,k-i-1,ans);
                }
            }
            
        }    
        findK(v[0],k,ans);
        return ans;
    }
    void findK(TreeNode* root , int distance,vector<int> &ans ){
        if(root == NULL){
            return ;
        }
        if(distance == 0){
            ans.push_back(root->val);
            return ;
        }
        if(root->left){
            findK(root->left,distance-1,ans);
        }
        if(root->right){
            findK(root->right,distance-1,ans);
        }
    }
    bool create_stack(TreeNode* root, TreeNode* target, stack<TreeNode*> &s){
        if(!root) return false;
        if(root == target){
            return true;
        }
        bool left = false, right = false;

        if(root->left){
            s.push(root->left);
            left = create_stack(root->left,  target , s);
            if (left){
                return left;
            }
        }

        if(root->right){
           s.push(root->right);
            right = create_stack(root->right,  target , s);
            if (right){
                return right;
            }
        }
        if(left == false and right == false){
            s.pop();
        }
        return false;
    }
};