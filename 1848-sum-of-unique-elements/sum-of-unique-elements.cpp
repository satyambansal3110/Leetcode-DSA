class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> c;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            c[nums[i]]++;
        }
        for(auto &p:c){
            if(p.second==1)
                sum += p.first;
        }
            return sum;
        
        
    }
};