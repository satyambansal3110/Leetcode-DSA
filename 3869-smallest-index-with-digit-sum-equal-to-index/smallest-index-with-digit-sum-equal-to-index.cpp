class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int c=0;
            while(n>0){
                int a=n%10;
                 c=c+a;
                n=n/10;
            }
            if(c==i) return i;
        }
        return -1;
    }
};