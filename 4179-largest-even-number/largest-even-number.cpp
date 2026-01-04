class Solution {
public:
    string largestEven(string s) {
        int n=s.size();
        int last = -1;
        for(int i=0;i<n;i++){
            if(s[i]=='2'){
                last=i;
            }
        }
        if(last == -1) return "";

        return s.substr(0,last+1);
        
    }
};