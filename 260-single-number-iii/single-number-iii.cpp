class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        if(nums.size()==2) return nums;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){ 
                if(i != j && nums[i]==nums[j]){
                    c++;
                    break;
                }


            }
            if(c==0)
            ans.push_back(nums[i]);
        }
        return ans;
    }
};