class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int p=x;
        int s=0;
        while(x != 0){
            int c=x%10;
             s=s+c;
            x=x/10;
        }
        if(p%s==0){
            return s;
        }
        return -1;
        
    }
};