class Solution {
public:
    int lengthOfLastWord(string s) {
        int n =s.size();
        int maxlen=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(count !=0){
                    maxlen=count;
                }
               count=0;
            }
            else{
                count++;
            }
        }
        if(s[n-1]!=' '){ // check last word as not space
           maxlen=count;
        }
        return maxlen;
        
    }
};