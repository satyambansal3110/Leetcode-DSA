class Solution {
public:
bool prime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }

    }
    return true;
}
    int sumOfPrimesInRange(int n) {
        int a=n;
        int c=0;
        while(a!=0){
            int b=a%10;
             c=c*10+b;
            a=a/10;
        }
        int mi=min(n,c);
        int ma=max(n,c);
        int sum=0;
        for(int i=mi;i<=ma;i++){
           if(prime(i)){
            sum+=i;
           }
        }
        return sum;
    }
};