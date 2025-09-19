class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> c;
        vector<int> ans;
       
        for(int i:nums1){
            c[i]++;

        }
        for(int i:nums2){
            if(c[i]>0)
            ans.push_back(i);
            c[i]--;
        }
        return ans;
    }
};