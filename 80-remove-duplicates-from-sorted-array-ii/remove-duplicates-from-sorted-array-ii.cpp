class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int s=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[s-2]){
                nums[s++]=nums[i];
            }
        }
        return s;
    }
};