class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int s = 0; 
        
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            int c = 0;
            int n = nums[i];
            int limit = sqrt(n);

            for (int j = 1; j <= limit; j++) {
                if (n % j == 0) {
                    int k = n / j;
                    if (j == k) {
                        sum += j;
                        c++;
                    } else {
                        sum += j + k;
                        c += 2;
                    }
                }
                if (c > 4) break;
            }

            if (c == 4)
                s += sum;
        }
        
        return s;
    }
};