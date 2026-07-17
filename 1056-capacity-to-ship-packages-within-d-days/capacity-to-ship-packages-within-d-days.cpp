class Solution {
public:
    bool possi(vector<int>& weights, int capacity, int days){
        int sum=0;
        int dayused=1;
        for(int w:weights){
            if(sum+w<=capacity){
                sum+=w;
            }
            else{
                dayused++;
                sum=w;

            }
        }
        return dayused<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
       int low = *max_element(weights.begin(), weights.end());
       int high = accumulate(weights.begin(), weights.end(), 0);
       int res=-1;
       while(low<=high){
        int mid=low+(high-low)/2;
        if (possi(weights,mid,days)){
            res=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       } return res;
    }
    
};