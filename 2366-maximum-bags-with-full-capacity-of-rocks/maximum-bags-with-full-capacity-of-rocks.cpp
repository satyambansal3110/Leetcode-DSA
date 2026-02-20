class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>ans;
        int c=0;
        for(int i=0;i<rocks.size();i++){
          if(rocks[i]<capacity[i]){
            int n=capacity[i]-rocks[i];
            ans.push_back(n);
          }
          else if(rocks[i]==capacity[i]){
            c++;
          }
        }
        sort(ans.begin(),ans.end());
        
        for(int i=0;i<ans.size() ;i++){
           if(additionalRocks>=ans[i]){
            additionalRocks-=ans[i];
            c++;
           }
           else{
            break;
           }

        }
        return c;
    }
};