class Solution {
public:
    int differenceOfSums(int n, int m) {
        int divSum=0;
        int  notDivSum=0;
        int i=1;
        while(i<=n){
            if(i%m==0){
                divSum+=i;
            }
            else if(i%m!=0){
                notDivSum+=i;
            }
            i++;
        }
        return notDivSum-divSum;
        
    }
};