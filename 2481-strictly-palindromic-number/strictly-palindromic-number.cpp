class Solution {
public:
    string toBase(int n, int base) {
        string s = "";
        while (n > 0) {
            s += char('0' + (n % base));
            n /= base;
        }
        reverse(s.begin(), s.end());
        return s;
    }

    
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) {
        for (int base = 2; base <= n - 2; base++) {
            string converted = toBase(n, base);
            if (!isPalindrome(converted)) {
                return false;
            }
        }
        return true;
    }
};