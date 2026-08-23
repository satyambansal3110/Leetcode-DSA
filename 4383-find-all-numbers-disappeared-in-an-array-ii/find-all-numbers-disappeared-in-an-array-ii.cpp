class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        int nextMissing = lower;

        for (int x : nums) {
            if (x < nextMissing) continue; 
            if (x > upper) break;

            if (x > nextMissing) {
                ans.push_back({nextMissing, x - 1});
            }

            nextMissing = x + 1;
        }

       
        if (nextMissing <= upper) {
            ans.push_back({nextMissing, upper});
        }

        return ans;
    }
};