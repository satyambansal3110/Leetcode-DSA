class Solution {
public:
    int compress(vector<char>& chars) {
        
        char s=chars[0];
        int i=1;
        int left=0;
        for(int j=1;j<chars.size();j++){
                  if(chars[j] != s){
                    chars[left++]=s;
                    if(i != 1){
                    string st=to_string(i);
                   for(char c:st){
                    chars[left++]=c;
                   }
                    }
                    s=chars[j];
                    
                    i=1;
                  }
                  else{
                    s=chars[j];
                    i++;
                    
                  }
        }
       chars[left++] = s;

     if(i != 1){
     string st = to_string(i);
     for(char c : st){
        chars[left++] = c;
      }
     }

return left;

        return left;
    }
};