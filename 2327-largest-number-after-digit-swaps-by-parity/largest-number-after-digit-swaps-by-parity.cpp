class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);

        vector<char> odd, even;

       
        for (char c : s) {
            int d = c - '0';
            if (d % 2 == 0) even.push_back(c);
            else odd.push_back(c);
        }

      
        sort(odd.begin(), odd.end(), greater<char>());
        sort(even.begin(), even.end(), greater<char>());

        int oi = 0, ei = 0;

        
        for (int i = 0; i < s.size(); i++) {
            int d = s[i] - '0';
            if (d % 2 == 0) {
                s[i] = even[ei++];
            } else {
                s[i] = odd[oi++];
            }
        }

        return stoi(s);
    }
};