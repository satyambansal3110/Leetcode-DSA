class Solution {
public:
    bool isValid(string s) {
        string a = "";
        for(char c : s) {
      
            if(c == '(' || c == '{' || c == '[') {
              a.push_back(c);
            } else {
                
                if(a.empty()) return false;
                char top = a.back();
                
                if((c == ')' && top != '(') ||
                   (c == '}' && top != '{') ||
                   (c == ']' && top != '[')) {
                    return false;
                }
                
                a.pop_back();
            }
        }
        return a.empty();
    }
};
