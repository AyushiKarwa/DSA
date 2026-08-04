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
    int getsmall(stack<TreeNode*> &asc){
        TreeNode* small=asc.top();
        asc.pop();
        
        TreeNode* rightc=small->right;
        while(rightc){
            asc.push(rightc);
            rightc=rightc->left;
        }
        return small->val;
        
    }
    int getbig(stack<TreeNode*> &desc){
        TreeNode* big=desc.top();
        desc.pop();
        
        TreeNode* leftc=big->left;
        while(leftc){
            desc.push(leftc);
            leftc=leftc->right;
        }
        return big->val;
        
    }
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL){
            return false;
        }
        stack<TreeNode*> asc;
        TreeNode* t=root;
        while(t){
            asc.push(t);
            t=t->left;
        }
        stack<TreeNode*>desc;
        t=root;
        while(t){
            desc.push(t);
            t=t->right;
        }
        int i=getsmall(asc);
        int j=getbig(desc);
        while(i<j){
            if(i+j==k) return true;
            else if(i+j<k) i=getsmall(asc);
            else{
                j=getbig(desc);
            }
        }
        return false;
    }
};