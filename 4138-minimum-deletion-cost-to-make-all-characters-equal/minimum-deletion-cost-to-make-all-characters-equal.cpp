class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        long long keep[26] = {0};
        long long total = 0;

        
        for (int i = 0; i < s.size(); i++) {
            int idx = s[i] - 'a';
            keep[idx] += cost[i];
            total += cost[i];
        }

        
        
        long long ans = LLONG_MAX;
        for (int i = 0; i < 26; i++) {
            if (keep[i] > 0) {
                ans = min(ans, total - keep[i]);
            }
        }

        return ans;
    }
};