class Solution {
public:
    bool isPalindromic(string s) {
         string binary = "";

        for (char ch : s) {
            int ascii = ch;

            
            for (int bit = 7; bit >= 0; bit--) {
                binary += ((ascii >> bit) & 1) ? '1' : '0';
            }
        }

        int left = 0;
        int right = binary.size() - 1;

        while (left < right) {
            if (binary[left] != binary[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};