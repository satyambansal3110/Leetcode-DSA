class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> c;
        vector<int> ans;
        vector<int> rest;
        for(int i:arr1){
            c[i]++;
            }

            for(int i: arr2){
                while(c[i]>0){
                    ans.push_back(i);
                    c[i]--;
                }

            }
            for(auto &p:c){
                while(p.second>0){
                    rest.push_back(p.first);
                    p.second--;
                }
                
            }
            sort(rest.begin(),rest.end());
                ans.insert(ans.end(),rest.begin(),rest.end());
                return ans;
        
    }
};