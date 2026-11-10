class Solution {
public:
    bool checkIfPangram(string sentence) {
        char ch= 'a';
        int n =sentence.size();
        int val=1;

        while(ch<='z'){
            val=0;
            for(int i=0;i<n;i++){
                if(sentence[i] == ch ){
                    val=1; //when char found
                    break;
                }
            }
            if(val != 1){
                return false;
            }
            ch++;
        }
        return true;
        
    }
};