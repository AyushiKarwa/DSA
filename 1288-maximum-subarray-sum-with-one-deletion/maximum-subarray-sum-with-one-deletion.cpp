class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int onedelete=INT_MIN;
        int nodelete=arr[0];
        int result=arr[0];
        for(int i=1;i<arr.size();i++){
            int prevnodelete=nodelete;
            int prevonedelete=onedelete;
            nodelete=max(nodelete+arr[i],arr[i]);
            int v2;
            if(prevonedelete==INT_MIN){
                v2=prevnodelete;
            }
            else{
                v2=prevonedelete+arr[i];
            }
            onedelete=max(v2,prevnodelete);
            result=max(result,max(onedelete,nodelete));
        }
        return result;
    }
};