class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26] = {0};
        for(int i =0;i<s.size();i++){
            int val = s[i] -'a';
            freq[val]++;
        }
        for(int i =0;i<t.size();i++){
            int val = t[i] -'a';
            freq[val]--;
        }
        for(int i =0;i<26;i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;
    }
};