class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int a;
        int sum=0;
        for(int i=0;i<s.size();i++){
          
            for(int j=0;j<s.size();j++){
                if(s[i]==t[j]){
                    a=abs(i-j);
                    sum+=a;
                }
            }
        }
        return sum;
    }
};