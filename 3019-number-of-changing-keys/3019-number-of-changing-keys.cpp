class Solution {
public:
    int countKeyChanges(string s) {
        int n =s.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            if((s[i]<='z' && s[i] >= 'a') && (s[i+1]<='Z' && s[i+1] >= 'A')){
                int val1= s[i] - 'a';
                int val2= s[i+1] - 'A';

                if(val1 != val2){
                    count++;
                }
            }
            else if((s[i]<='Z' && s[i] >= 'A') && (s[i +1 ]<='z' && s[i +1] >= 'a')){
                int val1= s[i] - 'A';
                int val2= s[i+1] - 'a';

                if(val1 != val2){
                    count++;
                }
            }
            else if((s[i]<='Z' && s[i] >= 'A') && (s[i +1 ]<='Z' && s[i +1] >= 'A')){
                int val1= s[i] - 'A';
                int val2= s[i+1] - 'A';

                if(val1 != val2){
                    count++;
                }
            }
            else if((s[i]<='z' && s[i] >= 'a') && (s[i +1 ]<='z' && s[i +1] >= 'a')){
                int val1= s[i] - 'a';
                int val2= s[i+1] - 'a';

                if(val1 != val2){
                    count++;
                }
            }
        }
        return count;
        
    }
};