class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        while(left<n-1){
            if(nums[left]>nums[left+1]){
                break;
            }
            left++;
        }
        while(right>0){
            if(nums[right]<nums[right-1]){
                break;
            }
            right--;
        }
        if (left==n-1 && right==0){
            return 0;
        }

        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=left;i<=right;i++){
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }
        while(left>0 && nums[left-1]>mini){
            left--;
        }
        while(right<n-1 && nums[right+1]<maxi){
            right++;
        }
        
        int len=right-left+1;
        if(len<0){
            return 0;
        }
        return len;
        
    }
};