class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word,ans;

        stringstream ss(s);
        while(ss>>word){
            st.push(word);
        }

        while(!st.empty()){
            ans+=st.top()+" ";
            st.pop();
        }
        ans.pop_back();
        return ans;
        
    }
};