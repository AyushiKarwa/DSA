class Solution {
public:
vector<string> ans;
vector<string> mp={
    "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
};
    void solve(string digits,int i,string temp){
        
        if(i==digits.size()){
            ans.push_back(temp);
            return;
        }
        string cur=mp[digits[i]-'0'];
        for(auto x:cur){
            temp.push_back(x);
            solve(digits,i+1,temp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        solve(digits,0,"");
        return ans;
    }
};