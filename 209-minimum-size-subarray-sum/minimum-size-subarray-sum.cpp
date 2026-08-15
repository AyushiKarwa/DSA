class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int res=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                int len=i-left+1;
                res=min(res,len);
                sum-=nums[left];
                left++;            
            }
        }
        if(res==INT_MAX){
            return 0;
        }
        return res;
    }
};