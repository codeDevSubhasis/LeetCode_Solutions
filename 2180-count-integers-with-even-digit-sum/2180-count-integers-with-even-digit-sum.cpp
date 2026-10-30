class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            int k=i;
            int digSum=0;
            while(k>0){
                int lastD=k%10;
                digSum+=lastD;
                k=k/10;
            }
            if(digSum%2==0){
                count++;
            }

        }
        return count;
        
    }
};