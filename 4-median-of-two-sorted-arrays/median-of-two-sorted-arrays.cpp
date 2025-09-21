class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int b=nums1.size();
        if(b%2 != 0){
            return (nums1[b/2]);
        }
        else{
            float c= (nums1[b/2] + nums1[(b/2)-1])/2.0;
            return c;
        }
        return 0;
    }
};