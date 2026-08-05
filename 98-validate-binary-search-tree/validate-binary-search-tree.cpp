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
    bool fun(TreeNode* root,TreeNode* &prev){
        
        bool ans=true;
        if(root==NULL){
            return true;
        }
        if(!(fun(root->left,prev))){
            return false;
        }
        if(prev==NULL){
            prev=root;
        }
        else{
            if(prev->val >= root->val){
                return false;
            }
            prev=root;
        }
        return fun(root->right,prev);
        
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* prev=NULL;
        return fun(root,prev);
    }
};