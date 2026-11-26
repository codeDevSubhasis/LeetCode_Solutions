class Solution {
public:
    bool canAliceWin(int n) {
        int move =10;
        int i=0;
        while(n>0){
            if(n-move>=0){
                i++;
            }
            n=n-move;
            move--;
        }
        if(i%2 !=0){
            return true;
        }
        return false;
        
    }
};