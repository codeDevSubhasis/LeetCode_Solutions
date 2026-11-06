class Solution {
public:
    int countSegments(string s) {
        if(s.size() == 0){
            return 0;
        }
        int count=0;
        int spcount=0;
        for(int i=0;i<s.size() ;i++){
            if(s[i] == ' ' && spcount == 0 ){
                count++;
                spcount++;

            }
            else  if(s[i] != ' '){
                spcount = 0;
            }
        }
        if(s[s.size() - 1] != ' '){
            count++;
        }
         
    if(s[0] == ' '){
        count = count-1;
    }

        return count;
    }
};