class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int g=0;
        int s=0;
      sort(nums.begin(),nums.end());
            
        int c=0;
      for(int i=n-1;i>=0;i--){
        if(c<k){
            g+=nums[i];
        }
        c++;
        }

        int p=0;
      for(int i=0;i<n;i++){
        if(p<k){
            s+=nums[i];
        }
        p++;
        }

        return abs(g-s);
    }
};