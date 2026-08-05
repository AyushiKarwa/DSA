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
    void fun(TreeNode* root,TreeNode* &prev){
        if(root==NULL){
            return;
        }
        fun(root->left,prev);
        
        if(prev!=NULL && prev->val>root->val){
            wrong++;
            if(wrong==1){
                g1f=prev;
                g1s=root;
            }
            else{
                g2f=prev;
                g2s=root;
            }
        }
        prev=root;
        fun(root->right,prev);
    }

    int wrong=0;
    TreeNode* g1f=NULL;
    TreeNode* g1s=NULL;
    TreeNode* g2f=NULL;
    TreeNode* g2s=NULL;
    void recoverTree(TreeNode* root) {
        TreeNode* prev=NULL;
        fun(root,prev);
        if(wrong==1){
            swap(g1f->val,g1s->val);
        }
        else{
            swap(g1f->val,g2s->val);
        }
    }
};