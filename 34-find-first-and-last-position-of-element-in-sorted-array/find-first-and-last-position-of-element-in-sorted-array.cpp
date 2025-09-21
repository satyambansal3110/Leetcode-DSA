class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = -1, right = -1;

        
        int l = 0, r = n - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] < target)
                l = mid + 1;
            else{
                if(nums[mid] == target) left = mid;
                r = mid - 1;
            }
        }

       
        l = 0; r = n - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] > target)
                r = mid - 1;
            else{
                if(nums[mid] == target) right = mid;
                l = mid + 1;
            }
        }

        return {left, right};
    }
};
