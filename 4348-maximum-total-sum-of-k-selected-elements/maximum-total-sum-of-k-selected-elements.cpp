class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end());

        int m = 0;
        long long sum = 0;

        for (int i = nums.size() - 1; i >= 0 && m < k; i--) {
            if (mul > 0) {
                sum += 1LL * mul * nums[i];
                mul--;
            } else {
                sum += nums[i];
            }
            m++;
        }

        return sum;
    }
};