class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int> ans = {-1, -1};
        int m = 0;
        int c = 0;
        
       
        for(int i = 0; i < towers.size(); i++){
            int a = abs(towers[i][0] - center[0]) + abs(towers[i][1] - center[1]);
            if(a <= radius){
                m = max(m, towers[i][2]);
                c = 1;
            }
        }

        int x = INT_MAX;
        int y = INT_MAX;

        if(c == 0) return ans;

        
        for(int i = 0; i < towers.size(); i++){
            int a = towers[i][0], b = towers[i][1];
            int d = abs(a - center[0]) + abs(b - center[1]);

            if(towers[i][2] == m && d <= radius){
                if( a < x || (a == x && b < y) ){
                    x = a;
                    y = b;
                }
            }
        }

        return {x, y};
    }
};