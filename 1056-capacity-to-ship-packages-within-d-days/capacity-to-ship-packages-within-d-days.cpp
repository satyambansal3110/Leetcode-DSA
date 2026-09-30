class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(),weights.end());
        int right=accumulate(weights.begin(),weights.end(),0);
        int answer=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            int currweight=0;
            int requiredays=1;
            for(int i=0;i<weights.size();i++){
                if(currweight+weights[i]>mid){
                    requiredays++;
                    currweight=weights[i];
                }
                else{
                    currweight+=weights[i];
                }
            }
            if(requiredays<=days){
                answer=mid;
                right=mid-1;

            }
            else{
                left=mid+1;
            }
        }
        return answer;
    }
};