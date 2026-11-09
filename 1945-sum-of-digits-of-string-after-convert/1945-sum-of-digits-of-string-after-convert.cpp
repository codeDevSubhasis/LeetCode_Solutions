class Solution {
public:
    int getLucky(string s, int k) {
        int n =s.size();
        int val=0;
        for(int i =0 ;i<n;i++){
            int val1=s[i] - 'a' + 1;
            while(val1>0){
                int lastD= val1%10;
                val+=lastD;
                val1=val1/10;
            }

        }
        int currSum;
        k=k-1;
        while(k > 0){
            int currSum=0;
            while(val>0){
                int lastD = val%10;
                currSum+=lastD;
                val=val/10;

            }
            val = currSum;
            k--;

            }
        return val;
    }
};