class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char,int> mp;
        vector<string> ans;
        for(char x:words[0]){
            mp[x]++;
        }
        for(int i=1;i<words.size();i++){
            map<char,int>temp;
            for(char x:words[i]){
                temp[x]++;

            }
            for(auto &it:mp){
                it.second=min(it.second,temp[it.first]);
            }
        }
          for(auto & it:mp){
            while(it.second>0){
                ans.push_back(string(1,it.first));
                it.second--;
            }
          }
        return ans;
    }
};