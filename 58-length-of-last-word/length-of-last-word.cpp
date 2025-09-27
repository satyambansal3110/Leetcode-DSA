class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int j = n - 1;
        int c = 0;

     
        while (j >= 0 && s[j] == ' ') {
            j--;
        }

       
        while (j >= 0 && s[j] != ' ') {
            c++;
            j--;
        }

        return c;
    }
};
