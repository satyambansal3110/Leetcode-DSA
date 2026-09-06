class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        string t=s;
        int ans=0;
        while(n>0){
            int c=0;
            for(int i=0;i<s.size()-1;i++){
                if(t[i]==t[i+1]){
                   c++;
                   
                }
            }
            n--;
            t=t.substr(1)+t[0];
            if(c==k){
            ans++;
        }
        }
        return ans;
    }
};