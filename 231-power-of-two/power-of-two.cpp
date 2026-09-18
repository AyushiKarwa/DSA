class Solution {
public:
    bool isPowerOfTwo(int n) {
        int res=0;
        if(n<=0){
            return false;
        }
        while(n>0){
            res++;
            n=n&(n-1);
        }
        if(res>1){
            return false;
        }
        else{
            return true;
        }
    }
};