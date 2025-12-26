class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> ans,ap;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    ans.insert(i);
                    ap.insert(j);
                }
            }
        }
      for(int x:ans){

            for(int j=0;j<matrix[0].size();j++){
                matrix[x][j]=0;
            }
      }
        for(int x:ap){
            for(int i=0;i<matrix.size();i++){
                matrix[i][x]=0;
            }
        } 

         
       
    }
};