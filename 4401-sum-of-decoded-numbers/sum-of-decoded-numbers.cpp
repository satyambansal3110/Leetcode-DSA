class Solution {
public:
    const long long MOD = 1e9 + 7;

    long long power(long long x, long long y) {
        long long ans = 1;
        x %= MOD;

        while (y > 0) {
            if (y % 2 == 1) {
                ans = (ans * x) % MOD;
            }

            x = (x * x) % MOD;
            y /= 2;
        }

        return ans;
    }

    long long decode(long long n, int w, long long d) {
        int m = 0;
        long long temp = d;

        while (temp > 0) {
            temp /= 10;
            m++;
        }

        int k = m - w;

        long long p = 1;
        for (int i = 0; i < k; i++) {
            p *= 10;
        }

        long long x = d / p;
        long long y = d % p;

        return power(x, y);
    }

    int sumDecoded(vector<long long>& nums) {
        long long c = 0;

        for (long long x : nums) {
            c = (c + decode(x, x % 10, x / 10)) % MOD;
        }

        return c;
    }
};