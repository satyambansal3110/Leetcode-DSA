class Solution {
public:
    int addDigits(int num) {
        while (num>9){

        int ans=0,r;
        while(num!=0){
            r=num%10;
            num=num/10;
            ans=ans+r;
            
        }
        num =ans;
      }
      return num;
        
    }
};