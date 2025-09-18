class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> c;
        vector<int> ans;
        int n=nums.size();
        int k= n/3;
        for(int i=0;i<n;i++){
            c[nums[i]]++;
        }
        for(auto &p:c){
            if(p.second > k)
            ans.push_back(p.first);
        }
         return ans;
        
    }
};