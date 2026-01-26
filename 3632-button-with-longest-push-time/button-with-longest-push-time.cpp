class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {

        int m = events[0][1];         
        int mi = events[0][0];         

        for (int i = 1; i < events.size(); i++) {
            int c = events[i][1] - events[i-1][1];

            if (c > m) {
                m = c;
                mi = events[i][0];
            }
            else if (c == m) {
                mi = min(mi, events[i][0]);
            }
        }

        return mi;
    }
};