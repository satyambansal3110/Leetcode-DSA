#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int i = 0, j = s.size() - 1;

        while (i < j) {
            while (i < j && vowels.find(s[i]) == vowels.end()) i++;
            while (i < j && vowels.find(s[j]) == vowels.end()) j--;

            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
