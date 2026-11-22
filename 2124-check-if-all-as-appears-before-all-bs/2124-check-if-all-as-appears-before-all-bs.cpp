class Solution {
public:
    bool checkString(string s) {
        for(int i =0 ; i<s.size() -1 ; i++){
            char ch = s[i];
            if( ch > s[i+1]){
                return false;
            }
        }
        return true;
        
    }
};