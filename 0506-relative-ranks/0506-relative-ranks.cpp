class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n =score.size();
        vector<int>copy;
        for(int i=0;i<n;i++){
            copy.push_back(score[i]);
        }
        sort(copy.begin(),copy.end());
        reverse(copy.begin(),copy.end());

        vector<string>ans;
        
        for(int i=0;i<score.size();i++){
            for(int j=0;j<copy.size();j++){
                if(score[i] == copy[j]){
                    if(j==0){
                    ans.push_back("Gold Medal");
                    }
                    else if( j==1){
                        ans.push_back("Silver Medal");
                    }
                    else if(j==2){
                        ans.push_back("Bronze Medal");
                    }
                    else{
                        ans.push_back(to_string(j+1));
                    }
                }
            }
        }
        return ans;
        
    }
};