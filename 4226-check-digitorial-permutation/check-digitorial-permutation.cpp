class Solution {
public:
int f(int a){
    int t=1;
    for(int i=1;i<=a;i++){
        t*=i;
    }
    return t;
}
    bool isDigitorialPermutation(int n) {
        unordered_map<int,int>mp1;
         unordered_map<int,int>mp2;

        int m=n;
        int sum=0;
        while(m>0){
            int a=m%10;
            mp1[a]++;
            int r=f(a);
            sum+=r;
            m=m/10;
        }
        if(sum==n) return true;
       while(sum>0){
        mp2[sum%10]++;
        sum=sum/10;
       }
       if(mp1.size() != mp2.size())
            return false;

       
        for(auto it : mp1){
            if(mp2[it.first] != it.second)
                return false;
        }

       return true;
    }
};