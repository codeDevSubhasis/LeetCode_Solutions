class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int altSum=0;
        int sign=1;
        for(int i=0;i<s.size();i++){
            int val=s[i]-'0';
            altSum=altSum+(sign*val);
            sign=sign*(-1);

        }
        return altSum;
        
    }
};