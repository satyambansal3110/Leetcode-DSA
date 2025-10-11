class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int n1 = word1.size(), n2 = word2.size();
        for (int i = 0; i < max(n1, n2); i++) {
            if (i < n1) res += word1[i];
            if (i < n2) res += word2[i];
        }
        return res;
    }
};