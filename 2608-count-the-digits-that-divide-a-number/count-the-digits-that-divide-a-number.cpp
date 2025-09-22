class Solution {
public:
    int countDigits(int num) {
        int p=num;
        int c=0;
        while(num != 0){
            int a = num % 10;
            if( a != 0 && p % a == 0){
                c++;

            }
            num = num/10;
        }
        return c;
        
    }
};