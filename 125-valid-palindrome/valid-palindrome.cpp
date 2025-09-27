class Solution {
public:
    bool isPalindrome(string s) {
        string r = "";

        
        for (char c : s) {
            if (isalnum(c)) {
                if (c >= 'A' && c <= 'Z') {
                    r += c - 'A' + 'a'; 
                } else {
                    r += c;
                }
            }
        }

        
        int left = 0, right = r.size() - 1;
        while (left < right) {
            if (r[left] != r[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
