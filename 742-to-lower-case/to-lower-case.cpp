class Solution {
public:
    string toLowerCase(string s) {
        int n= s.size();
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c >= 'a' && c<= 'z'){
                continue;
            }
            else if(c >='A' && c <= 'Z'){
                s[i]=c-'A'+'a';
            }
            else{
                continue;
            }
        }
        return s;
        
    }
};