class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> cp;
        for(char c : s){
            cp[c]++;
        }

        string ans = "";
       
        for(char c : order){
            while(cp[c] > 0){
                ans += c;
                cp[c]--;
            }
        }

      
        for(char c = 'a'; c <= 'z'; c++){
            while(cp[c] > 0){
                ans += c;
                cp[c]--;
            }
        }

        return ans;
    }
};
