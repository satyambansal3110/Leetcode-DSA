class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
       
        for(int i=left;i<=right;i++){
            int m=i;
          
             int c=0;
             int n=0;
            while(m != 0){
                int a=m%10;
                n++;
                if( a !=0 && i%a==0){
                    c++;
                }
                 m=m/10;
            }
            if(n==c){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};