class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>ans;
        int first , sec;
        for(int i=0;i<nums.size();i++){
            first = nums[i];
            sec= target - first;;
            if(m.find(sec) != m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
            }
            m[first] = i;

        }

        return ans;
        
    }
};