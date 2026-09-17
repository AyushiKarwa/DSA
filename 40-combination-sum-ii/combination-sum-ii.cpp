class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& candidates,int start, int target,vector<int> temp){
        if(target<0){
            return;
        }
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int j=start;j<candidates.size();j++){
            if(candidates[j]>target){
                break;
            }
            if(j>start && candidates[j]==candidates[j-1]){
                continue;
            }
            temp.push_back(candidates[j]);
            solve(candidates,j+1,target-candidates[j],temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        solve(candidates,0,target,temp);
        return ans;
    }
};