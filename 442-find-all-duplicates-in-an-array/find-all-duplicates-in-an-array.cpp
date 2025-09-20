class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> c;
        vector<int> ans;
        for(int i:nums){
            c[i]++;
        }
        for(auto &p:c){
            if(p.second==2)
            ans.push_back(p.first);
        }
        return ans;
        
    }
};