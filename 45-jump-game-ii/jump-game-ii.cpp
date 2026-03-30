class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0;
        int currentend=0;
        int maxreach=0;
        for(int i=0;i<nums.size()-1;i++){
            maxreach=max(maxreach,i+nums[i]);
            if(i==currentend){
                jump++;
                currentend=maxreach;
           }
        }
        return jump;
    }
};