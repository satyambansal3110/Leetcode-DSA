class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int ma = 0;
        int mi = 0;

        for (int i = 0; i < mat.size(); i++) {
            int c = 0;
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 1) {
                    c++;
                }
            }

            
            if (c > ma) {
                ma = c;
                mi = i;
            }
        }

        ans.push_back(mi);
        ans.push_back(ma);
        return ans;
    }
};