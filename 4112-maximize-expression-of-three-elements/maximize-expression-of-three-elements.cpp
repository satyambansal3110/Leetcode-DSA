class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=0;
        int a=n-2;
        int b=n-1;
        return nums[a]+nums[b]-nums[c];
        
    }
};