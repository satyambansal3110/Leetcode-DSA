class Solution {
public:
    bool checkDivisibility(int n) {
        int s = n;
        long long sum = 0;
        long long pro = 1;

        while (s > 0) {
            int r = s % 10;
            sum += r;
            pro *= r;   
            s /= 10;
        }

        long long total = sum + pro;
        return (n % total == 0);
    }
};