class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        unordered_set<int> s(nums2.begin(),nums2.end());
        for (int i=0;i<nums1.size();i++){
            if (s.count(nums1[i])) return nums1[i];
        }
        int a=nums1[0];
        int b=nums2[0];
        int ans;
        if (a>b){
            ans=b*10+a;
        }
        else ans=a*10 + b;
        return ans;
    }
};