class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    unordered_map<int,int> mp;
    int low=0,high=0;
    int res=0;
    for(high=0;high<fruits.size();high++){
        mp[fruits[high]]++;
        while(mp.size()>2){
            mp[fruits[low]]--;
            if(mp[fruits[low]]==0){
                mp.erase(fruits[low]);
            }
            low++;
        }
        if(mp.size()<=2){
            int len=high-low+1;
            res=max(len,res);
        }
    }
    return res;
    }
};