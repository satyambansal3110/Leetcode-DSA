class Solution {
public:
    int mirrorDistance(int n) {
        int a=n;
        int p=0;
        while(a>0){
            int m=a%10;
            p=p*10+m;
            a=a/10;
        }
        return abs(n-p);
        
    }
};