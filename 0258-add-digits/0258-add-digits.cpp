class Solution {
public:
    int addDigits(int num) {
        int n=num;
        long long remval=0;
        int nums=0;
        while(n>0){
            int lastd=n%10;
            remval=1LL*remval+lastd;
            n=n/10;
            if(n==0 &&  remval>9){
                n=remval;
                remval=0;
            }
            else if(n==0 && remval<=9){
                nums= remval;
                break;
            }

        }
        return nums;
    }
};