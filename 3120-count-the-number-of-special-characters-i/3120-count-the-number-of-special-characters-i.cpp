class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n =word.size();
        int count=0;
        int freq1[26];
        int freq2[26];
        for(int i=0;i<n;i++){
            if(word[i]>='a' && word[i] <= 'z'){
                int val = word[i] - 'a';
                freq1[val]++;
            }
            else if(word[i]>='A' && word[i] <= 'Z'){
                int val = word[i] - 'A';
                freq2[val]++;
            }
        }
        for(int i=0;i<26;i++){
            if(freq1[i] >=1 && freq2[i]>=1){
                count++;
            }
        }
        
        return count;
    }
};