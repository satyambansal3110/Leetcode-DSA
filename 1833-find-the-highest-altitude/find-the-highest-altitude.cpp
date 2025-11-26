#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        ans.push_back(0);

        int current = 0;

        for(int i = 0; i < gain.size(); i++){
            current += gain[i];
            ans.push_back(current);
        }

        int n = *max_element(ans.begin(), ans.end());
        return n;
    }
};