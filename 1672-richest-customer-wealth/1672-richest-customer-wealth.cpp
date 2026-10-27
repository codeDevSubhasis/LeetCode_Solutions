class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows=accounts.size();
        int cols=accounts[0].size();
        int maxSum=INT_MIN;
        int currSum;
        for(int i =0;i<rows;i++){
            currSum=0;
            for(int j =0;j<cols;j++){
                currSum+=accounts[i][j];
            }
            if(maxSum<currSum){
                maxSum=currSum;
            }
        }
        return maxSum;

        
    }
};