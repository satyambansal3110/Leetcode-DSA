class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even = 0, odd = 0;
        int n = nums1.size();

        for(int x: nums1){
            if(x % 2 == 0) even++;
            else odd++;
        }

        if(even == n || odd == n) return true;

        int m = INT_MAX;
        for(int x: nums1){
            if(x % 2 != 0){
                m = min(m, x);
            }
        }

        for(int x: nums1){
            if(x % 2 == 0){
                int a = x - m;
                if(a <= 0) return false;
            }
        }

        return true;
    }
};