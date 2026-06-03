class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int h,area=0;
        int final=INT_MIN;
      
        while(i<j){
          h=min(height[i],height[j]);
          area=h*(j-i);
           final=max(final,area);
           
          if(height[i]<height[j]){
            
            i++;
          }
          else{
            j--;
          }
        }
        return final;
    }
};