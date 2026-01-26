class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>arr;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        while(i<nums.size() && j<nums.size()){
            arr.push_back(nums[j]);
            arr.push_back(nums[i]);
            j+=2;
            i+=2;
        }
      return arr;
        
    }
};