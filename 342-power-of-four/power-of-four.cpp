class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;

        for (int i = 0; pow(4,i) <= n; i++) {
            if (pow(4, i) == n) {
                return true;
            }
        }
        return false;
    }
};