class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> cp;
        for(char c:s){
            cp[c]++;
        }
       for(int i=0;i<s.size();i++){
        if(cp[s[i]]==1){
            return i;
        }
       }
       return -1;
        
    }
};