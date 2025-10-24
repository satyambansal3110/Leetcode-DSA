
class Solution {
public:
    vector<int> closestDivisors(int num) {
        vector<int> ans;
        vector<int> ap;
        int a = num + 1;
        int c = num + 2;

      
        for (int i = sqrt(a); i >= 1; i--) {
            if (a % i == 0) {
                ans.push_back(i);
                ans.push_back(a / i);
                break; // ✅ stop after first (closest) pair
            }
        }

        // For num + 2
        for (int i = sqrt(c); i >= 1; i--) {
            if (c % i == 0) {
                ap.push_back(i);
                ap.push_back(c / i);
                break; // ✅ stop after first (closest) pair
            }
        }

        // Compare which pair is closer
        if (abs(ans[0] - ans[1]) <= abs(ap[0] - ap[1])) {
            return ans;
        } else {
            return ap;
        }
    }
};

