class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n),ap(n),final(n);

        int pre=1;
        for(int i=0;i<n;i++){
            ans[i]=pre;
            pre*=nums[i];
        }

        int suf=1;
        for(int i=n-1;i>=0;i--){
            ap[i]=suf;
            suf*=nums[i];
        }
        for(int i=0;i<n;i++){
            final[i]=ans[i]*ap[i];
        }
        return final;
    }
};