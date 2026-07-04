    class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target) {
            sort(nums.begin(),nums.end());
            int result=nums[1]+nums[2]+nums[0];
            for(int i=0;i<nums.size()-2;i++){
                int left=i+1;
                int right=nums.size()-1;

                while(left<right){
                    int sum=nums[left]+nums[right]+nums[i];
                
                    if(abs(sum-target)<abs(result-target)){
                        result=sum;
                    }

                    if(sum==target){
                        return sum;
                    }

                    else if(sum<target){
                        left++;
                    }

                    else{
                        right--;
                    }
                }
            }
           return result; 
        }
    };