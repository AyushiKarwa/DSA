class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int res=0;
        int maxfreq=0;
        unordered_map<char,int> freq;

        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            maxfreq=max(maxfreq,freq[s[i]]);
            
            while(i-left+1-maxfreq>k){
                freq[s[left]]--;
                left++;
            }
            res=max(res,i-left+1);
        }
        return res;
    }
};