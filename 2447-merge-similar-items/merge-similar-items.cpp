class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
                                          vector<vector<int>>& items2) {

        unordered_map<int,int> mp;

        
        for (auto &x : items1) {
            mp[x[0]] += x[1];
        }

        
        for (auto &x : items2) {
            mp[x[0]] += x[1];
        }

       
        vector<vector<int>> ret;
        for (auto &it : mp) {
            ret.push_back({it.first, it.second});
        }

       
        sort(ret.begin(), ret.end());

        return ret;
    }
};
        
    