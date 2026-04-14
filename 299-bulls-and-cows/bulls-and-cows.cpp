class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0;
        int cow = 0;
        unordered_map<char, int> mp_s, mp_g;

        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == guess[i]) {
                bull++;
            } else {
              
                mp_s[secret[i]]++;
                mp_g[guess[i]]++;
            }
        }
        for(auto it:mp_s){
            if(mp_g.count(it.first)){
                cow+=min(it.second,mp_g[it.first]);
            }
        }
        return to_string(bull) + "A" + to_string(cow) + "B";
    }
};
