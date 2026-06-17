class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++) {

            int target = nums1[i];
            bool found = false;

            for(int j = 0; j < nums2.size(); j++) {

                if(nums2[j] == target) {

                    for(int k = j + 1; k < nums2.size(); k++) {

                        if(nums2[k] > target) {
                            ans.push_back(nums2[k]);
                            found = true;
                            break;
                        }
                    }

                    break;
                }
            }

            if(!found) {
                ans.push_back(-1);
            }
        }

        return ans;
    }
};