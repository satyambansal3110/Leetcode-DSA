class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> cp;
        for(char c:s){
            cp[c]++;
        }
        for(char c:t){
            if(cp[c] ==0){
                return c;
            }
            cp[c]--;
        }
        return 0;
        
    }
};