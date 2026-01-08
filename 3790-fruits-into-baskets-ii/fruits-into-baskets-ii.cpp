class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        vector<int> ans=baskets;

        int n=fruits.size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<ans.size();j++){
                if(fruits[i]<=ans[j] ){
                    
                    c++;
                    ans.erase(ans.begin()+j);
                    break;
                }
            }
        }
        return n-c;
    }
};