class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0;
        int p=flowerbed.size();
        if(p==1){
            if(flowerbed[0]==0)
            c++;
            return c>=n;
            
        }
        if(flowerbed[0]==0 && flowerbed[1]==0){
                flowerbed[0]=1;
                c++;
            }

            if(flowerbed[p-1]==0 && flowerbed[p-2]==0){
                flowerbed[p-1]=1;
                c++;
            }
        for(int i=1;i<p-1;i++){
            
            if (flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0){
                flowerbed[i]=1;
                c++;
            }
        }
        
        return c>=n;
        
    }
};