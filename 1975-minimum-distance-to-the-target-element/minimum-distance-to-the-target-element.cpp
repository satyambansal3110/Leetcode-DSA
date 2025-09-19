class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n= nums.size();
        int i;
        int m=n;
        for( i=0;i<n;i++){
            
            if(nums[i]== target)
                m=min(m,abs(i-start));
                
                
        }
        return m;
    
    }
};