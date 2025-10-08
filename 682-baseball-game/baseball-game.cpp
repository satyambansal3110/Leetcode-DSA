class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;

        for (string op : operations) {
            if (op == "C") {
                ans.pop_back();
            } 
            else if (op == "D") {
                ans.push_back(ans.back() * 2);
            } 
            else if (op == "+") {
                int n = ans.size();
                ans.push_back(ans[n - 1] + ans[n - 2]);
            } else{
                ans.push_back(stoi(op));
            }
           
        }

        int total = 0;
        for (int x : ans) total += x;

        return total;
    }
};