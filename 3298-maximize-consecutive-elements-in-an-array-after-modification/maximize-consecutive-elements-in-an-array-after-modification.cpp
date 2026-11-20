
class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ans = 1;
        int keep = 1, increase = 1;
        int prev = -10;

        for (int x : nums) {

            if (x == prev) {
                increase = keep + 1;
            }
            else if (x == prev + 1) {
                keep++;
                increase++;
            }
            else if (x == prev + 2) {
                keep = increase + 1;
                increase = 1;
            }
            else {
                keep = 1;
                increase = 1;
            }

            ans = max(ans, max(keep, increase));
            prev = x;
        }

        return ans;
    }
};
