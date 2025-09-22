class Solution {
public:
    int countEven(int num) {
       int a=0;
        
        for(int i=2;i<=num;i++){
            int x=i;
            int s=0;
            while(x != 0){
                int c=x%10;
                s+=c;
                
                x/=10;
            }
            if(s%2==0){
                   a++;
                }

        }
        return a;
    }
};