class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.size();
        string str;
        for(int i=0; i<n;i++){
            str = str + s[i];
        }

        int i =0;
        k = k-1;
        while(i<k){
            swap(str[i],str[k]);
            i++;
            k--;
        }
        return str;
    }
};