/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* fun(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL){
            return NULL;
        }
        if(p->val<=root->val && root->val<=q->val){
            return root;
        }
        if(root->val<p->val){
            return fun(root->right,p,q);
        }
        else{
            return fun(root->left,p,q);
        }

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val>q->val){
            return fun(root,q,p);
        }
        else{
            return fun(root,p,q);
        }

    }
};