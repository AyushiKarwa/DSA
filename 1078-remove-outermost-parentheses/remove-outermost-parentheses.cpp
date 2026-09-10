class Solution {
public:
    string removeOuterParentheses(string s) {
        int level=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(level>0){
                    ans+=s[i];
                }
                level++;  
            }else{
                level--;
                if(level>0){
                  ans+=s[i];  
                } 
            }
        }
        return ans;
    }
};