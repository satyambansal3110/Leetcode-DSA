class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> c;
        for(int i:arr){
            c[i]++;
        }
        unordered_set<int> s;
        for(auto &p:c){
            if(s.find(p.second) != s.end()) {
                return false;
            }
            s.insert(p.second);
        }
        return true;
        
    }
};