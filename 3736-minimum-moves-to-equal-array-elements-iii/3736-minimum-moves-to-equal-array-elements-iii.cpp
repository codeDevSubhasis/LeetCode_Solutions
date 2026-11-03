class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n =nums.size();
        int maxele=INT_MIN;
        for(int i=0;i<n;i++ ){
            maxele=max(maxele,nums[i]);
        }
        int maxMove=0;
        for(int i=0;i<n;i++){
            maxMove+=(maxele-nums[i]);
        }
        return maxMove;
        
    }
};