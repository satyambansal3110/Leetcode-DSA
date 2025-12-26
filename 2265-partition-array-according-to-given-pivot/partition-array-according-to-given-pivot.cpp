class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>s,e,g,ans;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                s.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                e.push_back(nums[i]);
            }
            else{
                g.push_back(nums[i]);
            }
        }
       for(int i=0;i<s.size();i++){
        ans.push_back(s[i]);
       }
        for(int i=0;i<e.size();i++){
        ans.push_back(e[i]);
       }
        for(int i=0;i<g.size();i++){
        ans.push_back(g[i]);
       }
        return ans;
    }
};