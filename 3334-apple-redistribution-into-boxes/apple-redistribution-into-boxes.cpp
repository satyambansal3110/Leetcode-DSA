class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int sum=0;
        for(int i=0;i<apple.size();i++){
            sum+=apple[i];
        }
        int c=0,m=0;
        for(int i=0;i<capacity.size();i++){
           m+=capacity[i];
           c++;
           if(m>=sum){
            break;
           }
        }
        return c;
    }
};