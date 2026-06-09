class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long total=1LL*k*(
            *max_element(nums.begin(),nums.end())-
            *min_element(nums.begin(),nums.end())
        );
        return total; 
    }

};