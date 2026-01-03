class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
      
        long long score=0;
        int n=values.size();
          vector<bool> ans(n,false);
        int i=0;
        while( i>=0 && i<n && ans[i]==false){
            ans[i]=true;
            if(instructions[i]=="add"){
                score+=values[i];
                i++;
            }
           else if(instructions[i]=="jump"){
                i+=values[i];
            }

        }
        return score;
    }
};