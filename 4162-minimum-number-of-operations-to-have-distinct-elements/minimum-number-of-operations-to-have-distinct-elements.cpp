class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int c=0;
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int d=0;
        for(auto &p:mp){
            if(p.second>1){
                d++;
            }
        }
        while(i<n && d>0){
            for(int k=0;k<3 && i<n;k++){
                int v=nums[i];
                if(mp[v]==2) d--;
                mp[v]--;
                i++;
            }
              c++;
              
        }
        return c;
    }
};