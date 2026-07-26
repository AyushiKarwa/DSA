class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word = "";

        // Store each word in the stack
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    st.push(word);
                    word = "";
                }
            }
        }

        // Push the last word
        if (!word.empty()) {
            st.push(word);
        }

        // Build the answer
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty())
                ans += " ";
        }

        return ans;
    }
};