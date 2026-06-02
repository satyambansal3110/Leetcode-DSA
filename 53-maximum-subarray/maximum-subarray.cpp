class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=INT_MIN;
        int c=0;
        for(int i=0;i<nums.size();i++){
           c=c+nums[i];
           m=max(m,c);
           if(c<0){
            c=0;
           }
        }
        return m;
    }
};