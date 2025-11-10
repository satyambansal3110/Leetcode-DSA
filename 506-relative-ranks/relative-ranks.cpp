class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> arr = score; 
        sort(arr.rbegin(), arr.rend()); 

        vector<string> answer(score.size());

        for (int i = 0; i < score.size(); i++) {
            for (int j = 0; j < score.size(); j++) {
                if (score[j] == arr[i]) {
                    if (i == 0) answer[j] = "Gold Medal";
                    else if (i == 1) answer[j] = "Silver Medal";
                    else if (i == 2) answer[j] = "Bronze Medal";
                    else answer[j] = to_string(i + 1);
                }
            }
        }

        return answer;
        
    }
};