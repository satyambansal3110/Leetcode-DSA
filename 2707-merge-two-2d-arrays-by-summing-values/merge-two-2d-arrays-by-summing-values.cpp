class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;

        int i = 0, j = 0;
        int n1 = nums1.size(), n2 = nums2.size();

        while (i < n1 && j < n2) {
            vector<int> ap;

            if (nums1[i][0] == nums2[j][0]) {
                ap.push_back(nums1[i][0]);
                ap.push_back(nums1[i][1] + nums2[j][1]);
                i++;
                j++;
            }
            else if (nums1[i][0] < nums2[j][0]) {
                ap.push_back(nums1[i][0]);
                ap.push_back(nums1[i][1]);
                i++;
            }
            else {
                ap.push_back(nums2[j][0]);
                ap.push_back(nums2[j][1]);
                j++;
            }

            ans.push_back(ap);
        }

       
        while (i < n1) {
            ans.push_back(nums1[i]);
            i++;
        }

       
        while (j < n2) {
            ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }
};