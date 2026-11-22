class Solution {
public:
    bool checkString(string s) {
        int flag=0;
        for(char c:s){
            if(c=='b' && flag==0){
                flag=1;
            }
            if(c=='a' && flag==1){
                return false;
            }
        }
        return true;
    }
};