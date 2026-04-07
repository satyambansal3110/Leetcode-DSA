class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int m = INT_MAX;  
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1 || nums[i] == 2){
                for(int j = i + 1; j < nums.size(); j++){
                    
                   
                    if((nums[i] == 1 && nums[j] == 2) || 
                       (nums[i] == 2 && nums[j] == 1)){
                        
                        m = min(m, abs(j - i));
                    }
                }
            }
        }
        
       
        return (m == INT_MAX) ? -1 : m;
    }
};