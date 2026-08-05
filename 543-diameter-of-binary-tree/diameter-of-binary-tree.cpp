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
    int fun(TreeNode* root,int &res){
           if(root==NULL){
            return 0;
           }  
           int rights=fun(root->right,res);
           int lefts=fun(root->left,res);
           int sum=lefts+rights;
           res=max(res,sum);
           return 1+ max(rights,lefts);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        int res=0;
        fun(root,res);
        return res;
    }
};