class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string ans,word;

        stringstream ss(s);
        while(ss >> word){
            st.push(word);
        }
        int sss=st.size();
        for(int i=0;i<sss;i++){
            if(!st.empty()){
                ans+=st.top()+ " ";
                st.pop();
            }
        }
        ans.pop_back();
        return ans;
    }
};