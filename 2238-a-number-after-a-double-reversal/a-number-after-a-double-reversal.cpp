class Solution {
public:
    bool isSameAfterReversals(int num) {
        int c=num;
        int b=0;
        while(c>0){
          int a=c%10;
          b=b*10+a;
          c=c/10;

        }
        int m=0;
        while(b>0){
            int a=b%10;
            m=m*10+a;
            b=b/10;
        }
        if(m==num) return true;
        return false;

        
    }
};