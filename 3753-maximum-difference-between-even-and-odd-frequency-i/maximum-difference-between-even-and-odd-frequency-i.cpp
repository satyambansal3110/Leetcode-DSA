class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        for(char x:s){
            mp[x]++;
        }
        int m=INT_MIN;
        int mi=INT_MAX;
        for(auto &it:mp){
            if(it.second % 2 != 0){
                m=max(it.second,m);
            }
            else{
              mi=min(it.second,mi);
            }
        }
        return m-mi;
    }
};