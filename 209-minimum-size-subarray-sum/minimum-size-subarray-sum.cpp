class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0,sum=0;
        int res=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                res=min(res,i-start+1);
                sum-=nums[start];
                start++;
            }
        }
        return res==INT_MAX? 0:res;
    }
};