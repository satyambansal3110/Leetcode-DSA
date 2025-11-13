class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> ans;
        for( string i:timePoints){
            int h=stoi(i.substr(0,2));
            int m=stoi(i.substr(3,2));
            ans.push_back(h*60+m);
        }
        sort(ans.begin(),ans.end());
        int ap=INT_MAX;
        for(int i=1;i<ans.size();i++){
            ap=min(ap,ans[i]-ans[i-1]);
        }
        ap = min(ap, 1440 - (ans.back() - ans.front()));

        return ap;
        
    }
};