class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int ele=0;
        int digit=0;
        for(int i=0;i<n;i++){
            ele+=nums[i];
            }
        for(int j=0;j<n;j++){
            if(nums[j]<9){
               digit+=nums[j];
            }
            else{
                while(nums[j] != 0){
                    int a=nums[j]%10;
                    digit+=a;
                    nums[j]=nums[j]/10;
                }
            }
        }
        return abs(ele-digit);


        
    }
};