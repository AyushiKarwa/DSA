class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalxor=0;
        for(auto x:nums){
            totalxor ^=x;
        }
        if(totalxor !=0){
            return nums.size();
        }
        else{
            for(auto x:nums){
                if(x!=0){
                    return nums.size()-1;
                }
            }
            return 0;
        }

    }
};