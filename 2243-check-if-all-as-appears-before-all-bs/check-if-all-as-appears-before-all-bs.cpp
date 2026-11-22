class Solution {
public:
    bool checkString(string s) {
        bool foundb=false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='b'){
                foundb=true;
            }
            if(s[i]=='a' && foundb==true){
                return false;
            }
        }
        return true;
    }
};