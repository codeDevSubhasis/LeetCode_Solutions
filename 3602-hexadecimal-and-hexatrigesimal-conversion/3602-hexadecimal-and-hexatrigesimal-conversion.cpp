class Solution {
public:
    string concatHex36(int n) {
        long long n2=1LL*n*n;
        long long n3=1LL*n*n*n;
        string ans1;
        string ans2;
        while(n2>0){
            int l=n2%16;
            if(l>9){
                char ch='A'+(l-10);
                ans1 = ch + ans1;
            }
            else if(l <= 9){
                char ch = l+'0';
                ans1 = ch + ans1;
            }
            n2 = n2/16;

        }
         while(n3 > 0){
            int l =n3 % 36;
            if(l > 9){
                char ch='A'+(l-10);
                ans2 = ch + ans2;
            }
            else if(l<=9){
                char ch = l+'0';
                ans2 = ch + ans2;
            }
            n3=n3/36;

        }

       return ans1+ans2; 
        
    }
};