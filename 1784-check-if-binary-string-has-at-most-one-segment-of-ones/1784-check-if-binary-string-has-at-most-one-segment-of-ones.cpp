class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        int val = 1;
        for(int i=0; i<n; i++) {
             if(val == 1 && s[i] == '0'){
                val = 0;
            }
            else if( val == 0 &&  s[i] == '1'){
                return false;
            }
        }
        return true;
    }
};