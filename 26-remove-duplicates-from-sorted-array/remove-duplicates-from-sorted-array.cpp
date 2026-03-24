class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        int count=1;
        for(int j=1;j<nums.size();j++){
            if (nums[j]!=nums[i-1]){
                swap(nums[j],nums[i++]);
                count++;

            }
        }
        return count;
    }
};