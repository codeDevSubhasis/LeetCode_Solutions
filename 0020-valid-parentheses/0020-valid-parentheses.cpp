class Solution {
public:
    bool isValid(string s) {
        stack<char>ans;
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];

            if(ch == '(' || ch == '{' || ch == '['  ){ // for opening
                ans.push(ch);
            }
            else{ // closing 
                if(ans.empty()){ // corner cases
                    return false;
                }
                if(ans.top() == '(' && ch == ')' || 
                    ans.top() == '{' && ch == '}' || 
                    ans.top() == '[' && ch == ']' ){

                    ans.pop();

                }
                else {
                    return false;
                }

            }
        }
        return ans.empty();
        // if(ans.empty()){
        //     return true;
        // }
        // return false;
    }
};