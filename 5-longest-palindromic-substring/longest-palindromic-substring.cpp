class Solution {
public:
    bool isp(string &s, int i, int j){
        while(i <= j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int start = 0;
        int maxLen = 0;

        for(int i = 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){

                if(isp(s, i, j)){   
                    if(j - i + 1 > maxLen){
                        start = i;
                        maxLen = j - i + 1;
                    }
                }
            }
        }

        return s.substr(start, maxLen);
    }
};