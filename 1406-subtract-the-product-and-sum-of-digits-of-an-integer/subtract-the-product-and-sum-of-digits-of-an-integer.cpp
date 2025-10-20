class Solution {
public:
    int subtractProductAndSum(int n) {
        int a=n;
        int m=n;
        int c=1;
        while(a!=0){
            int b=a%10;
            c=c*b;
            a=a/10;
        
        }
        int d=0;
        while(m!=0){
            int b=m%10;
            d=d+b;
            m=m/10;
        
        }
        return c-d;
        
    }
};