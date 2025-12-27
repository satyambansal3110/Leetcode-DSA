class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int esum=0;
        int osum=0;
        for(int i=0;i<nums.size();i+=2){
            esum+=nums[i];
        }
         for(int i=1;i<nums.size();i+=2){
            osum+=nums[i];
        }
        return esum-osum;
    }
};