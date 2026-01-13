class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n=s.size();
        string temp=s;
        for(int i=0;i<n;i++){
            int a=(i+k)%n;
            
            s[i]=temp[a];
        }
        return s;
      
    }
};