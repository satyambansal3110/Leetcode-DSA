class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(char x:s){
            mp[x]++;
        }
        int c=0;
        for(char x:t){
           if(mp[x]==0){
            return x;
           }
           mp[x]--;
        }
        
       return ' ';
    }
};