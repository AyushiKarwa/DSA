class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int low=0,high=n-1;
        int sum=0;
        while(low<high){
            sum=numbers[low]+numbers[high];
            if(sum==target){
                return {low+1,high+1};
            }
            if(sum<target){
                low++;
            }
            else{
                high--;
            }
        }
        return {};
    }
};