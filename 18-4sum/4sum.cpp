class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i - 1])
                 continue;
            for(int j=i+1;j<nums.size();j++){
                if (j > i+1 && nums[j] == nums[j - 1])
                    continue;
                int left=j+1;
                int right=nums.size()-1;
                long long sum=(long long)target-(nums[i]+nums[j]);
                while(left<right){
                    long long nowsum=(long long)nums[left]+nums[right];
                    if(nowsum==sum){
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                        while(left<n &&nums[left]==nums[left-1]){
                            left++;
                        }
                        while(right>0 &&nums[right]==nums[right+1]){
                            right--;
                        }
                    }
                    else if(nowsum<sum){
                        left++;
                    }
                    else{
                        right--;
                    }

                }
            }
        }
        return ans;
    }
};