class Solution {
public:
    int minAllOneMultiple(int k) {
        
        long long a=1%k;
        int c=1;
        while(c<=k){
            if(a==0){
                return c;
            }
            a=(a*10+1)%k;
            c++;
        }
        return -1;
    }
};