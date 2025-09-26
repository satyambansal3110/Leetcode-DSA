class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        string r="";
        for(int i=0;i<n;i++){
            if(address[i]== '.')
            {
                r += "[.]";
                
            }
            else{
                r += address[i];
            }
        }
        return r;
    }
};