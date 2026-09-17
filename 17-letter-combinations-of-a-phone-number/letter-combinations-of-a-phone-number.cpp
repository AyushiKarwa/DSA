class Solution {
public:
vector<string> mp={
    "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
};
vector<string> ans;
    void solve(string &digits,int i,string curr){
        if(i==digits.size()){
            ans.push_back(curr);
            return;
        }
        string letters=mp[digits[i]-'0'];
        for(char ch:letters){
            curr.push_back(ch);
            solve(digits,i+1,curr);
            curr.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
       
        if(digits.empty()){
            return ans;
        }
        solve(digits,0,"");
        return ans;
    }
};