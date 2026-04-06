class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char,int>mp;
        
        int ans=0,m=0,c=0;
        for(int i=0;i<s.size();i++){
           
                mp[s[i]]++;
            
           
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]>0){
                 c=mp[s[i]];
                if(s[i]>='a'&& s[i]<='z'){
                    char r=  'z'-(s[i]-'a');
                    m =mp[r];
                    ans+=abs(m-c);
                    mp[r]=0;
                }
                else{
                    int a=s[i]-'0';
                     m=mp[(9-a)+'0'];
                     ans+=abs(m-c);
                     mp[(9-a)+'0']=0;
                }
            }
            mp[s[i]]=0;
        }
        
        return ans;
    }
};