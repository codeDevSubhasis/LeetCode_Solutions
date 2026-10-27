class Solution {
public:
    bool digitCount(string num) {
        int n =num.size();
        int k=0;
        while(k<n){
            int count=0;
            for(int i=0;i<n;i++){
                int val=num[i]-'0';
                if(val==k){
                    count++;
                }
            }
            if(count!=num[k]-'0'){ //this is most important line for the code;
                return false;
            }
            k++;

        }
        return true;
    }
};