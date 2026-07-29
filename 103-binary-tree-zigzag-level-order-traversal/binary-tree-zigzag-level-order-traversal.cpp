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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bool l=1;
        if(root==NULL){
            return {};
        }
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int levelsize=q.size();
            vector<int> temp(levelsize);
            int first=0;
            int last=levelsize-1;
            while(levelsize--){
                TreeNode* t=q.front();
                q.pop();
                if(!l){
                    temp[last]=t->val;
                    last--;
                }
                else{
                    temp[first]=t->val;
                    first++;
                }
                if(t->left!=NULL){
                    q.push(t->left);
                }
                if(t->right!=NULL){
                    q.push(t->right);
                }
            }
            res.push_back(temp);
            l=1-l;
        }
        return res;
    }
};