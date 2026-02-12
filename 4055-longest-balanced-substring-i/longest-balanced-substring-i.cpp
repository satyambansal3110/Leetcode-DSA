class Solution {
public:
    int longestBalanced(string s) {
        int ma=0;
        for(int i=0;i<s.size();i++){
             vector<int>ans(26,0);
            for(int j=i;j<s.size();j++){
               
                int a=s[j]-'a';
                ans[a]++;
                int target=0;
                bool v=true;

                for(int k=0;k<26;k++){
                    if(ans[k] != 0){
                        target=ans[k];
                        break;
                    }
                }
                for(int k=0;k<26;k++){
                    if(ans[k] != 0 && ans[k] != target){
                        v=false;
                        break;
                    }
                }
                if(v){
                    ma=max(ma,j-i+1);
                }
            }
        }
        return ma;
    }
};