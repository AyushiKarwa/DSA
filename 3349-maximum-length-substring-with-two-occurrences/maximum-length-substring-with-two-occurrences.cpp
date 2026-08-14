class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left=0;
        unordered_map<char,int> mp;
        int res=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while (mp[s[i]]>2){
                mp[s[left]]--;
                left++;
                
            }
            int len=i-left+1;
            res=max(res,len);
        }
        return res;
    }
};