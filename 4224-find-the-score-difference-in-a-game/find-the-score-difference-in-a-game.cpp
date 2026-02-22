class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n=0,m=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            
           if(nums[i]%2 !=0 ){
            c++;
           }
          if ( (i+1)%6==0 ) {
              c++;
          }
           
           if(c%2 != 0){
            m+=nums[i];

           }
           else{
            n+=nums[i];
           }
        

        }
        return n-m;
    }
};