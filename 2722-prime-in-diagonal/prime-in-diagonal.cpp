class Solution {
public:
    bool isprime(int p){
        if(p <= 1) return false;
        for(int i = 2; i * i <= p; i++){
            if(p % i == 0) return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            int d1 = nums[i][i];
            int d2 = nums[i][n - i - 1];

            if(isprime(d1)) ans = max(ans, d1);
            if(isprime(d2)) ans = max(ans, d2);
        }
        return ans;
    }
};