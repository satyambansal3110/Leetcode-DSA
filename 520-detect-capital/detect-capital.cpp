class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int c=0;

        for(char ch:word){
            if(ch>='A' && ch<='Z'){
                c++;
            }
        }
        if(c==n) return true;
        if(c==0) return true;
        if(c==1 && (word[0]>='A' && word[0]<='Z')) return true;
        return false;
        
    }
};