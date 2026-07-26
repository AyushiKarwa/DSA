class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currprd=nums[0],maxprd=nums[0],currneg=nums[0];
        for(int i=1;i<nums.size();i++){
            int prevmax=currprd;
            int prevmin=currneg;
            currneg=min(nums[i],min(prevmin*nums[i],prevmax*nums[i]));
            currprd=max(nums[i],max(prevmax*nums[i],prevmin*nums[i]));
            
            maxprd=max(maxprd,max(currprd,currneg));
        }
        return maxprd;
    }
};