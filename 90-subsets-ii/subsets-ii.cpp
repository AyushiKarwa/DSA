class Solution {
public:
    
    vector<vector<int>> ans;
    void solve(vector<int>& candidates,int start,vector<int> temp){
        ans.push_back(temp);

        
        for(int j=start;j<candidates.size();j++){
            if(j>start && candidates[j]==candidates[j-1]){
                continue;
            }
            temp.push_back(candidates[j]);
            solve(candidates,j+1,temp);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& candidates) {
        
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        solve(candidates,0,temp);
        return ans;
    }
};
