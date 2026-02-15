class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        
        string w="";

        for(int i=0;i<words.size();i++){
            int s=0;
            
            for(int j=0;j<words[i].size()  ;j++){
                char ch=words[i][j];
                int m=ch-'a';
                s+=weights[m];
            }
            int a=s%26;
            w+='z'-a;
        }
        return w;
    }
};