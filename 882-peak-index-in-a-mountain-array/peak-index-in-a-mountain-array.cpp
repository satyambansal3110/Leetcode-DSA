class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int m=*max_element(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]==m)
            return i;
        }
        return 0;
        
    }
};