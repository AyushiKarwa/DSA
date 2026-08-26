class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int l=min(height[right],height[left]);
            int b=right-left;
            int area=l*b;
            if(area>maxi){
                maxi=max(maxi,area);
            }
            if(height[right]<height[left]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxi;
    }
};