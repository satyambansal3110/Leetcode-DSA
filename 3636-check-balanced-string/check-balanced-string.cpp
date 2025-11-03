class Solution {
public:
    bool isBalanced(string num) {
        int oddsum=0;
        int evensum=0;
        for(int i=0;i<num.size();i=i+2){
            oddsum+=(num[i]-'0');
        }
        for(int i=1;i<num.size();i=i+2){
            evensum+=(num[i]-'0');
        }
        if(oddsum==evensum) {
            return true;
        }
        return false;
    }
};