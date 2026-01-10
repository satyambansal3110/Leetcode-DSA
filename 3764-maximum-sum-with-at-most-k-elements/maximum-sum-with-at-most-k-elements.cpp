class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
       vector<int> ans;
       int m=grid[0].size();
       

        for(int i=0;i<limits.size();i++){
             int n=limits[i];
             sort(grid[i].begin(),grid[i].end());
             int j=0;
                 for(int p=m-1;p>=0;p--){
                       if(j==n){
                          break;
                       }
                       else{
                        ans.push_back(grid[i][p]);
                        j++;
                       }
                 }
        }
        sort(ans.begin(),ans.end(),greater<int>());
        long long sum=0;
        
        for(int i=0;i<k;i++){
           sum=sum+ans[i]; 
        }
        return sum;
    }
};