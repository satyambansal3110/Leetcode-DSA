class Solution {
public:
    string reverseByType(string s) {
        vector<char>ans;
        vector<char>ap;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                ans.push_back(s[i]);
            }
            else{
                ap.push_back(s[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        reverse(ap.begin(),ap.end());
        string w="";
        int m=0,n=0;
        for(int i=0;i<s.size();i++){
           if(s[i]>='a'&&s[i]<='z'){
                w+=ans[m++];
            }
            else{
                w+=ap[n++];
            }
        }
        return w;
    }
};