class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
       
        int p=0;
        for(int i=0;i<n;i++){
            int m= nums[i];
             int c=0;
            while(m != 0){
                m=m/10;
                c++;
            }
            if(c%2==0)
            p++;

        }
        return p;
        
    }
};