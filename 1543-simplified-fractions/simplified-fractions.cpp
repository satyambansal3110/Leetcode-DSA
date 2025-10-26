class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        set<string> st;

        for (int i = 1; i < n; i++) {
            for (int j = 2; j <= n; j++) {
                if(i<j && gcd(i,j)==1){
               
              st.insert(to_string(i) + "/" + to_string(j));
                }
               
            }
        }

        // convert unordered_set to vector
        return vector<string>(st.begin(), st.end());
    }
};