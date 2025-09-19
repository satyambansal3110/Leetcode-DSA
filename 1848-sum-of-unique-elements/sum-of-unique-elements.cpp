class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> c;
        int n=nums.size();
        int sum=0;
        for(int i:nums){
            c[i]++;
        }
        for(auto &p:c){
            if(p.second==1)
                sum += p.first;
        }
            return sum;
        
        
    }
};