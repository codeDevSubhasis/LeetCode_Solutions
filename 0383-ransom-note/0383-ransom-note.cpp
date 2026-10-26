class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26]={0};
        for(int i=0;i<magazine.size();i++){
            int val=magazine[i]-'a';
            freq[val]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            int val=ransomNote[i]-'a';
            freq[val]--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]<0){
                return false;
            }
        }
        return true;
    }
};