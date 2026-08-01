class Solution {
public:
    void fun(vector<int>& nums,vector<int> &current,vector<bool> &used,vector<vector<int>> &ans,int n){
        if(nums.size()==current.size()){
            ans.push_back(current);
        }
        for(int i=0;i<n;i++){
            if(used[i]) continue;

            used[i]=true;

            current.push_back(nums[i]);
            fun(nums,current,used,ans,n);

            current.pop_back();
            used[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int> current;
        vector<bool> used(n,false);
        vector<vector<int>> ans;
        fun(nums,current,used,ans,n);
        return ans;
        
    }
};