class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2){
            return nums.size();
        }
        else {
            int j = 2; 
            int count=2;

            for (int i = 2; i < nums.size(); ++i) {
                if (nums[i] != nums[j - 2]) {
                    swap(nums[j++], nums[i]);
                    count++;
                }
            }
       
            return count;
        }
       
    }
};