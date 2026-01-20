class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int c=0;

        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                int a=words[i].size();
                if(words[j].substr(0,a)==words[i] && words[j].substr(words[j].size()-a)==words[i]){
                    c++;
                }
            }
        }
        return c;
    }
};