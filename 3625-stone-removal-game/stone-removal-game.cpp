class Solution {
public:
    bool canAliceWin(int n) {
        int m = 55 - n; 
        int unplayed = lround(sqrt(2 * m));  
        return unplayed % 2 == 1;  
    }
};